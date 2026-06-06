#pragma once
#include <string>

class Producto {
	private: 
		int idProducto;
		int codigo;
		std::string descripcion;
		double precio;
		int stock;
		bool activo;
		int idProveedor;
	public:
		Producto();
		Producto(int codigo, std::string descripcion, double precio, int stock, int idProveedor);
		void altaProducto();
		void buscarProducto(int codigo);
		void actualizarProducto(int idProducto, std::string descripcion, double precio, int idProveedor);
		void deshabilitarProducto(int idProducto);
		void sumarStock(int idProducto, int cantidad);
		void descontarStock(int idProducto, int cantidad);
};