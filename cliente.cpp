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

void Cliente::buscarCliente(int dni) {  //busco cliente por numero de dni
	Conexion conexion;
	sql::Connection* con = conexion.getConexion();
	try {

	}
	catch (sql::SQLException& e) {
		std::cerr << "Error " << e.what() << std::endl;
	}
}

void Cliente::deshabilitarCliente(int dni) {  //deshabilito al cliente por numero de dni
	Conexion conexion;
	sql::Connection* con = conexion.getConexion();
	try {

	}
	catch (sql::SQLException& e) {
		std::cerr << "Error " << e.what() << std::endl;
	}
}

void Cliente::actualizarCliente(int idCliente) { //actualizo datos de un cliente
	Conexion conexion;
	sql::Connection* con = conexion.getConexion();
	try {

	}
	catch (sql::SQLException& e) {
		std::cerr << "Error " << e.what() << std::endl;
	}
}

void Cliente::mostrarClientes() {  //muestro todos los clientes existentes
	Conexion conexion;
	sql::Connection* con = conexion.getConexion();
	try {

	}
	catch (sql::SQLException& e) {
		std::cerr << "Error " << e.what() << std::endl;
	}
}