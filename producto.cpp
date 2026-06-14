#include "Producto.h"
#include "Conexion.h"
#include <iostream>
#include <jdbc/cppconn/prepared_statement.h>
#include <jdbc/cppconn/resultset.h>
#include "clienteForm.h"
#include "ProductoForm.h"
#include "registrarForm.h"
#include "ProveedorForm.h"
#include "Facturacion1.h"

//llamos a los botones de las vistas
namespace proyectoFacturacion {
    System::Void clienteForm::btnProductoEnCliente_Click(System::Object^ sender, System::EventArgs^ e) {
        ProductoForm^ vistaProducto = gcnew ProductoForm(rolUsuario);
        vistaProducto->Show();
        this->Hide();
    }
    System::Void registrarForm::btnProductoEnRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
        ProductoForm^ vistaProducto = gcnew ProductoForm(rolUsuario);
        vistaProducto->Show();
        this->Hide();
    }
    System::Void ProveedorForm::btnProductoEnProveedor_Click(System::Object^ sender, System::EventArgs^ e) {
        ProductoForm^ vistaProducto = gcnew ProductoForm(rolUsuario);
        vistaProducto->Show();
        this->Hide();
    }
    System::Void Facturacion::btnProductoEnFacturacion_Click(System::Object^ sender, System::EventArgs^ e) {
        ProductoForm^ vistaProducto = gcnew ProductoForm(rolUsuario);
        vistaProducto->Show();
        this->Hide();
    }
}


Producto::Producto(){}

Producto::Producto(int codigo, std::string descripcion, double precio, int stock, int idProveedor){
    this->codigo= codigo;
    this->descripcion = descripcion;
    this->precio = precio;
    this->stock = stock;
    this->idProveedor = idProveedor;
}
//getters
int Producto::getIdProducto() {
    return idProducto;
}
int Producto::getCodigo() {
    return codigo;
}
std::string Producto::getDescripcion() {
    return descripcion;
}
double Producto::getPrecio() {
    return precio;
}
int Producto::getStock() {
    return stock;
}
int Producto::getIdProveedor() {
    return idProveedor;
}
bool Producto::getActivo() {
    return activo;
}
std::string Producto::getNombreProveedor() {
    return nombreProveedor;
}
//doy de alta un producto y hago el insert
void Producto::altaProducto() {
    Conexion conexion;
    sql::Connection* con = conexion.getConexion();
    try {
        sql::PreparedStatement* ps = con->prepareStatement(
            "insert into productos " "(codigo, descripcion, precio, stock, idProveedor) ""values (?,?,?,?,?)"); //hago el insert en la tabla
        ps->setInt(1,codigo);
        ps->setString(2, sql::SQLString(descripcion));
        ps->setDouble(3,precio );
        ps->setInt(4, stock);
        ps->setInt(5, idProveedor);
        ps->executeUpdate();
        delete ps;
    }
    catch (sql::SQLException& e) {
        std::cerr << "Error " << e.what() << std::endl;
    }
}
//busco producto por codigo
void Producto::buscarProducto(int codigo) {
    Conexion conexion;
    sql::Connection* con = conexion.getConexion();

    try {
        sql::PreparedStatement* ps;
        sql::ResultSet* rs;
        ps = con->prepareStatement("select p.idProducto, p.codigo, p.descripcion, p.precio, p.stock, p.activo, pr.nombreProveedor from productos p inner join proveedores pr on p.idProveedor = pr.idProveedor where p.codigo = ? ");
        ps->setInt(1, codigo);
        rs = ps->executeQuery();

        if (rs->next()) {
            this->idProducto = rs->getInt("idProducto");
            this->codigo = rs->getInt("codigo");
            this->descripcion = rs->getString("descripcion");
            this->precio = rs->getDouble("precio");
            this->stock = rs->getInt("stock");
            this->nombreProveedor = rs->getString("nombreProveedor");
            this->activo = rs->getBoolean("activo");
        }
    } catch (sql::SQLException& e) {
            std::cerr << "Error " << e.what() << std::endl;
      }
}
//actualizo datos de un producto
void Producto::actualizarProducto(int idProducto, std::string descripcion, double precio, int stock) {
    Conexion conexion;
    sql::Connection* con = conexion.getConexion();
    try {
        sql::PreparedStatement* ps;
        ps = con->prepareStatement("update productos set descripcion = ?, precio = ?, stock = ? where idProducto = ?");     
        ps->setString(1, descripcion);
        ps->setDouble(2, precio);
        ps->setInt(3, stock);
        ps->setInt(4, idProducto);
        ps->executeUpdate();
    }
    catch (sql::SQLException& e) {
        std::cerr << "Error " << e.what() << std::endl;
    }
}
//deshabilito prudcto por codigo
void Producto::deshabilitarProducto(int codigo) {
    Conexion conexion;
    sql::Connection* con = conexion.getConexion();
    try {
        sql::PreparedStatement* ps;
        ps = con->prepareStatement("update productos set activo = 0 where codigo = ?");
        ps->setInt(1, codigo);
        ps->executeUpdate();
    }
    catch (sql::SQLException& e) {
        std::cerr << "Error " << e.what() << std::endl;
    }
}
//habilito producto
void Producto::habilitarProducto(int codigo) {
    Conexion conexion;
    sql::Connection* con = conexion.getConexion();
    try {
        sql::PreparedStatement* ps;
        ps = con->prepareStatement("update productos set activo = 1 where codigo = ?");
        ps->setInt(1, codigo);
        ps->executeUpdate();
    }
    catch (sql::SQLException& e) {
        std::cerr << "Error " << e.what() << std::endl;
    }
}