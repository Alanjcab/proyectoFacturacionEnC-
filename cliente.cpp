#pragma
#include "Cliente.h"
#include "Conexion.h"
#include <iostream>
#include <jdbc/cppconn/prepared_statement.h>
#include <jdbc/cppconn/resultset.h>
#include "clienteForm.h"
#include "productoForm.h"
#include "registrarForm.h"
#include "ProveedorForm.h"
#include "Facturacion1.h"

//llamo a los botones para ir a otras vistas
namespace proyectoFacturacion {
	System::Void ProductoForm::btnClienteEnProducto_Click(System::Object^ sender, System::EventArgs^ e) {
		clienteForm^ vistaCliente = gcnew clienteForm(rolUsuario);
		vistaCliente->Show();
		this->Hide();
	}
	System::Void registrarForm::btnClienteEnRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
		clienteForm^ vistaCliente = gcnew clienteForm(rolUsuario);
		vistaCliente->Show();
		this->Hide();
	}
	System::Void ProveedorForm::btnClienteEnProveedor_Click(System::Object^ sender, System::EventArgs^ e) {
		clienteForm^ vistaCliente = gcnew clienteForm(rolUsuario);
		vistaCliente->Show();
		this->Hide();
	}
	System::Void Facturacion::btnClienteEnFacturacion_Click(System::Object^ sender, System::EventArgs^ e) {
		clienteForm^ vistaCliente = gcnew clienteForm(rolUsuario);
		vistaCliente->Show();
		this->Hide();
	}
}

Cliente::Cliente() {}

Cliente::Cliente(std::string nombre, std::string apellido, int dniCliente, std::string emailCliente) {
	this->nombre = nombre;
	this->apellido = apellido;
	this->dniCliente = dniCliente;
	this->emailCliente = emailCliente;
}

//getters
int Cliente::getIdCliente() {
	return idCliente;
}

std::string Cliente::getNombre() {
	return nombre;
}

std::string Cliente::getApellido() {
	return apellido;
}

int Cliente::getDniCliente() {
	return dniCliente;
}

std::string Cliente::getEmailCliente() {
	return emailCliente;
}

bool Cliente::getActivo() {
	return activo;
}

//doy de alta al cliente
void Cliente::altaDeCliente() {   
	Conexion conexion;
	sql::Connection* con = conexion.getConexion();
	try {
		sql::PreparedStatement* ps = con->prepareStatement(
			"insert into clientes " "(nombre, apellido, dniCliente, emailCliente) ""values (?,?,?,?)"); 
		ps->setString(1, sql::SQLString(nombre));
		ps->setString(2, sql::SQLString(apellido));
		ps->setInt(3, dniCliente);
		ps->setString(4, sql::SQLString(emailCliente));
		ps->executeUpdate();
		delete ps;
	}
	catch (sql::SQLException& e) {
		std::cerr << "Error " << e.what() << std::endl;
	}
}
//busco cliente por numero de dni
void Cliente::buscarCliente(int dniCliente) {  
	Conexion conexion;
	sql::Connection* con = conexion.getConexion();
	try {
		sql::PreparedStatement* ps;
		sql::ResultSet* rs;

		ps = con->prepareStatement("select * from clientes where dniCliente = ?");
		ps->setInt(1, dniCliente);
		rs = ps->executeQuery();

		if (rs->next()) {

			std::cout << "usuario encontrad" << std::endl;

			this->idCliente = rs->getInt("idCliente");
			this->nombre = rs->getString("nombre");
			this->apellido = rs->getString("apellido");
			this->dniCliente = rs->getInt("dniCliente");
			this->emailCliente = rs->getString("emailCliente");
			this->activo = rs->getBoolean("activo");
		}
	}
	catch (sql::SQLException& e) {
		std::cerr << "Error " << e.what() << std::endl;
	}
}
//deshabilito al cliente por numero de dni
void Cliente::deshabilitarCliente(int dniCliente) { 
	Conexion conexion;
	sql::Connection* con = conexion.getConexion();
	try {
		sql::PreparedStatement* ps;
		ps = con->prepareStatement("update clientes set activo = 0 where dniCliente = ?");
		ps->setInt(1, dniCliente);
		ps->executeUpdate();
	}
	catch (sql::SQLException& e) {
		std::cerr << "Error " << e.what() << std::endl;
	}
}
//deshabilito al cliente por numero de dni
void Cliente::habilitarCliente(int dniCliente) {  
	Conexion conexion;
	sql::Connection* con = conexion.getConexion();
	try {
		sql::PreparedStatement* ps;
		ps = con->prepareStatement("update clientes set activo = 1 where dniCliente = ?");
		ps->setInt(1, dniCliente);
		ps->executeUpdate();
	}
	catch (sql::SQLException& e) {
		std::cerr << "Error " << e.what() << std::endl;
	}
}

//actualizo datos de un cliente
void Cliente::actualizarCliente(int idCliente, std::string nombre, std::string apellido, int dniCliente, std::string emailCliente) { 
	Conexion conexion;
	sql::Connection* con = conexion.getConexion();
	try {
		sql::PreparedStatement* ps;
		ps = con->prepareStatement("update clientes set nombre = ? ,apellido = ? ,dniCliente = ? ,emailCliente = ? where idCliente = ?");

		ps->setString(1, nombre);
		ps->setString(2, apellido);
		ps->setInt(3, dniCliente);
		ps->setString(4, emailCliente);
		ps->setInt(5, idCliente);

		ps->executeUpdate();
	}
	catch (sql::SQLException& e) {
		std::cerr << "Error " << e.what() << std::endl;
	}
}

bool Cliente::existeClientePorDni(int dni) {
	Conexion conexion;
	sql::Connection* con = conexion.getConexion();
	try {
		sql::PreparedStatement* ps;
		ps = con->prepareStatement("select count(*) from clientes where dniCliente = ?");
		ps->setInt(1, dni);
		sql::ResultSet* rs = ps->executeQuery();
		if (rs->next()) {
			int cantidad = rs->getInt(1);
			return cantidad > 0;
		}
		return false;
	}
	catch (sql::SQLException& e) {
		std::cerr << "Error " << e.what() << std::endl;
		return true;
	}
}

