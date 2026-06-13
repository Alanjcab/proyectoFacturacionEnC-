#pragma once
#include <string>

class Factura{
private:
    int idFactura;
    int idCliente;
    double subtotal;
    double descuentoGeneral;
    double total;

public:
    Factura();
    Factura(int idCliente, double subtotal, double descuentoGeneral, double total);
    int guardarFactura();
};