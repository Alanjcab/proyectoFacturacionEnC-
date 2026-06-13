#include "Usuario.h"
#include "Conexion.h"
#include <iostream>
#include <jdbc/cppconn/prepared_statement.h>
#include <jdbc/cppconn/resultset.h>
#include "clienteForm.h"
#include "registrarForm.h"
#include "ProductoForm.h"
#include "ProveedorForm.h"
#include "Facturacion1.h"

Usuario::Usuario() { 

}
Usuario::Usuario(
    std::string nombre,
    std::string apellido,
    int edad,
    int dni,
    std::string email,
    std::string pass,
    std::string rol
) {
    this->nombre = nombre;
    this->apellido = apellido;
    this->edad = edad;
    this->dni = dni;
    this->email = email;
    this->pass = pass;
    this->rol = rol;
}

namespace proyectoFacturacion {
    System::Void clienteForm::btnRegistrarEnCliente_Click(System::Object^ sender, System::EventArgs^ e) {
        registrarForm^ vistaRegistrar = gcnew registrarForm();
        vistaRegistrar->Show();
        this->Hide();
    }
    System::Void ProductoForm::btnRegistrarEnProducto_Click(System::Object^ sender, System::EventArgs^ e) {
        registrarForm^ vistaRegistrar = gcnew registrarForm();
        vistaRegistrar->Show();
        this->Hide();
    }
    System::Void ProveedorForm::btnRegistrarEnProveedor_Click(System::Object^ sender, System::EventArgs^ e) {
        registrarForm^ vistaRegistrar = gcnew registrarForm();
        vistaRegistrar->Show();
        this->Hide();
    }
    System::Void Facturacion::btnRegistrarEnFacturacion_Click(System::Object^ sender, System::EventArgs^ e) {
        registrarForm^ vistaRegistrar = gcnew registrarForm();
        vistaRegistrar->Show();
        this->Hide();
    }
   
}

//metodo de conexion.h para insertar 
bool Usuario::insertar() {
    Conexion conexion;
    sql::Connection* con = conexion.getConexion();
    try {
        sql::PreparedStatement* ps = con->prepareStatement(
            "insert into usuarios " "(nombre, apellido, edad, dni, email, pass, rol) ""values (?,?,?,?,?,?,?)"); //hago el insert en la tabla
        ps->setString(1, sql::SQLString(nombre));
        ps->setString(2, sql::SQLString(apellido));
        ps->setInt(3, edad);
        ps->setInt(4, dni);
        ps->setString(5, sql::SQLString(email));
        ps->setString(6, sql::SQLString(pass));
        ps->setString(7, sql::SQLString(rol));
        ps->executeUpdate();
        delete ps;
        std::cout << "Insert ok" << std::endl;
        return true;
    }

    catch (sql::SQLException& e) {
        std::cerr << "Error " << e.what() << std::endl;
        return false;
    }
}

//validar usuario
bool Usuario::validarUsuario(std::string email, std::string pass) {
    Conexion conexion;
    sql::Connection* con = conexion.getConexion();

    try {
        sql::PreparedStatement* ps;
        sql::ResultSet* rs;
        ps = con->prepareStatement("select * from usuarios where email = ? and pass = ?"); //hago consulta para verificar
        ps->setString(1, email);
        ps->setString(2, pass);

        rs = ps->executeQuery();

        if (rs->next()) {
            return true;
        }
        else {
            return false;
        }
    }
    catch (sql::SQLException& e) {
        std::cerr << "Error " << e.what() << std::endl;
        return false;
    }
}
//verificar rol
std::string Usuario::rolUsuario(std::string email, std::string pass) {
    Conexion conexion;
    sql::Connection* con = conexion.getConexion();
    try {
        sql::PreparedStatement* ps;
        sql::ResultSet* rs;

        ps = con->prepareStatement("SELECT rol, activo FROM usuarios WHERE email = ? AND pass = ?");
        ps->setString(1, email);
        ps->setString(2, pass);

        rs = ps->executeQuery();

        if (rs->next()) {
            bool activo = rs->getBoolean("activo");
            if (!activo) {
                return "INACTIVO";
            }
            return rs->getString("rol");
        }
        return "ERROR";
    }

    catch (sql::SQLException& e) {
        std::cerr << "Error " << e.what() << std::endl;
        return "ERROR";
    }
}
//busco por numero de dni
void Usuario::buscarUsuarioPorDni(int dni) {
    Conexion conexion;
    sql::Connection* con = conexion.getConexion();
    try {
        sql::PreparedStatement* ps;
        sql::ResultSet* rs;

        ps = con->prepareStatement("select * from usuarios where dni = ?");
        ps->setInt(1, dni);

        rs = ps->executeQuery();

        if (rs->next()) {

            std::cout << "usuario encontrad" << std::endl;

            this->id = rs->getInt("id");
            this->nombre = rs->getString("nombre");
            this->apellido = rs->getString("apellido");
            this->edad = rs->getInt("edad");
            this->dni = rs->getInt("dni");
            this->email = rs->getString("email");
            this->rol = rs->getString("rol");
            this->activo = rs->getBoolean("activo");
        }
        else {
            std::cout << "Usuario no encontrado" << std::endl;
        }
    }

    catch (sql::SQLException& e) {
        std::cerr << "Error " << e.what() << std::endl;
    }
}

int Usuario::getId() {
    return id;
}
std::string Usuario::getNombre() {
    return nombre;
}
std::string Usuario::getApellido() {
    return apellido;
}
int Usuario::getEdad() {
    return edad;
}
int Usuario::getDni() {
    return dni;
}
std::string Usuario::getEmail() {
    return email;
}
std::string Usuario::getRol() {
    return rol;
}
bool Usuario::getActivo() {
    return activo;
}

//deshabilitar usuario por dni
void Usuario::deshabilitarUsuario(int dni) {

    Conexion conexion;
    sql::Connection* con = conexion.getConexion();
    try {
        sql::PreparedStatement* ps;
        ps = con->prepareStatement("update usuarios set activo = 0 where dni = ?");
        ps->setInt(1, dni);
        ps->executeUpdate();
        std::cout << "Usuario deshabilitado correctamente" << std::endl;
    }
    catch (sql::SQLException& e) {
        std::cerr << "Error " << e.what() << std::endl;
    }
  
}

void Usuario::habilitarUsuario(int dni) {

    Conexion conexion;
    sql::Connection* con = conexion.getConexion();
    try {
        sql::PreparedStatement* ps;
        ps = con->prepareStatement("update usuarios set activo = 1 where dni = ?");
        ps->setInt(1, dni);
        ps->executeUpdate();
        std::cout << "Usuario habilitado correctamente" << std::endl;
    }
    catch (sql::SQLException& e) {
        std::cerr << "Error " << e.what() << std::endl;
    }

}

//actualizar usuario

void Usuario::actualizarUsuario(int id,std::string nombre,std::string apellido,int edad,int dni,std::string email,std::string rol) {
    Conexion conexion;
    sql::Connection* con = conexion.getConexion();
    try {
        
        sql::PreparedStatement* ps;
        ps = con->prepareStatement("update usuarios set nombre = ? ,apellido = ? ,edad = ? ,dni = ? ,email = ? ,rol = ? where id = ?");
        
        ps->setString(1, nombre);
        ps->setString(2, apellido);
        ps->setInt(3, edad);
        ps->setInt(4, dni);
        ps->setString(5, email);
        ps->setString(6, rol);
        ps->setInt(7, id);

        ps->executeUpdate();
    }
    catch (sql::SQLException& e) {
        std::cerr << "Error " << e.what() << std::endl;
    }
}
