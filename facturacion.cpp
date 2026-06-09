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

namespace proyectoFacturacion {
	System::Void clienteForm::btnFacturacionEnCliente_Click(System::Object^ sender, System::EventArgs^ e) {
		Facturacion^ vistaFacturacion = gcnew Facturacion();
		vistaFacturacion->Show();
		this->Hide();
	}
	System::Void registrarForm::btnFacturacionEnRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
		Facturacion^ vistaFacturacion = gcnew Facturacion();
		vistaFacturacion->Show();
		this->Hide();
	}
	System::Void ProductoForm::btnFacturacionEnProducto_Click(System::Object^ sender, System::EventArgs^ e) {
		Facturacion^ vistaFacturacion = gcnew Facturacion();
		vistaFacturacion->Show();
		this->Hide();
	}
	System::Void ProveedorForm::btnFacturacionEnProveedor_Click(System::Object^ sender, System::EventArgs^ e) {
		Facturacion^ vistaFacturacion = gcnew Facturacion();
		vistaFacturacion->Show();
		this->Hide();
	}
}
