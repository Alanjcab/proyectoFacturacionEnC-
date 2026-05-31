#pragma once
#include "Usuario.h"
#include <msclr/marshal_cppstd.h>


namespace proyectoFacturacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Resumen de registrarForm
	/// </summary>
	public ref class registrarForm : public System::Windows::Forms::Form
	{
	public:
		registrarForm(void)
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
		~registrarForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: int idUsuarioSeleccionado;
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtNombre;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtApellido;
	private: System::Windows::Forms::TextBox^ txtEdad;
	private: System::Windows::Forms::TextBox^ txtDni;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtPassword;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnRegistrarse;
	private: System::Windows::Forms::Button^ btnVistaClientes;
	private: System::Windows::Forms::Button^ btnVistaProducto;
	private: System::Windows::Forms::Button^ btnVistaProveedor;
	private: System::Windows::Forms::Button^ btnVistaFacturacion;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtRolUsuario;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtBuscarDni;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::DataGridView^ tablaUsuarios;

	private: System::Windows::Forms::Button^ btnBuscarUsuario;

	private: System::Windows::Forms::Button^ btnActualizarUsuario;
	private: System::Windows::Forms::Button^ btnDeshabilitarUsuario;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colApellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colEdad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colDni;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colEmail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colRol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colEstado;

















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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->txtEdad = (gcnew System::Windows::Forms::TextBox());
			this->txtDni = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnRegistrarse = (gcnew System::Windows::Forms::Button());
			this->btnVistaClientes = (gcnew System::Windows::Forms::Button());
			this->btnVistaProducto = (gcnew System::Windows::Forms::Button());
			this->btnVistaProveedor = (gcnew System::Windows::Forms::Button());
			this->btnVistaFacturacion = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtRolUsuario = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtBuscarDni = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tablaUsuarios = (gcnew System::Windows::Forms::DataGridView());
			this->btnBuscarUsuario = (gcnew System::Windows::Forms::Button());
			this->btnActualizarUsuario = (gcnew System::Windows::Forms::Button());
			this->btnDeshabilitarUsuario = (gcnew System::Windows::Forms::Button());
			this->colId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colApellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEdad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colDni = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEmail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colRol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEstado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tablaUsuarios))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(122, 201);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(121, 233);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Apellido:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(138, 261);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Edad:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(148, 289);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"DNI:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(137, 317);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Email:";
			// 
			// txtNombre
			// 
			this->txtNombre->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtNombre->Location = System::Drawing::Point(187, 195);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(173, 22);
			this->txtNombre->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(105, 345);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 16);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Contraseña";
			// 
			// txtApellido
			// 
			this->txtApellido->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtApellido->Location = System::Drawing::Point(187, 227);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(173, 22);
			this->txtApellido->TabIndex = 7;
			// 
			// txtEdad
			// 
			this->txtEdad->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtEdad->Location = System::Drawing::Point(187, 255);
			this->txtEdad->Name = L"txtEdad";
			this->txtEdad->Size = System::Drawing::Size(173, 22);
			this->txtEdad->TabIndex = 8;
			// 
			// txtDni
			// 
			this->txtDni->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtDni->Location = System::Drawing::Point(187, 283);
			this->txtDni->Name = L"txtDni";
			this->txtDni->Size = System::Drawing::Size(173, 22);
			this->txtDni->TabIndex = 9;
			// 
			// txtEmail
			// 
			this->txtEmail->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtEmail->Location = System::Drawing::Point(187, 311);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(173, 22);
			this->txtEmail->TabIndex = 10;
			// 
			// txtPassword
			// 
			this->txtPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPassword->Location = System::Drawing::Point(187, 339);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(173, 22);
			this->txtPassword->TabIndex = 11;
			this->txtPassword->UseSystemPasswordChar = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Teal;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(197, 147);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(154, 24);
			this->label7->TabIndex = 12;
			this->label7->Text = L"CREAR USUARIO";
			// 
			// btnRegistrarse
			// 
			this->btnRegistrarse->BackColor = System::Drawing::Color::Teal;
			this->btnRegistrarse->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegistrarse->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnRegistrarse->Location = System::Drawing::Point(174, 405);
			this->btnRegistrarse->Name = L"btnRegistrarse";
			this->btnRegistrarse->Size = System::Drawing::Size(127, 35);
			this->btnRegistrarse->TabIndex = 13;
			this->btnRegistrarse->Text = L"REGISTRAR";
			this->btnRegistrarse->UseVisualStyleBackColor = false;
			this->btnRegistrarse->Click += gcnew System::EventHandler(this, &registrarForm::btnRegistrarse_Click);
			// 
			// btnVistaClientes
			// 
			this->btnVistaClientes->BackColor = System::Drawing::Color::Teal;
			this->btnVistaClientes->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVistaClientes->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnVistaClientes->Location = System::Drawing::Point(212, 12);
			this->btnVistaClientes->Name = L"btnVistaClientes";
			this->btnVistaClientes->Size = System::Drawing::Size(148, 59);
			this->btnVistaClientes->TabIndex = 18;
			this->btnVistaClientes->Text = L"Clientes";
			this->btnVistaClientes->UseVisualStyleBackColor = false;
			// 
			// btnVistaProducto
			// 
			this->btnVistaProducto->BackColor = System::Drawing::Color::Teal;
			this->btnVistaProducto->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVistaProducto->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnVistaProducto->Location = System::Drawing::Point(387, 12);
			this->btnVistaProducto->Name = L"btnVistaProducto";
			this->btnVistaProducto->Size = System::Drawing::Size(119, 59);
			this->btnVistaProducto->TabIndex = 19;
			this->btnVistaProducto->Text = L"Productos";
			this->btnVistaProducto->UseVisualStyleBackColor = false;
			// 
			// btnVistaProveedor
			// 
			this->btnVistaProveedor->BackColor = System::Drawing::Color::Teal;
			this->btnVistaProveedor->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVistaProveedor->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnVistaProveedor->Location = System::Drawing::Point(531, 12);
			this->btnVistaProveedor->Name = L"btnVistaProveedor";
			this->btnVistaProveedor->Size = System::Drawing::Size(149, 59);
			this->btnVistaProveedor->TabIndex = 20;
			this->btnVistaProveedor->Text = L"Proveedores";
			this->btnVistaProveedor->UseVisualStyleBackColor = false;
			// 
			// btnVistaFacturacion
			// 
			this->btnVistaFacturacion->BackColor = System::Drawing::Color::Teal;
			this->btnVistaFacturacion->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVistaFacturacion->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnVistaFacturacion->Location = System::Drawing::Point(708, 12);
			this->btnVistaFacturacion->Name = L"btnVistaFacturacion";
			this->btnVistaFacturacion->Size = System::Drawing::Size(154, 59);
			this->btnVistaFacturacion->TabIndex = 21;
			this->btnVistaFacturacion->Text = L"Facturacion";
			this->btnVistaFacturacion->UseVisualStyleBackColor = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(150, 373);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 16);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Rol:";
			// 
			// txtRolUsuario
			// 
			this->txtRolUsuario->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtRolUsuario->Location = System::Drawing::Point(187, 367);
			this->txtRolUsuario->Name = L"txtRolUsuario";
			this->txtRolUsuario->Size = System::Drawing::Size(173, 22);
			this->txtRolUsuario->TabIndex = 23;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(562, 207);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(118, 16);
			this->label9->TabIndex = 24;
			this->label9->Text = L"NUMERO DE DNI:";
			// 
			// txtBuscarDni
			// 
			this->txtBuscarDni->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBuscarDni->Location = System::Drawing::Point(689, 201);
			this->txtBuscarDni->Name = L"txtBuscarDni";
			this->txtBuscarDni->Size = System::Drawing::Size(182, 22);
			this->txtBuscarDni->TabIndex = 25;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Teal;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label16->Location = System::Drawing::Point(695, 147);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(167, 24);
			this->label16->TabIndex = 38;
			this->label16->Text = L"BUSCAR USUARIO";
			// 
			// tablaUsuarios
			// 
			this->tablaUsuarios->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->tablaUsuarios->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tablaUsuarios->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Teal;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tablaUsuarios->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->tablaUsuarios->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tablaUsuarios->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->colId,
					this->colNombre, this->colApellido, this->colEdad, this->colDni, this->colEmail, this->colRol, this->colEstado
			});
			this->tablaUsuarios->EnableHeadersVisualStyles = false;
			this->tablaUsuarios->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tablaUsuarios->Location = System::Drawing::Point(174, 473);
			this->tablaUsuarios->Name = L"tablaUsuarios";
			this->tablaUsuarios->RowHeadersWidth = 51;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			this->tablaUsuarios->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->tablaUsuarios->RowTemplate->Height = 24;
			this->tablaUsuarios->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->tablaUsuarios->Size = System::Drawing::Size(881, 56);
			this->tablaUsuarios->TabIndex = 39;
			// 
			// btnBuscarUsuario
			// 
			this->btnBuscarUsuario->BackColor = System::Drawing::Color::Teal;
			this->btnBuscarUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscarUsuario->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnBuscarUsuario->Location = System::Drawing::Point(730, 249);
			this->btnBuscarUsuario->Name = L"btnBuscarUsuario";
			this->btnBuscarUsuario->Size = System::Drawing::Size(96, 30);
			this->btnBuscarUsuario->TabIndex = 40;
			this->btnBuscarUsuario->Text = L"BUSCAR";
			this->btnBuscarUsuario->UseVisualStyleBackColor = false;
			this->btnBuscarUsuario->Click += gcnew System::EventHandler(this, &registrarForm::btnBuscarUsuario_Click);
			// 
			// btnActualizarUsuario
			// 
			this->btnActualizarUsuario->BackColor = System::Drawing::Color::Teal;
			this->btnActualizarUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnActualizarUsuario->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnActualizarUsuario->Location = System::Drawing::Point(307, 405);
			this->btnActualizarUsuario->Name = L"btnActualizarUsuario";
			this->btnActualizarUsuario->Size = System::Drawing::Size(129, 35);
			this->btnActualizarUsuario->TabIndex = 41;
			this->btnActualizarUsuario->Text = L"ACTUALIZAR";
			this->btnActualizarUsuario->UseVisualStyleBackColor = false;
			this->btnActualizarUsuario->Click += gcnew System::EventHandler(this, &registrarForm::btnActualizarUsuario_Click);
			// 
			// btnDeshabilitarUsuario
			// 
			this->btnDeshabilitarUsuario->BackColor = System::Drawing::Color::Teal;
			this->btnDeshabilitarUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeshabilitarUsuario->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDeshabilitarUsuario->Location = System::Drawing::Point(174, 535);
			this->btnDeshabilitarUsuario->Name = L"btnDeshabilitarUsuario";
			this->btnDeshabilitarUsuario->Size = System::Drawing::Size(138, 35);
			this->btnDeshabilitarUsuario->TabIndex = 42;
			this->btnDeshabilitarUsuario->Text = L"DESHABILITAR";
			this->btnDeshabilitarUsuario->UseVisualStyleBackColor = false;
			this->btnDeshabilitarUsuario->Click += gcnew System::EventHandler(this, &registrarForm::btnDeshabilitarUsuario_Click);
			// 
			// colId
			// 
			this->colId->HeaderText = L"ID";
			this->colId->MinimumWidth = 6;
			this->colId->Name = L"colId";
			this->colId->ReadOnly = true;
			// 
			// colNombre
			// 
			this->colNombre->HeaderText = L"Nombre";
			this->colNombre->MinimumWidth = 6;
			this->colNombre->Name = L"colNombre";
			this->colNombre->ReadOnly = true;
			// 
			// colApellido
			// 
			this->colApellido->HeaderText = L"Apellido";
			this->colApellido->MinimumWidth = 6;
			this->colApellido->Name = L"colApellido";
			this->colApellido->ReadOnly = true;
			// 
			// colEdad
			// 
			this->colEdad->HeaderText = L"Edad";
			this->colEdad->MinimumWidth = 6;
			this->colEdad->Name = L"colEdad";
			this->colEdad->ReadOnly = true;
			// 
			// colDni
			// 
			this->colDni->HeaderText = L"DNI";
			this->colDni->MinimumWidth = 6;
			this->colDni->Name = L"colDni";
			this->colDni->ReadOnly = true;
			// 
			// colEmail
			// 
			this->colEmail->HeaderText = L"Email";
			this->colEmail->MinimumWidth = 6;
			this->colEmail->Name = L"colEmail";
			this->colEmail->ReadOnly = true;
			// 
			// colRol
			// 
			this->colRol->HeaderText = L"Rol";
			this->colRol->MinimumWidth = 6;
			this->colRol->Name = L"colRol";
			this->colRol->ReadOnly = true;
			// 
			// colEstado
			// 
			this->colEstado->HeaderText = L"Activo";
			this->colEstado->MinimumWidth = 6;
			this->colEstado->Name = L"colEstado";
			this->colEstado->ReadOnly = true;
			// 
			// registrarForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1185, 683);
			this->Controls->Add(this->btnDeshabilitarUsuario);
			this->Controls->Add(this->btnActualizarUsuario);
			this->Controls->Add(this->btnBuscarUsuario);
			this->Controls->Add(this->tablaUsuarios);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->txtBuscarDni);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtRolUsuario);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btnVistaFacturacion);
			this->Controls->Add(this->btnVistaProveedor);
			this->Controls->Add(this->btnVistaProducto);
			this->Controls->Add(this->btnVistaClientes);
			this->Controls->Add(this->btnRegistrarse);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtDni);
			this->Controls->Add(this->txtEdad);
			this->Controls->Add(this->txtApellido);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MinimizeBox = false;
			this->Name = L"registrarForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"registrarForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tablaUsuarios))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnRegistrarse_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string nombre = msclr::interop::marshal_as<std::string>(txtNombre->Text);
		std::string apellido = msclr::interop::marshal_as<std::string>(txtApellido->Text);
		int edad = System::Convert::ToInt32(txtEdad->Text);
		int dni = System::Convert::ToInt32(txtDni->Text);
		std::string email = msclr::interop::marshal_as<std::string>(txtEmail->Text);
		std::string pass = msclr::interop::marshal_as<std::string>(txtPassword->Text);
		std::string rol = msclr::interop::marshal_as<std::string>(txtRolUsuario->Text);

		Usuario usuario(
			nombre,
			apellido,
			edad,
			dni,
			email,
			pass,
			rol
		);

		usuario.insertar();

		txtNombre->Text = "";
		txtApellido->Text = "";
		txtEdad->Text = "";
		txtDni->Text = "";
		txtEmail->Text = "";
		txtPassword->Text = "";
		txtRolUsuario->Text = "";
		txtNombre->Focus();
	}
	private: System::Void tablaUsuario_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void btnBuscarUsuario_Click(System::Object^ sender, System::EventArgs^ e) {

		int dni = Convert::ToInt32(txtBuscarDni->Text);

		Usuario usuario;
		usuario.buscarUsuarioPorDni(dni);

		idUsuarioSeleccionado = usuario.getId();
		txtNombre->Text = gcnew String(usuario.getNombre().c_str());
		txtApellido->Text = gcnew String(usuario.getApellido().c_str());
		txtEdad->Text = usuario.getEdad().ToString();
		txtDni->Text = usuario.getDni().ToString();
		txtEmail->Text = gcnew String(usuario.getEmail().c_str());
		txtRolUsuario->Text = gcnew String(usuario.getRol().c_str());

		tablaUsuarios->Rows->Clear();

		tablaUsuarios->Rows->Add(
			usuario.getId(),
			gcnew String(usuario.getNombre().c_str()),
			gcnew String(usuario.getApellido().c_str()),
			usuario.getEdad(),
			usuario.getDni(),
			gcnew String(usuario.getEmail().c_str()),
			gcnew String(usuario.getRol().c_str()),
			usuario.getActivo() ? "SI" : "NO"
		);

	}
	private: System::Void btnActualizarUsuario_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int id = idUsuarioSeleccionado;

		std::string nombre = msclr::interop::marshal_as<std::string>(txtNombre->Text);
		std::string apellido = msclr::interop::marshal_as<std::string>(txtApellido->Text);
		int edad = Convert::ToInt32(txtEdad->Text);
		int dni = Convert::ToInt32(txtDni->Text);
		std::string email = msclr::interop::marshal_as<std::string>(txtEmail->Text);
		std::string pass = msclr::interop::marshal_as<std::string>(txtPassword->Text);
		std::string rol = msclr::interop::marshal_as<std::string>(txtRolUsuario->Text);

		Usuario usuario;

		usuario.actualizarUsuario(
			id,
			nombre,
			apellido,
			edad,
			dni,
			email,
			rol
		);
		MessageBox::Show("Usuario actualizado");
	}
	private: System::Void btnDeshabilitarUsuario_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int dni = Convert::ToInt32(txtBuscarDni->Text);

		Usuario usuario;
		usuario.deshabilitarUsuario(dni);

		tablaUsuarios->Rows->Clear();
	}
};
}
