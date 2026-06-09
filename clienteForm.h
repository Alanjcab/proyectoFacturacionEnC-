#pragma once
#include "Cliente.h"
#include <msclr/marshal_cppstd.h>
#include "Conexion.h"
#include <jdbc/cppconn/prepared_statement.h>
#include <jdbc/cppconn/resultset.h>




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
		int idClienteSeleccionado;
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
	protected:

	private: System::Windows::Forms::Button^ btnProductoEnCliente;

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
	private: System::Windows::Forms::Button^ btnBuscarCliente;
	private: System::Windows::Forms::Button^ btnMostrarTodosClientes;
	private: System::Windows::Forms::Button^ btnActualizarCliente;
	private: System::Windows::Forms::Button^ btnDeshabilitarCliente;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::TextBox^ txtBuscarCliente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colEstado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colEmail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colDni;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colApellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colId;
	private: System::Windows::Forms::DataGridView^ tablaClientes;
	private: System::Windows::Forms::Button^ btnProveedorEnCliente;
	private: System::Windows::Forms::Button^ btnFacturacionEnCliente;


	private: System::Windows::Forms::Button^ btnRegistrarEnCliente;


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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->btnProductoEnCliente = (gcnew System::Windows::Forms::Button());
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
			this->btnBuscarCliente = (gcnew System::Windows::Forms::Button());
			this->btnMostrarTodosClientes = (gcnew System::Windows::Forms::Button());
			this->btnActualizarCliente = (gcnew System::Windows::Forms::Button());
			this->btnDeshabilitarCliente = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtBuscarCliente = (gcnew System::Windows::Forms::TextBox());
			this->colEstado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEmail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colDni = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colApellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tablaClientes = (gcnew System::Windows::Forms::DataGridView());
			this->btnProveedorEnCliente = (gcnew System::Windows::Forms::Button());
			this->btnFacturacionEnCliente = (gcnew System::Windows::Forms::Button());
			this->btnRegistrarEnCliente = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tablaClientes))->BeginInit();
			this->SuspendLayout();
			// 
			// btnProductoEnCliente
			// 
			this->btnProductoEnCliente->BackColor = System::Drawing::Color::Teal;
			this->btnProductoEnCliente->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProductoEnCliente->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnProductoEnCliente->Location = System::Drawing::Point(333, 12);
			this->btnProductoEnCliente->Name = L"btnProductoEnCliente";
			this->btnProductoEnCliente->Size = System::Drawing::Size(160, 60);
			this->btnProductoEnCliente->TabIndex = 23;
			this->btnProductoEnCliente->Text = L"PRODUCTO";
			this->btnProductoEnCliente->UseVisualStyleBackColor = false;
			this->btnProductoEnCliente->Click += gcnew System::EventHandler(this, &clienteForm::btnProductoEnCliente_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Teal;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(382, 133);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(185, 24);
			this->label7->TabIndex = 24;
			this->label7->Text = L"REGISTRAR CLIENTE";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(331, 181);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 16);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(330, 216);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 16);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Apellido:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(357, 253);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 16);
			this->label3->TabIndex = 27;
			this->label3->Text = L"DNI:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(346, 291);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 16);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Email:";
			// 
			// txtNombreCliente
			// 
			this->txtNombreCliente->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtNombreCliente->Location = System::Drawing::Point(396, 175);
			this->txtNombreCliente->Name = L"txtNombreCliente";
			this->txtNombreCliente->Size = System::Drawing::Size(157, 22);
			this->txtNombreCliente->TabIndex = 29;
			// 
			// txtApellidoCliente
			// 
			this->txtApellidoCliente->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtApellidoCliente->Location = System::Drawing::Point(396, 210);
			this->txtApellidoCliente->Name = L"txtApellidoCliente";
			this->txtApellidoCliente->Size = System::Drawing::Size(157, 22);
			this->txtApellidoCliente->TabIndex = 30;
			// 
			// txtDniCliente
			// 
			this->txtDniCliente->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtDniCliente->Location = System::Drawing::Point(396, 247);
			this->txtDniCliente->Name = L"txtDniCliente";
			this->txtDniCliente->Size = System::Drawing::Size(157, 22);
			this->txtDniCliente->TabIndex = 31;
			// 
			// txtEmailCliente
			// 
			this->txtEmailCliente->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtEmailCliente->Location = System::Drawing::Point(396, 285);
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
			this->btnRegistrarCliente->Location = System::Drawing::Point(415, 313);
			this->btnRegistrarCliente->Name = L"btnRegistrarCliente";
			this->btnRegistrarCliente->Size = System::Drawing::Size(127, 35);
			this->btnRegistrarCliente->TabIndex = 33;
			this->btnRegistrarCliente->Text = L"REGISTRAR";
			this->btnRegistrarCliente->UseVisualStyleBackColor = false;
			this->btnRegistrarCliente->Click += gcnew System::EventHandler(this, &clienteForm::btnRegistrarCliente_Click);
			// 
			// btnBuscarCliente
			// 
			this->btnBuscarCliente->BackColor = System::Drawing::Color::Teal;
			this->btnBuscarCliente->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscarCliente->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnBuscarCliente->Location = System::Drawing::Point(405, 439);
			this->btnBuscarCliente->Name = L"btnBuscarCliente";
			this->btnBuscarCliente->Size = System::Drawing::Size(182, 35);
			this->btnBuscarCliente->TabIndex = 34;
			this->btnBuscarCliente->Text = L"BUSCAR CLEINTE";
			this->btnBuscarCliente->UseVisualStyleBackColor = false;
			this->btnBuscarCliente->Click += gcnew System::EventHandler(this, &clienteForm::btnBuscarCliente_Click);
			// 
			// btnMostrarTodosClientes
			// 
			this->btnMostrarTodosClientes->BackColor = System::Drawing::Color::Teal;
			this->btnMostrarTodosClientes->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrarTodosClientes->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnMostrarTodosClientes->Location = System::Drawing::Point(593, 439);
			this->btnMostrarTodosClientes->Name = L"btnMostrarTodosClientes";
			this->btnMostrarTodosClientes->Size = System::Drawing::Size(192, 35);
			this->btnMostrarTodosClientes->TabIndex = 35;
			this->btnMostrarTodosClientes->Text = L"MOSTRAR TODOS";
			this->btnMostrarTodosClientes->UseVisualStyleBackColor = false;
			this->btnMostrarTodosClientes->Click += gcnew System::EventHandler(this, &clienteForm::btnMostrarTodosClientes_Click);
			// 
			// btnActualizarCliente
			// 
			this->btnActualizarCliente->BackColor = System::Drawing::Color::Teal;
			this->btnActualizarCliente->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnActualizarCliente->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnActualizarCliente->Location = System::Drawing::Point(379, 362);
			this->btnActualizarCliente->Name = L"btnActualizarCliente";
			this->btnActualizarCliente->Size = System::Drawing::Size(127, 35);
			this->btnActualizarCliente->TabIndex = 36;
			this->btnActualizarCliente->Text = L"ACTUALIZAR";
			this->btnActualizarCliente->UseVisualStyleBackColor = false;
			this->btnActualizarCliente->Click += gcnew System::EventHandler(this, &clienteForm::btnActualizarCliente_Click);
			// 
			// btnDeshabilitarCliente
			// 
			this->btnDeshabilitarCliente->BackColor = System::Drawing::Color::Teal;
			this->btnDeshabilitarCliente->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeshabilitarCliente->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDeshabilitarCliente->Location = System::Drawing::Point(512, 362);
			this->btnDeshabilitarCliente->Name = L"btnDeshabilitarCliente";
			this->btnDeshabilitarCliente->Size = System::Drawing::Size(149, 35);
			this->btnDeshabilitarCliente->TabIndex = 37;
			this->btnDeshabilitarCliente->Text = L"DESHABILITAR";
			this->btnDeshabilitarCliente->UseVisualStyleBackColor = false;
			this->btnDeshabilitarCliente->Click += gcnew System::EventHandler(this, &clienteForm::btnDeshabilitarCliente_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(93, 453);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(143, 16);
			this->label5->TabIndex = 38;
			this->label5->Text = L"Buscar cleinte por DNI:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(204, 372);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(169, 16);
			this->label8->TabIndex = 40;
			this->label8->Text = L"Actualizar datos del cliente:";
			// 
			// txtBuscarCliente
			// 
			this->txtBuscarCliente->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBuscarCliente->Location = System::Drawing::Point(242, 447);
			this->txtBuscarCliente->Name = L"txtBuscarCliente";
			this->txtBuscarCliente->Size = System::Drawing::Size(157, 22);
			this->txtBuscarCliente->TabIndex = 42;
			// 
			// colEstado
			// 
			this->colEstado->HeaderText = L"Activo";
			this->colEstado->MinimumWidth = 6;
			this->colEstado->Name = L"colEstado";
			this->colEstado->ReadOnly = true;
			// 
			// colEmail
			// 
			this->colEmail->HeaderText = L"Email";
			this->colEmail->MinimumWidth = 6;
			this->colEmail->Name = L"colEmail";
			this->colEmail->ReadOnly = true;
			// 
			// colDni
			// 
			this->colDni->HeaderText = L"DNI";
			this->colDni->MinimumWidth = 6;
			this->colDni->Name = L"colDni";
			this->colDni->ReadOnly = true;
			// 
			// colApellido
			// 
			this->colApellido->HeaderText = L"Apellido";
			this->colApellido->MinimumWidth = 6;
			this->colApellido->Name = L"colApellido";
			this->colApellido->ReadOnly = true;
			// 
			// colNombre
			// 
			this->colNombre->HeaderText = L"Nombre";
			this->colNombre->MinimumWidth = 6;
			this->colNombre->Name = L"colNombre";
			this->colNombre->ReadOnly = true;
			// 
			// colId
			// 
			this->colId->HeaderText = L"ID";
			this->colId->MinimumWidth = 6;
			this->colId->Name = L"colId";
			this->colId->ReadOnly = true;
			// 
			// tablaClientes
			// 
			this->tablaClientes->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->tablaClientes->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tablaClientes->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle11->BackColor = System::Drawing::Color::Teal;
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tablaClientes->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle11;
			this->tablaClientes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tablaClientes->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->colId,
					this->colNombre, this->colApellido, this->colDni, this->colEmail, this->colEstado
			});
			this->tablaClientes->EnableHeadersVisualStyles = false;
			this->tablaClientes->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tablaClientes->Location = System::Drawing::Point(76, 480);
			this->tablaClientes->Name = L"tablaClientes";
			this->tablaClientes->RowHeadersWidth = 51;
			dataGridViewCellStyle12->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle12->ForeColor = System::Drawing::Color::Black;
			this->tablaClientes->RowsDefaultCellStyle = dataGridViewCellStyle12;
			this->tablaClientes->RowTemplate->Height = 24;
			this->tablaClientes->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->tablaClientes->Size = System::Drawing::Size(881, 123);
			this->tablaClientes->TabIndex = 43;
			// 
			// btnProveedorEnCliente
			// 
			this->btnProveedorEnCliente->BackColor = System::Drawing::Color::Teal;
			this->btnProveedorEnCliente->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProveedorEnCliente->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnProveedorEnCliente->Location = System::Drawing::Point(512, 12);
			this->btnProveedorEnCliente->Name = L"btnProveedorEnCliente";
			this->btnProveedorEnCliente->Size = System::Drawing::Size(160, 60);
			this->btnProveedorEnCliente->TabIndex = 44;
			this->btnProveedorEnCliente->Text = L"PROVEEDOR";
			this->btnProveedorEnCliente->UseVisualStyleBackColor = false;
			this->btnProveedorEnCliente->Click += gcnew System::EventHandler(this, &clienteForm::btnProveedorEnCliente_Click);
			// 
			// btnFacturacionEnCliente
			// 
			this->btnFacturacionEnCliente->BackColor = System::Drawing::Color::Teal;
			this->btnFacturacionEnCliente->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFacturacionEnCliente->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnFacturacionEnCliente->Location = System::Drawing::Point(691, 12);
			this->btnFacturacionEnCliente->Name = L"btnFacturacionEnCliente";
			this->btnFacturacionEnCliente->Size = System::Drawing::Size(160, 60);
			this->btnFacturacionEnCliente->TabIndex = 45;
			this->btnFacturacionEnCliente->Text = L"FACTURACION";
			this->btnFacturacionEnCliente->UseVisualStyleBackColor = false;
			this->btnFacturacionEnCliente->Click += gcnew System::EventHandler(this, &clienteForm::btnFacturacionEnCliente_Click);
			// 
			// btnRegistrarEnCliente
			// 
			this->btnRegistrarEnCliente->BackColor = System::Drawing::Color::Teal;
			this->btnRegistrarEnCliente->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegistrarEnCliente->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnRegistrarEnCliente->Location = System::Drawing::Point(161, 12);
			this->btnRegistrarEnCliente->Name = L"btnRegistrarEnCliente";
			this->btnRegistrarEnCliente->Size = System::Drawing::Size(160, 60);
			this->btnRegistrarEnCliente->TabIndex = 46;
			this->btnRegistrarEnCliente->Text = L"REGISTRAR";
			this->btnRegistrarEnCliente->UseVisualStyleBackColor = false;
			this->btnRegistrarEnCliente->Click += gcnew System::EventHandler(this, &clienteForm::btnRegistrarEnCliente_Click);
			// 
			// clienteForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1182, 653);
			this->Controls->Add(this->btnRegistrarEnCliente);
			this->Controls->Add(this->btnFacturacionEnCliente);
			this->Controls->Add(this->btnProveedorEnCliente);
			this->Controls->Add(this->tablaClientes);
			this->Controls->Add(this->txtBuscarCliente);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnDeshabilitarCliente);
			this->Controls->Add(this->btnActualizarCliente);
			this->Controls->Add(this->btnMostrarTodosClientes);
			this->Controls->Add(this->btnBuscarCliente);
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
			this->Controls->Add(this->btnProductoEnCliente);
			this->Name = L"clienteForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"cliente";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tablaClientes))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnRegistrarCliente_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string nombre = msclr::interop::marshal_as<std::string>(txtNombreCliente->Text);
		std::string apellido = msclr::interop::marshal_as<std::string>(txtApellidoCliente->Text);
		int dniCliente = System::Convert::ToInt32(txtDniCliente->Text);
		std::string emailCliente = msclr::interop::marshal_as<std::string>(txtEmailCliente->Text);

		Cliente cliente(
			nombre,
			apellido,
			dniCliente,
			emailCliente
		);

		cliente.altaDeCliente();

		txtNombreCliente->Text = "";
		txtApellidoCliente->Text = "";
		txtDniCliente->Text = "";
		txtEmailCliente->Text = "";

		MessageBox::Show("Cliente registrado correctamente.");
	}
