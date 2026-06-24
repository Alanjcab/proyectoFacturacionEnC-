#pragma once
#include <string>

class Proveedor {
	private:
		int idProveedor;
		std::string nombreProveedor;
		int cuit;
		std::string emailProveedor;
		bool activo;
	public:
		Proveedor();
		Proveedor(std::string nombreProveedor, int cuit, std::string emailProveedor);
		int getIdProveedor();
		std::string getNombreProveedor();
		int getCuit();
		std::string getEmailProveedor();
		bool getActivo();
		 void altaDeProveedor();
		 void buscarProveedor(int cuit);
		 bool existeProveedorPorCuit(int cuit);
		 void actualizarProveedor(int idProveedor, std::string nombreProveedor, int cuit, std::string emailProveedor);
		 void deshabilitarProveedor(int cuit);
		 void habilitarProveedor(int cuit);
		 void mostrarProveedoresActivos();
};