#include "loginForm.h"
/*#include "clienteForm.h"*/
#include "ProveedorForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args) {

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    proyectoFacturacion::ProveedorForm form;
    Application::Run(% form);

    /*proyectoFacturacion::clienteForm form;
    Application::Run(% form);*/
    return 0;
}