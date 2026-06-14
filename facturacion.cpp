#include "Facturacion.h"
#include "Conexion.h"
#include <iostream>
#include <jdbc/cppconn/prepared_statement.h>
#include <jdbc/cppconn/resultset.h>
#include "Facturacion1.h"
#include "clienteForm.h"
#include "registrarForm.h"
#include "ProductoForm.h"
#include "ProveedorForm.h"

//llamo a los botones de las vistas
namespace proyectoFacturacion {
	System::Void clienteForm::btnFacturacionEnCliente_Click(System::Object^ sender, System::EventArgs^ e) {
		Facturacion^ vistaFacturacion = gcnew Facturacion(rolUsuario);
		vistaFacturacion->Show();
		this->Hide();
	}
	System::Void registrarForm::btnFacturacionEnRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
		Facturacion^ vistaFacturacion = gcnew Facturacion(rolUsuario);
		vistaFacturacion->Show();
		this->Hide();
	}
	System::Void ProductoForm::btnFacturacionEnProducto_Click(System::Object^ sender, System::EventArgs^ e) {
		Facturacion^ vistaFacturacion = gcnew Facturacion(rolUsuario);
		vistaFacturacion->Show();
		this->Hide();
	}
	System::Void ProveedorForm::btnFacturacionEnProveedor_Click(System::Object^ sender, System::EventArgs^ e) {
		Facturacion^ vistaFacturacion = gcnew Facturacion(rolUsuario);
		vistaFacturacion->Show();
		this->Hide();
	}
}

Factura::Factura() {}

Factura::Factura(
	int idCliente,
	double subtotal,
	double descuentoGeneral,
	double total
)
{
	this->idCliente = idCliente;
	this->subtotal = subtotal;
	this->descuentoGeneral = descuentoGeneral;
	this->total = total;
}

//guardo la factura con un insert y obtengo el id para asociar
int Factura::guardarFactura()
{
	Conexion conexion;
	sql::Connection* con = conexion.getConexion();
	try {
		sql::PreparedStatement* ps = con->prepareStatement("insert into facturas (idCliente, subtotal, descuentoGeneral, total) values (?, ?, ?, ?)");
		ps->setInt(1, idCliente);
		ps->setDouble(2, subtotal);
		ps->setDouble(3, descuentoGeneral);
		ps->setDouble(4, total);

		ps->executeUpdate();
		delete ps;

		sql::PreparedStatement* psId = con->prepareStatement("select last_insert_id() AS idFactura");
		sql::ResultSet* rs = psId->executeQuery();

		int idGenerado = 0;

		if (rs->next()) {
			idGenerado = rs->getInt("idFactura");
		}
		delete rs;
		delete psId;

		return idGenerado;
	}
	catch (sql::SQLException& e) {
		std::cerr << "Error " << e.what() << std::endl;
		return 0;
	}

	return 0;
}