#pragma
#include "Cliente.h"
#include "Conexion.h"
#include <iostream>
#include <jdbc/cppconn/prepared_statement.h>
#include <jdbc/cppconn/resultset.h>

Cliente::Cliente() {}

Cliente::Cliente(std::string nombre, std::string apellido, int dniCliente, std::string emailCliente) {
	this->nombre = nombre;
	this->apellido = apellido;
	this->dniCliente = dniCliente;
	this->emailCliente = emailCliente;
}

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

void Cliente::altaDeCliente() {   //doy de alta al cliente
	Conexion conexion;
	sql::Connection* con = conexion.getConexion();
	try {
		sql::PreparedStatement* ps = con->prepareStatement(
			"insert into clientes " "(nombre, apellido, dniCliente, emailCliente) ""values (?,?,?,?)"); //hago el insert en la tabla
		ps->setString(1, sql::SQLString(nombre));
		ps->setString(2, sql::SQLString(apellido));
		ps->setInt(3, dniCliente);
		ps->setString(4, sql::SQLString(emailCliente));
		ps->executeUpdate();
		delete ps;
		std::cout << "Insert cliente ok" << std::endl;
	}
	catch (sql::SQLException& e) {
		std::cerr << "Error " << e.what() << std::endl;
	}
}

void Cliente::buscarCliente(int dniCliente) {  //busco cliente por numero de dni
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

void Cliente::deshabilitarCliente(int dniCliente) {  //deshabilito al cliente por numero de dni
	Conexion conexion;
	sql::Connection* con = conexion.getConexion();
	try {
		sql::PreparedStatement* ps;
		ps = con->prepareStatement("update clientes set activo = 0 where dniCliente = ?");
		ps->setInt(1, dniCliente);
		ps->executeUpdate();
		std::cout << "Cliente deshabilitado correctamente" << std::endl;
	}
	catch (sql::SQLException& e) {
		std::cerr << "Error " << e.what() << std::endl;
	}
}

void Cliente::actualizarCliente(int idCliente, std::string nombre, std::string apellido, int dniCliente, std::string emailCliente) { //actualizo datos de un cliente
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

void Cliente::mostrarClientes() {  //muestro todos los clientes existentes
	Conexion conexion;
	sql::Connection* con = conexion.getConexion();
	try {
		sql::PreparedStatement* ps;
		sql::ResultSet* rs;

		ps = con->prepareStatement("select * from clientes");

		rs = ps->executeQuery();

		if (rs->next()) {

			std::cout << "clientes encontrados" << std::endl;

			this->idCliente = rs->getInt("id");
			this->nombre = rs->getString("nombre");
			this->apellido = rs->getString("apellido");
			this->dniCliente = rs->getInt("dni");
			this->emailCliente = rs->getString("email");
			this->activo = rs->getBoolean("activo");
		}
	}
	catch (sql::SQLException& e) {
		std::cerr << "Error " << e.what() << std::endl;
	}
}