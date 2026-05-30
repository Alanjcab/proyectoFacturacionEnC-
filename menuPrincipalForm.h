#pragma once

namespace proyectoFacturacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de menuPrincipalForm
	/// </summary>
	public ref class menuPrincipalForm : public System::Windows::Forms::Form
	{
	public:
		menuPrincipalForm(void)
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
		~menuPrincipalForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnVistaUsuario;
	private: System::Windows::Forms::Button^ btnVistaClientes;
	private: System::Windows::Forms::Button^ btnVistaProducto;
	private: System::Windows::Forms::Button^ btnVistaProveedor;
	private: System::Windows::Forms::Button^ btnVistaFacturacion;
	protected:

	protected:

	protected:

	protected:

	protected:

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
			this->btnVistaUsuario = (gcnew System::Windows::Forms::Button());
			this->btnVistaClientes = (gcnew System::Windows::Forms::Button());
			this->btnVistaProducto = (gcnew System::Windows::Forms::Button());
			this->btnVistaProveedor = (gcnew System::Windows::Forms::Button());
			this->btnVistaFacturacion = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnVistaUsuario
			// 
			this->btnVistaUsuario->BackColor = System::Drawing::Color::Teal;
			this->btnVistaUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVistaUsuario->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnVistaUsuario->Location = System::Drawing::Point(132, 14);
			this->btnVistaUsuario->Name = L"btnVistaUsuario";
			this->btnVistaUsuario->Size = System::Drawing::Size(112, 34);
			this->btnVistaUsuario->TabIndex = 0;
			this->btnVistaUsuario->Text = L"Usuario";
			this->btnVistaUsuario->UseVisualStyleBackColor = false;
			// 
			// btnVistaClientes
			// 
			this->btnVistaClientes->BackColor = System::Drawing::Color::Teal;
			this->btnVistaClientes->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVistaClientes->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnVistaClientes->Location = System::Drawing::Point(277, 14);
			this->btnVistaClientes->Name = L"btnVistaClientes";
			this->btnVistaClientes->Size = System::Drawing::Size(120, 34);
			this->btnVistaClientes->TabIndex = 1;
			this->btnVistaClientes->Text = L"Clientes";
			this->btnVistaClientes->UseVisualStyleBackColor = false;
			// 
			// btnVistaProducto
			// 
			this->btnVistaProducto->BackColor = System::Drawing::Color::Teal;
			this->btnVistaProducto->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVistaProducto->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnVistaProducto->Location = System::Drawing::Point(433, 16);
			this->btnVistaProducto->Name = L"btnVistaProducto";
			this->btnVistaProducto->Size = System::Drawing::Size(119, 32);
			this->btnVistaProducto->TabIndex = 2;
			this->btnVistaProducto->Text = L"Productos";
			this->btnVistaProducto->UseVisualStyleBackColor = false;
			// 
			// btnVistaProveedor
			// 
			this->btnVistaProveedor->BackColor = System::Drawing::Color::Teal;
			this->btnVistaProveedor->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVistaProveedor->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnVistaProveedor->Location = System::Drawing::Point(577, 16);
			this->btnVistaProveedor->Name = L"btnVistaProveedor";
			this->btnVistaProveedor->Size = System::Drawing::Size(136, 32);
			this->btnVistaProveedor->TabIndex = 3;
			this->btnVistaProveedor->Text = L"Proveedores";
			this->btnVistaProveedor->UseVisualStyleBackColor = false;
			// 
			// btnVistaFacturacion
			// 
			this->btnVistaFacturacion->BackColor = System::Drawing::Color::Teal;
			this->btnVistaFacturacion->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVistaFacturacion->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnVistaFacturacion->Location = System::Drawing::Point(739, 16);
			this->btnVistaFacturacion->Name = L"btnVistaFacturacion";
			this->btnVistaFacturacion->Size = System::Drawing::Size(123, 32);
			this->btnVistaFacturacion->TabIndex = 4;
			this->btnVistaFacturacion->Text = L"Facturacion";
			this->btnVistaFacturacion->UseVisualStyleBackColor = false;
			// 
			// menuPrincipalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1188, 713);
			this->Controls->Add(this->btnVistaFacturacion);
			this->Controls->Add(this->btnVistaProveedor);
			this->Controls->Add(this->btnVistaProducto);
			this->Controls->Add(this->btnVistaClientes);
			this->Controls->Add(this->btnVistaUsuario);
			this->Name = L"menuPrincipalForm";
			this->Text = L"menuPrincipalForm";
			this->ResumeLayout(false);

		}

	};
}