private: System::Void btnBuscarCliente_Click(System::Object^ sender, System::EventArgs^ e) {
	int dniCliente = Convert::ToInt32(txtBuscarCliente->Text);

	Cliente cliente;
	cliente.buscarCliente(dniCliente);
	idClienteSeleccionado = cliente.getIdCliente();

	txtNombreCliente->Text = gcnew String(cliente.getNombre().c_str());
	txtApellidoCliente->Text = gcnew String(cliente.getApellido().c_str());
	txtDniCliente->Text = cliente.getDniCliente().ToString();
	txtEmailCliente->Text = gcnew String(cliente.getEmailCliente().c_str());

	tablaClientes->Rows->Clear();

	tablaClientes->Rows->Add(
		cliente.getIdCliente(),
		gcnew String(cliente.getNombre().c_str()),
		gcnew String(cliente.getApellido().c_str()),
		cliente.getDniCliente(),
		gcnew String(cliente.getEmailCliente().c_str()),
		cliente.getActivo() ? "SI" : "NO"
	);

	}
private: System::Void btnDeshabilitarCliente_Click(System::Object^ sender, System::EventArgs^ e) {
	int dniCliente = Convert::ToInt32(txtBuscarCliente->Text);

	Cliente cliente;
	cliente.deshabilitarCliente(dniCliente);

	tablaClientes->Rows->Clear();

	MessageBox::Show("Cliente deshabilitado.");
	}
