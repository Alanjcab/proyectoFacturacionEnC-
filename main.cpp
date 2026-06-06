#include "loginForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args) {

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    proyectoFacturacion::loginForm form;
    Application::Run(% form);

    return 0;
}