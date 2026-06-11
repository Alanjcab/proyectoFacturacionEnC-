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
	Usuario();// Constructor vacío para crear un usuario sin datos y cargarlos después al buscar por dni
	Usuario( // Constructor con parámetros para cuendo ya tengo todos los datos y quiero crear el obj completo al registrar
		std::string nombre,
		std::string apellido,
		int edad,
		int dni,
		std::string email,
		std::string pass,
		std::string rol
	);
	bool insertar(); //inserta el usuario en la base de datos con los datos que ingreso
	bool validarUsuario(std::string email, std::string pass); //valido el usuario con mail y contra
	std::string rolUsuario(std::string email, std::string pass); //verifico que sea admin
	void buscarUsuarioPorDni(int dni); //busco por dni el usuario
	std::string getNombre();
	std::string getApellido();
	int getEdad();
	int getDni();
	int getId();
	std::string getEmail();
	std::string getRol();
	bool getActivo();
	void actualizarUsuario( //actualiza los campos del usuario
		int id,
		std::string nombre,
		std::string apellido,
		int edad,
		int dni,
		std::string email,
		std::string rol
	);
	void deshabilitarUsuario(int dni);
	void habilitarUsuario(int dni);
	void mostrarUsuariosActivos();
};