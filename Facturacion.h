#pragma once
#include <string>

class Facturacion{
private:
    int idFactura;
    int idCliente;
    double subtotalProducto;
    double subtotalNeto;
    double descuentoGeneral;
    double total;

public:
    Facturacion();
    Facturacion(int idCliente, double subtotalProducto, double subtotalNeto, double descuentoGeneral, double total);
    int guardarFactura();
};