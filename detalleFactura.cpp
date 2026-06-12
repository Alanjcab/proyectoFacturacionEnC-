#include "DetalleFactura.h"

DetalleFactura::DetalleFactura() {}

DetalleFactura::DetalleFactura(
    int idFactura,
    int idProducto,
    int cantidad,
    double precioUnitario,
    double descuentoProducto,
    double subtotalNeto,
    double subtotalProducto
)
{
    this->idFactura = idFactura;
    this->idProducto = idProducto;
    this->cantidad = cantidad;
    this->precioUnitario = precioUnitario;
    this->descuentoProducto = descuentoProducto;
    this->subtotalNeto = subtotalNeto;
    this->subtotalProducto = subtotalProducto;
}

void DetalleFactura::guardarDetalle()
{
    // INSERT INTO detalleFactura
}