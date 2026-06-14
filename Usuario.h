#pragma once
#include <string>

class Usuario {
private:
	std::string nombre;
	std::string apellido;
	int edad;
	int dni;
	int id;
	std::string email;
	std::string pass;
	std::string rol;
	bool activo;
public:
	Usuario();
	Usuario( 
		std::string nombre,
		std::string apellido,
		int edad,
		int dni,
		std::string email,
		std::string pass,
		std::string rol
	);
	bool insertar(); 
	bool validarUsuario(std::string email, std::string pass); 
	std::string rolUsuario(std::string email, std::string pass); 
	void buscarUsuarioPorDni(int dni); 
	std::string getNombre();
	std::string getApellido();
	int getEdad();
	int getDni();
	int getId();
	std::string getEmail();
	std::string getRol();
	bool getActivo();
	void actualizarUsuario(int id,std::string nombre,std::string apellido,int edad,int dni,std::string email,std::string rol);
	void deshabilitarUsuario(int dni);
	void habilitarUsuario(int dni);
	void mostrarUsuariosActivos();
};