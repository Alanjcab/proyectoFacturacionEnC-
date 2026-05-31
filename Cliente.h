#pragma once
#include <string>

class Cliente {
private:
	int idCliente;
	std::string nombre;
	std::string apellido;
	int dniCliente;
	std::string emailCliente;
	bool activo;
public:
	Cliente();
	Cliente(std::string nombre, std::string apellido, int dniCliente, std::string emailCliente);
	void altaDeCliente();
	void buscarCliente(int dni);
	void deshabilitarCliente(int dni);
	void actualizarCliente(int idCliente);
	void mostrarClientes();
};