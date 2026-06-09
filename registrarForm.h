#pragma once
#include "Usuario.h"
#include <msclr/marshal_cppstd.h>
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
	private: System::Windows::Forms::Button^ btnProductoEnRegistrar;

	private: System::Windows::Forms::Button^ btnProveedorEnRegistrar;

	private: System::Windows::Forms::Button^ btnFacturacionEnRegistrar;

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
	private: System::Windows::Forms::Button^ btnClienteEnRegistrar;





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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
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
			this->btnProductoEnRegistrar = (gcnew System::Windows::Forms::Button());
			this->btnProveedorEnRegistrar = (gcnew System::Windows::Forms::Button());
			this->btnFacturacionEnRegistrar = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtRolUsuario = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtBuscarDni = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tablaUsuarios = (gcnew System::Windows::Forms::DataGridView());
			this->colId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colApellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEdad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colDni = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEmail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colRol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEstado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnBuscarUsuario = (gcnew System::Windows::Forms::Button());
			this->btnActualizarUsuario = (gcnew System::Windows::Forms::Button());
			this->btnDeshabilitarUsuario = (gcnew System::Windows::Forms::Button());
			this->btnClienteEnRegistrar = (gcnew System::Windows::Forms::Button());
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
			// btnProductoEnRegistrar
			// 
			this->btnProductoEnRegistrar->BackColor = System::Drawing::Color::Teal;
			this->btnProductoEnRegistrar->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProductoEnRegistrar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnProductoEnRegistrar->Location = System::Drawing::Point(357, 12);
			this->btnProductoEnRegistrar->Name = L"btnProductoEnRegistrar";
			this->btnProductoEnRegistrar->Size = System::Drawing::Size(160, 60);
			this->btnProductoEnRegistrar->TabIndex = 19;
			this->btnProductoEnRegistrar->Text = L"PRODUCTO";
			this->btnProductoEnRegistrar->UseVisualStyleBackColor = false;
			this->btnProductoEnRegistrar->Click += gcnew System::EventHandler(this, &registrarForm::btnProductoEnRegistrar_Click);
			// 
			// btnProveedorEnRegistrar
			// 
			this->btnProveedorEnRegistrar->BackColor = System::Drawing::Color::Teal;
			this->btnProveedorEnRegistrar->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProveedorEnRegistrar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnProveedorEnRegistrar->Location = System::Drawing::Point(545, 12);
			this->btnProveedorEnRegistrar->Name = L"btnProveedorEnRegistrar";
			this->btnProveedorEnRegistrar->Size = System::Drawing::Size(160, 60);
			this->btnProveedorEnRegistrar->TabIndex = 20;
			this->btnProveedorEnRegistrar->Text = L"PROVEEDOR";
			this->btnProveedorEnRegistrar->UseVisualStyleBackColor = false;
			this->btnProveedorEnRegistrar->Click += gcnew System::EventHandler(this, &registrarForm::btnProveedorEnRegistrar_Click);
			// 
			// btnFacturacionEnRegistrar
			// 
			this->btnFacturacionEnRegistrar->BackColor = System::Drawing::Color::Teal;
			this->btnFacturacionEnRegistrar->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnFacturacionEnRegistrar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnFacturacionEnRegistrar->Location = System::Drawing::Point(746, 12);
			this->btnFacturacionEnRegistrar->Name = L"btnFacturacionEnRegistrar";
			this->btnFacturacionEnRegistrar->Size = System::Drawing::Size(160, 60);
			this->btnFacturacionEnRegistrar->TabIndex = 21;
			this->btnFacturacionEnRegistrar->Text = L"FACTURACION";
			this->btnFacturacionEnRegistrar->UseVisualStyleBackColor = false;
			this->btnFacturacionEnRegistrar->Click += gcnew System::EventHandler(this, &registrarForm::btnFacturacionEnRegistrar_Click);
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
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::Teal;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tablaUsuarios->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
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
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::Black;
			this->tablaUsuarios->RowsDefaultCellStyle = dataGridViewCellStyle6;
			this->tablaUsuarios->RowTemplate->Height = 24;
			this->tablaUsuarios->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->tablaUsuarios->Size = System::Drawing::Size(881, 56);
			this->tablaUsuarios->TabIndex = 39;
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
			// btnClienteEnRegistrar
			// 
			this->btnClienteEnRegistrar->BackColor = System::Drawing::Color::Teal;
			this->btnClienteEnRegistrar->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClienteEnRegistrar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnClienteEnRegistrar->Location = System::Drawing::Point(182, 12);
			this->btnClienteEnRegistrar->Name = L"btnClienteEnRegistrar";
			this->btnClienteEnRegistrar->Size = System::Drawing::Size(160, 60);
			this->btnClienteEnRegistrar->TabIndex = 43;
			this->btnClienteEnRegistrar->Text = L"CLIENTE";
			this->btnClienteEnRegistrar->UseVisualStyleBackColor = false;
			this->btnClienteEnRegistrar->Click += gcnew System::EventHandler(this, &registrarForm::btnClienteEnRegistrar_Click);
			// 
			// registrarForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1182, 653);
			this->Controls->Add(this->btnClienteEnRegistrar);
			this->Controls->Add(this->btnDeshabilitarUsuario);
			this->Controls->Add(this->btnActualizarUsuario);
			this->Controls->Add(this->btnBuscarUsuario);
			this->Controls->Add(this->tablaUsuarios);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->txtBuscarDni);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtRolUsuario);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btnFacturacionEnRegistrar);
			this->Controls->Add(this->btnProveedorEnRegistrar);
			this->Controls->Add(this->btnProductoEnRegistrar);
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
		   System::Void btnClienteEnRegistrar_Click(System::Object^ sender, System::EventArgs^ e);

		   System::Void btnProductoEnRegistrar_Click(System::Object^ sender, System::EventArgs^ e);

		   System::Void btnProveedorEnRegistrar_Click(System::Object^ sender, System::EventArgs^ e);

		   System::Void btnFacturacionEnRegistrar_Click(System::Object^ sender, System::EventArgs^ e);

};
}
