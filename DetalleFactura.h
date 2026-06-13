#pragma once

class DetalleFactura {
private:
    int idFactura;
    int idProducto;
    int cantidad;
    double precioUnitario;
    double descuentoProducto;
    double subtotalNeto;
public:
    DetalleFactura();
    DetalleFactura(int idFactura, int idProducto, int cantidad, double precioUnitario, double descuentoProducto, double subtotalNeto);
    void guardarDetalle();
};