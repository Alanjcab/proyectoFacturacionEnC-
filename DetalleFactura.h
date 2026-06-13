#pragma once

class DetalleFactura {
private:
    int idFactura;
    int idProducto;
    int cantidad;
    double precioUnitario;
    double descuentoProducto;
    double subTotal;
public:
    DetalleFactura();
    DetalleFactura(int idFactura, int idProducto, int cantidad, double precioUnitario, double subTotal, double descuentoProducto);
    void guardarDetalle();
};