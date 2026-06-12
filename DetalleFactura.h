#pragma once

class DetalleFactura {
private:
    int idDetalle;
    int idFactura;
    int idProducto;
    int cantidad;
    double precioUnitario;
    double descuentoProducto;
    double subtotalNeto;
    double subtotalProducto;

public:
    DetalleFactura();
    DetalleFactura(int idFactura, int idProducto, int cantidad, double precioUnitario, double descuentoProducto, double subtotalNeto, double subtotalProducto);
    void guardarDetalle();
};