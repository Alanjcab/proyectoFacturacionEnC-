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
		std::string nombreProveedor;
	public:
		Producto();
		Producto(int codigo, std::string descripcion, double precio, int stock, int idProveedor);

		int getIdProducto();
		int getCodigo();
		std::string getDescripcion();
		double getPrecio();
		int getStock();
		bool getActivo();
		std::string getNombreProveedor();
		int getIdProveedor();

		void altaProducto();
		void buscarProducto(int codigo);
		bool existeProductoPorCodigo(int codigo);
		void actualizarProducto(int idProducto, std::string descripcion, double precio,int stock);
		void deshabilitarProducto(int codigo);
		void habilitarProducto(int codigo);
		void sumarStock(int idProducto, int cantidad);
		void descontarStock(int idProducto, int cantidad);
		void mostrarProductoActivos();
};