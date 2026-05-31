#pragma once
#include "Cliente.h"
#include <msclr/marshal_cppstd.h>

namespace proyectoFacturacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de cliente
	/// </summary>
	public ref class clienteForm : public System::Windows::Forms::Form
	{
	public:
		clienteForm(void)
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
		~clienteForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnVistaFacturacion;
	private: System::Windows::Forms::Button^ btnVistaProducto;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtNombreCliente;
	private: System::Windows::Forms::TextBox^ txtApellidoCliente;
	private: System::Windows::Forms::TextBox^ txtDniCliente;
	private: System::Windows::Forms::TextBox^ txtEmailCliente;
	private: System::Windows::Forms::Button^ btnRegistrarCliente;




	protected:

	protected:


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnVistaFacturacion = (gcnew System::Windows::Forms::Button());
			this->btnVistaProducto = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtNombreCliente = (gcnew System::Windows::Forms::TextBox());
			this->txtApellidoCliente = (gcnew System::Windows::Forms::TextBox());
			this->txtDniCliente = (gcnew System::Windows::Forms::TextBox());
			this->txtEmailCliente = (gcnew System::Windows::Forms::TextBox());
			this->btnRegistrarCliente = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnVistaFacturacion
			// 
			this->btnVistaFacturacion->BackColor = System::Drawing::Color::Teal;
			this->btnVistaFacturacion->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVistaFacturacion->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnVistaFacturacion->Location = System::Drawing::Point(517, 29);
			this->btnVistaFacturacion->Name = L"btnVistaFacturacion";
			this->btnVistaFacturacion->Size = System::Drawing::Size(154, 59);
			this->btnVistaFacturacion->TabIndex = 22;
			this->btnVistaFacturacion->Text = L"Facturacion";
			this->btnVistaFacturacion->UseVisualStyleBackColor = false;
			// 
			// btnVistaProducto
			// 
			this->btnVistaProducto->BackColor = System::Drawing::Color::Teal;
			this->btnVistaProducto->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVistaProducto->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnVistaProducto->Location = System::Drawing::Point(371, 29);
			this->btnVistaProducto->Name = L"btnVistaProducto";
			this->btnVistaProducto->Size = System::Drawing::Size(119, 59);
			this->btnVistaProducto->TabIndex = 23;
			this->btnVistaProducto->Text = L"Productos";
			this->btnVistaProducto->UseVisualStyleBackColor = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Teal;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(426, 133);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(185, 24);
			this->label7->TabIndex = 24;
			this->label7->Text = L"REGISTRAR CLIENTE";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(365, 187);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 16);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(362, 216);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 16);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Apellido:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(389, 247);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 16);
			this->label3->TabIndex = 27;
			this->label3->Text = L"DNI:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(378, 276);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 16);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Email:";
			// 
			// txtNombreCliente
			// 
			this->txtNombreCliente->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtNombreCliente->Location = System::Drawing::Point(430, 181);
			this->txtNombreCliente->Name = L"txtNombreCliente";
			this->txtNombreCliente->Size = System::Drawing::Size(157, 22);
			this->txtNombreCliente->TabIndex = 29;
			// 
			// txtApellidoCliente
			// 
			this->txtApellidoCliente->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtApellidoCliente->Location = System::Drawing::Point(430, 210);
			this->txtApellidoCliente->Name = L"txtApellidoCliente";
			this->txtApellidoCliente->Size = System::Drawing::Size(157, 22);
			this->txtApellidoCliente->TabIndex = 30;
			// 
			// txtDniCliente
			// 
			this->txtDniCliente->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtDniCliente->Location = System::Drawing::Point(430, 241);
			this->txtDniCliente->Name = L"txtDniCliente";
			this->txtDniCliente->Size = System::Drawing::Size(157, 22);
			this->txtDniCliente->TabIndex = 31;
			// 
			// txtEmailCliente
			// 
			this->txtEmailCliente->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtEmailCliente->Location = System::Drawing::Point(430, 270);
			this->txtEmailCliente->Name = L"txtEmailCliente";
			this->txtEmailCliente->Size = System::Drawing::Size(157, 22);
			this->txtEmailCliente->TabIndex = 32;
			// 
			// btnRegistrarCliente
			// 
			this->btnRegistrarCliente->BackColor = System::Drawing::Color::Teal;
			this->btnRegistrarCliente->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegistrarCliente->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnRegistrarCliente->Location = System::Drawing::Point(446, 321);
			this->btnRegistrarCliente->Name = L"btnRegistrarCliente";
			this->btnRegistrarCliente->Size = System::Drawing::Size(127, 35);
			this->btnRegistrarCliente->TabIndex = 33;
			this->btnRegistrarCliente->Text = L"REGISTRAR";
			this->btnRegistrarCliente->UseVisualStyleBackColor = false;
			this->btnRegistrarCliente->Click += gcnew System::EventHandler(this, &clienteForm::btnRegistrarCliente_Click);
			// 
			// cliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1049, 634);
			this->Controls->Add(this->btnRegistrarCliente);
			this->Controls->Add(this->txtEmailCliente);
			this->Controls->Add(this->txtDniCliente);
			this->Controls->Add(this->txtApellidoCliente);
			this->Controls->Add(this->txtNombreCliente);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->btnVistaProducto);
			this->Controls->Add(this->btnVistaFacturacion);
			this->Name = L"cliente";
			this->Text = L"cliente";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnRegistrarCliente_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string nombre = msclr::interop::marshal_as<std::string>(txtNombreCliente->Text);
		std::string apellido = msclr::interop::marshal_as<std::string>(txtApellidoCliente->Text);
		int dniCliente = System::Convert::ToInt32(txtDniCliente->Text);
		std::string emailCliente = msclr::interop::marshal_as<std::string>(txtEmailCliente->Text);

		Cliente Cliente(
			nombre,
			apellido,
			dniCliente,
			emailCliente
		);

		Cliente.altaDeCliente();

		txtNombreCliente->Text = "";
		txtApellidoCliente->Text = "";
		txtDniCliente->Text = "";
		txtEmailCliente->Text = "";

		MessageBox::Show("Cliente registrado correctamente.");
	}
};
}