private: System::Void btnActualizarCliente_Click(System::Object^ sender, System::EventArgs^ e) {
	int idCliente = idClienteSeleccionado;

	std::string nombre = msclr::interop::marshal_as<std::string>(txtNombreCliente->Text);
	std::string apellido = msclr::interop::marshal_as<std::string>(txtApellidoCliente->Text);
	int dniCliente = Convert::ToInt32(txtDniCliente->Text);
	std::string emailCliente = msclr::interop::marshal_as<std::string>(txtEmailCliente->Text);

	Cliente cliente;

	cliente.actualizarCliente(
		idCliente,
		nombre,
		apellido,
		dniCliente,
		emailCliente
	);
	MessageBox::Show("Cliente actualizado");
	}
private: System::Void btnMostrarTodosClientes_Click(System::Object^ sender, System::EventArgs^ e) {
	tablaClientes->Rows->Clear();

	Conexion conexion;
	sql::Connection* con = conexion.getConexion();

	try {
		sql::PreparedStatement* ps;
		sql::ResultSet* rs;

		ps = con->prepareStatement("SELECT * FROM clientes");
		rs = ps->executeQuery();

		while (rs->next()) {
			tablaClientes->Rows->Add(
				rs->getInt("idCliente"),
				gcnew String(rs->getString("nombre").c_str()),
				gcnew String(rs->getString("apellido").c_str()),
				rs->getInt("dniCliente"),
				gcnew String(rs->getString("emailCliente").c_str()),
				rs->getBoolean("activo") ? "SI" : "NO"
			);
		}
		delete rs;
		delete ps;
	}
	catch (sql::SQLException& e) {
		MessageBox::Show(gcnew String(e.what()));
		MessageBox::Show("Error al mostrar clientes");
	}
	}
	   //botones a las demas vistas
	   System::Void btnProductoEnCliente_Click(System::Object^ sender, System::EventArgs^ e);
	   System::Void btnRegistrarEnCliente_Click(System::Object^ sender, System::EventArgs^ e);
	   System::Void btnProveedorEnCliente_Click(System::Object^ sender, System::EventArgs^ e);
	   System::Void btnFacturacionEnCliente_Click(System::Object^ sender, System::EventArgs^ e);

};
}
