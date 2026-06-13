#include "DetalleFactura.h"

DetalleFactura::DetalleFactura() {}

DetalleFactura::DetalleFactura(
    int idFactura,
    int idProducto,
    int cantidad,
    double precioUnitario,
    double descuentoProducto,
    double subtotalNeto
)
{
    this->idFactura = idFactura;
    this->idProducto = idProducto;
    this->cantidad = cantidad;
    this->precioUnitario = precioUnitario;
    this->descuentoProducto = descuentoProducto;
    this->subtotalNeto = subtotalNeto;
}

void DetalleFactura::guardarDetalle()
{
    // INSERT INTO detalleFactura
}