#pragma once
#include <iostream>
#include "Usuario.h"
#include <msclr/marshal_cppstd.h>
#include "registrarForm.h"
#include "clienteForm.h"
#include "ProductoForm.h"
#include "ProveedorForm.h"

namespace proyectoFacturacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Resumen de loginForm
	/// </summary>
	public ref class loginForm : public System::Windows::Forms::Form
	{
	public:
		loginForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~loginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnIngresar;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtUsuario;
	private: System::Windows::Forms::TextBox^ txtPasswordUser;
	private: System::Windows::Forms::Label^ label3;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->txtPasswordUser = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnIngresar
			// 
			this->btnIngresar->BackColor = System::Drawing::Color::Teal;
			this->btnIngresar->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIngresar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnIngresar->Location = System::Drawing::Point(466, 329);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(160, 60);
			this->btnIngresar->TabIndex = 0;
			this->btnIngresar->Text = L"INGRESAR";
			this->btnIngresar->UseVisualStyleBackColor = false;
			this->btnIngresar->Click += gcnew System::EventHandler(this, &loginForm::btnIngresar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(481, 145);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 19);
			this->label1->TabIndex = 2;
			this->label1->Text = L"USUARIO EMAIL";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(486, 232);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 19);
			this->label2->TabIndex = 3;
			this->label2->Text = L"CONTRASEÑA";
			// 
			// txtUsuario
			// 
			this->txtUsuario->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtUsuario->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtUsuario->Location = System::Drawing::Point(435, 188);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(219, 22);
			this->txtUsuario->TabIndex = 4;
			// 
			// txtPasswordUser
			// 
			this->txtPasswordUser->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txtPasswordUser->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPasswordUser->Location = System::Drawing::Point(435, 272);
			this->txtPasswordUser->Name = L"txtPasswordUser";
			this->txtPasswordUser->Size = System::Drawing::Size(219, 22);
			this->txtPasswordUser->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 23);
			this->label3->TabIndex = 0;
			// 
			// loginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1182, 653);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtPasswordUser);
			this->Controls->Add(this->txtUsuario);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnIngresar);
			this->Name = L"loginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"loginForm";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &loginForm::loginForm_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnIngresar_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ txtEmail = txtUsuario->Text;

		if (!txtEmail->Contains("@"))
		{
			MessageBox::Show("Ingrese un email válido.");
			return;
		}

		std::string email = msclr::interop::marshal_as<std::string>(txtUsuario->Text);
		std::string pass = msclr::interop::marshal_as<std::string>(txtPasswordUser->Text);

		Usuario usuario;

		std::string rol = usuario.rolUsuario(email, pass);

		if (rol == "admin") { //el usuario con rol "admin" puede ver todas las vistas

			registrarForm^ vistaRegistrar = gcnew registrarForm(gcnew String(rol.c_str()));
			vistaRegistrar->Show();
			this->Hide();
		}
		else if(rol == "cajero") {  //abro solo las vistas que puede ver el usuario con rol "cajero"

			clienteForm^ vistaCliente = gcnew clienteForm(gcnew String(rol.c_str()));
			vistaCliente->Show();
			this->Hide();
		}
		else if (rol == "deposito") {  //abro solo las vistas que peude ver el usuario con rol "deposito"

			ProveedorForm^ vistaProveedor = gcnew ProveedorForm(gcnew String(rol.c_str()));
			vistaProveedor->Show();
			this->Hide();
		}
		 //si el usuario esta inactivo muestrp mensaje
		else if (rol == "inactivo") {
			MessageBox::Show("Usuario deshabilitado");
		}
		else {
			MessageBox::Show("No se pudo hacer el login. Necesita registrarse");
		}
	}
	//evento para que la vista no quede corriendo
	private: System::Void loginForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();
	}
};
}
