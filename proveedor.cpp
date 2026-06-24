#pragma
#include "Proveedor.h"
#include "Conexion.h"
#include <iostream>
#include <jdbc/cppconn/prepared_statement.h>
#include <jdbc/cppconn/resultset.h>
#include "clienteForm.h"
#include "ProveedorForm.h"
#include "registrarForm.h"
#include "ProductoForm.h"
#include "Facturacion1.h"

namespace proyectoFacturacion {
	System::Void clienteForm::btnProveedorEnCliente_Click(System::Object^ sender, System::EventArgs^ e) {
		ProveedorForm^ vistaProveedor = gcnew ProveedorForm(rolUsuario);
		vistaProveedor->Show();
		this->Hide();
	}
	System::Void registrarForm::btnProveedorEnRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
		ProveedorForm^ vistaProveedor = gcnew ProveedorForm(rolUsuario);
		vistaProveedor->Show();
		this->Hide();
	}
	System::Void ProductoForm::btnProveedorEnProducto_Click(System::Object^ sender, System::EventArgs^ e) {
		ProveedorForm^ vistaProveedor = gcnew ProveedorForm(rolUsuario);
		vistaProveedor->Show();
		this->Hide();
	}
	System::Void Facturacion::btnProveedorEnFacturacion_Click(System::Object^ sender, System::EventArgs^ e) {
		ProveedorForm^ vistaProveedor = gcnew ProveedorForm(rolUsuario);
		vistaProveedor->Show();
		this->Hide();
	}
}



Proveedor::Proveedor(){
}
Proveedor::Proveedor(std::string nombreProveedor, int cuit, std::string emailProveedor) {
	this->nombreProveedor = nombreProveedor;
	this->cuit = cuit;
	this->emailProveedor = emailProveedor;
}
//getetrs
int Proveedor::getIdProveedor() {
	return idProveedor;
}

std::string Proveedor::getNombreProveedor() {
	return nombreProveedor;
}

int Proveedor::getCuit() {
	return cuit;
}

std::string Proveedor::getEmailProveedor() {
	return emailProveedor;
}

bool Proveedor::getActivo() {
	return activo;
}

//doy de alta el proveedor
void Proveedor::altaDeProveedor() {
	Conexion conexion;
	sql::Connection* con = conexion.getConexion();
	try {
		sql::PreparedStatement* ps = con->prepareStatement(
			"insert into proveedores " "(nombreProveedor, cuit, emailProveedor) ""values (?,?,?)"); //hago el insert en la tabla proveedores
		ps->setString(1, sql::SQLString(nombreProveedor));
		ps->setInt(2, cuit);
		ps->setString(3, sql::SQLString(emailProveedor));
		ps->executeUpdate();
		delete ps;
	}
	catch (sql::SQLException& e) {
		std::cerr << "Error " << e.what() << std::endl;
	}
}
//busco proveedor por cuit
void Proveedor::buscarProveedor(int cuit) {
	Conexion conexion;
	sql::Connection* con = conexion.getConexion();
	try {
		sql::PreparedStatement* ps;
		sql::ResultSet* rs;

		ps = con->prepareStatement("select * from proveedores where cuit = ?");
		ps->setInt(1, cuit);

		rs = ps->executeQuery();

		if (rs->next()) {
			this->idProveedor = rs->getInt("idProveedor");
			this->nombreProveedor = rs->getString("nombreProveedor");
			this->cuit = rs->getInt("cuit");
			this->emailProveedor = rs->getString("emailProveedor");
			this->activo = rs->getBoolean("activo");
		}
	}
	catch (sql::SQLException& e) {
		std::cerr << "Error " << e.what() << std::endl;
	}
}

//actualizo daots del proveedor
void Proveedor::actualizarProveedor(int idProveedor, std::string nombreProveedor, int cuit, std::string emailProveedor) {
	Conexion conexion;
	sql::Connection* con = conexion.getConexion();
	try {
		sql::PreparedStatement* ps;
		ps = con->prepareStatement("update proveedores set nombreProveedor = ? ,cuit = ? ,emailProveedor = ? where idProveedor = ?");

		ps->setString(1, nombreProveedor);
		ps->setInt(2, cuit);
		ps->setString(3, emailProveedor);
		ps->setInt(4, idProveedor);
		ps->executeUpdate();
		delete ps;
	}
	catch (sql::SQLException& e) {
		std::cerr << "Error " << e.what() << std::endl;
	}
}
//deshabilito proveedor por cuit
void Proveedor::deshabilitarProveedor(int cuit) {
	Conexion conexion;
	sql::Connection* con = conexion.getConexion();
	try {
		sql::PreparedStatement* ps;
		ps = con->prepareStatement("update proveedores set activo = 0 where cuit = ?");
		ps->setInt(1, cuit);
		ps->executeUpdate();
	}
	catch (sql::SQLException& e) {
		std::cerr << "Error " << e.what() << std::endl;
	}
}
//habilito proveedor por cuit
void Proveedor::habilitarProveedor(int cuit) {
	Conexion conexion;
	sql::Connection* con = conexion.getConexion();
	try {
		sql::PreparedStatement* ps;
		ps = con->prepareStatement("update proveedores set activo = 1 where cuit = ?");
		ps->setInt(1, cuit);
		ps->executeUpdate();
	}
	catch (sql::SQLException& e) {
		std::cerr << "Error " << e.what() << std::endl;
	}
}
//veo si existe el cuit del proveedor al registrar
bool Proveedor::existeProveedorPorCuit(int cuit) {
	Conexion conexion;
	sql::Connection* con = conexion.getConexion();

	try {
		sql::PreparedStatement* ps;
		ps = con->prepareStatement("select count(*) from proveedores where cuit = ?");
		ps->setInt(1, cuit);
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
