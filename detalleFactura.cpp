#include "DetalleFactura.h"
#include "Conexion.h"
#include <iostream>
#include <jdbc/cppconn/prepared_statement.h>



DetalleFactura::DetalleFactura() {}

DetalleFactura::DetalleFactura(
    int idFactura,
    int idProducto,
    int cantidad,
    double precioUnitario,
    double descuentoProducto,
    double subTotal
)
{
    this->idFactura = idFactura;
    this->idProducto = idProducto;
    this->cantidad = cantidad;
    this->precioUnitario = precioUnitario;
    this->descuentoProducto = descuentoProducto;
    this->subTotal = subTotal;
}

void DetalleFactura::guardarDetalle() {
    Conexion conexion;
    sql::Connection* con = conexion.getConexion();

    try {
        sql::PreparedStatement* ps = con->prepareStatement("insert into detalleFactura (idFactura, idProducto, cantidad, precioUnitario, subTotal, descuentoProducto) values (?, ?, ?, ?, ?, ?)");
        ps->setInt(1, idFactura);
        ps->setInt(2, idProducto);
        ps->setInt(3, cantidad);
        ps->setDouble(4, precioUnitario);
        ps->setDouble(5, subTotal);
        ps->setDouble(6, descuentoProducto);
        
        ps->executeUpdate();
        delete ps;
    }
    catch (sql::SQLException& e) {
        std::cerr << "Error " << e.what() << std::endl;
    }
}