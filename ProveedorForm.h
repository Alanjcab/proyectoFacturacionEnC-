#pragma once
#include "Proveedor.h"
#include <msclr/marshal_cppstd.h>
#include "ProductoForm.h"


namespace proyectoFacturacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ProveedorForm
	/// </summary>
	public ref class ProveedorForm : public System::Windows::Forms::Form
	{
	private:
		String^ rolUsuario;

		void permisosRol() {
			if (rolUsuario == "deposito")
			{
				btnClienteEnProveedor->Enabled = false;
				btnFacturacionEnProveedor->Enabled = false;
				btnRegistrarEnProveedor->Enabled = false;
			}
		}
	public:
		int idProveedorSeleccionado;
		ProveedorForm(String^ rol)
		{
			InitializeComponent();
			mostrarProveedoresActivos();
			rolUsuario = rol;
			permisosRol();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ProveedorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnClienteEnProveedor;
	protected:

	private: System::Windows::Forms::TextBox^ txtNombreProveedor;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ btnActualizarProveedor;
	private: System::Windows::Forms::Button^ btnDeshabilitarProveedor;
	private: System::Windows::Forms::TextBox^ txtEmailProveedor;




	private: System::Windows::Forms::TextBox^ txtCuitProveedor;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnRegistrarProveedor;
	private: System::Windows::Forms::DataGridView^ tablaProveedor;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtBuscarProveedor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNombreProveedor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColCuit;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colEmailProveedor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colEstado;
	private: System::Windows::Forms::Button^ btnBuscarProveedor;
	private: System::Windows::Forms::Button^ btnRegistrarEnProveedor;
	private: System::Windows::Forms::Button^ btnFacturacionEnProveedor;

	private: System::Windows::Forms::Button^ btnProductoEnProveedor;
	private: System::Windows::Forms::Button^ btnHabilitarProveedor;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->btnClienteEnProveedor = (gcnew System::Windows::Forms::Button());
			this->txtNombreProveedor = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->btnActualizarProveedor = (gcnew System::Windows::Forms::Button());
			this->btnDeshabilitarProveedor = (gcnew System::Windows::Forms::Button());
			this->txtEmailProveedor = (gcnew System::Windows::Forms::TextBox());
			this->txtCuitProveedor = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnRegistrarProveedor = (gcnew System::Windows::Forms::Button());
			this->tablaProveedor = (gcnew System::Windows::Forms::DataGridView());
			this->colId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombreProveedor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColCuit = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEmailProveedor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEstado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtBuscarProveedor = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscarProveedor = (gcnew System::Windows::Forms::Button());
			this->btnRegistrarEnProveedor = (gcnew System::Windows::Forms::Button());
			this->btnFacturacionEnProveedor = (gcnew System::Windows::Forms::Button());
			this->btnProductoEnProveedor = (gcnew System::Windows::Forms::Button());
			this->btnHabilitarProveedor = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tablaProveedor))->BeginInit();
			this->SuspendLayout();
			// 
			// btnClienteEnProveedor
			// 
			this->btnClienteEnProveedor->BackColor = System::Drawing::Color::Teal;
			this->btnClienteEnProveedor->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClienteEnProveedor->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnClienteEnProveedor->Location = System::Drawing::Point(387, 42);
			this->btnClienteEnProveedor->Name = L"btnClienteEnProveedor";
			this->btnClienteEnProveedor->Size = System::Drawing::Size(160, 60);
			this->btnClienteEnProveedor->TabIndex = 20;
			this->btnClienteEnProveedor->Text = L"CLIENTE";
			this->btnClienteEnProveedor->UseVisualStyleBackColor = false;
			this->btnClienteEnProveedor->Click += gcnew System::EventHandler(this, &ProveedorForm::btnClienteEnProveedor_Click);
			// 
			// txtNombreProveedor
			// 
			this->txtNombreProveedor->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtNombreProveedor->Location = System::Drawing::Point(448, 195);
			this->txtNombreProveedor->Name = L"txtNombreProveedor";
			this->txtNombreProveedor->Size = System::Drawing::Size(173, 22);
			this->txtNombreProveedor->TabIndex = 22;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(317, 201);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 16);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Nombre proveedor:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Teal;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label16->Location = System::Drawing::Point(423, 153);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(222, 24);
			this->label16->TabIndex = 39;
			this->label16->Text = L"REGISTRAR PROVEEDOR";
			// 
			// btnActualizarProveedor
			// 
			this->btnActualizarProveedor->BackColor = System::Drawing::Color::Teal;
			this->btnActualizarProveedor->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnActualizarProveedor->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnActualizarProveedor->Location = System::Drawing::Point(650, 191);
			this->btnActualizarProveedor->Name = L"btnActualizarProveedor";
			this->btnActualizarProveedor->Size = System::Drawing::Size(129, 35);
			this->btnActualizarProveedor->TabIndex = 42;
			this->btnActualizarProveedor->Text = L"ACTUALIZAR";
			this->btnActualizarProveedor->UseVisualStyleBackColor = false;
			this->btnActualizarProveedor->Click += gcnew System::EventHandler(this, &ProveedorForm::btnActualizarProveedor_Click);
			// 
			// btnDeshabilitarProveedor
			// 
			this->btnDeshabilitarProveedor->BackColor = System::Drawing::Color::Teal;
			this->btnDeshabilitarProveedor->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeshabilitarProveedor->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDeshabilitarProveedor->Location = System::Drawing::Point(650, 228);
			this->btnDeshabilitarProveedor->Name = L"btnDeshabilitarProveedor";
			this->btnDeshabilitarProveedor->Size = System::Drawing::Size(129, 35);
			this->btnDeshabilitarProveedor->TabIndex = 43;
			this->btnDeshabilitarProveedor->Text = L"DESHABILITAR";
			this->btnDeshabilitarProveedor->UseVisualStyleBackColor = false;
			this->btnDeshabilitarProveedor->Click += gcnew System::EventHandler(this, &ProveedorForm::btnDeshabilitarProveedor_Click);
			// 
			// txtEmailProveedor
			// 
			this->txtEmailProveedor->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtEmailProveedor->Location = System::Drawing::Point(448, 269);
			this->txtEmailProveedor->Name = L"txtEmailProveedor";
			this->txtEmailProveedor->Size = System::Drawing::Size(173, 22);
			this->txtEmailProveedor->TabIndex = 44;
			// 
			// txtCuitProveedor
			// 
			this->txtCuitProveedor->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtCuitProveedor->Location = System::Drawing::Point(448, 232);
			this->txtCuitProveedor->Name = L"txtCuitProveedor";
			this->txtCuitProveedor->Size = System::Drawing::Size(173, 22);
			this->txtCuitProveedor->TabIndex = 45;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(410, 238);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 16);
			this->label2->TabIndex = 46;
			this->label2->Text = L"Cuit:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(398, 275);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 47;
			this->label3->Text = L"Email:";
			// 
			// btnRegistrarProveedor
			// 
			this->btnRegistrarProveedor->BackColor = System::Drawing::Color::Teal;
			this->btnRegistrarProveedor->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegistrarProveedor->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnRegistrarProveedor->Location = System::Drawing::Point(464, 308);
			this->btnRegistrarProveedor->Name = L"btnRegistrarProveedor";
			this->btnRegistrarProveedor->Size = System::Drawing::Size(129, 35);
			this->btnRegistrarProveedor->TabIndex = 48;
			this->btnRegistrarProveedor->Text = L"REGISTRAR";
			this->btnRegistrarProveedor->UseVisualStyleBackColor = false;
			this->btnRegistrarProveedor->Click += gcnew System::EventHandler(this, &ProveedorForm::btnRegistrarProveedor_Click);
			// 
			// tablaProveedor
			// 
			this->tablaProveedor->AllowUserToAddRows = false;
			this->tablaProveedor->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->tablaProveedor->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Teal;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tablaProveedor->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->tablaProveedor->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tablaProveedor->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->colId,
					this->colNombreProveedor, this->ColCuit, this->colEmailProveedor, this->colEstado
			});
			this->tablaProveedor->EnableHeadersVisualStyles = false;
			this->tablaProveedor->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tablaProveedor->Location = System::Drawing::Point(156, 431);
			this->tablaProveedor->Name = L"tablaProveedor";
			this->tablaProveedor->RowHeadersWidth = 51;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			this->tablaProveedor->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->tablaProveedor->RowTemplate->Height = 24;
			this->tablaProveedor->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tablaProveedor->Size = System::Drawing::Size(890, 93);
			this->tablaProveedor->TabIndex = 49;
			// 
			// colId
			// 
			this->colId->HeaderText = L"ID";
			this->colId->MinimumWidth = 6;
			this->colId->Name = L"colId";
			this->colId->ReadOnly = true;
			// 
			// colNombreProveedor
			// 
			this->colNombreProveedor->HeaderText = L"Nombre";
			this->colNombreProveedor->MinimumWidth = 6;
			this->colNombreProveedor->Name = L"colNombreProveedor";
			this->colNombreProveedor->ReadOnly = true;
			// 
			// ColCuit
			// 
			this->ColCuit->HeaderText = L"Cuit";
			this->ColCuit->MinimumWidth = 6;
			this->ColCuit->Name = L"ColCuit";
			// 
			// colEmailProveedor
			// 
			this->colEmailProveedor->HeaderText = L"Email";
			this->colEmailProveedor->MinimumWidth = 6;
			this->colEmailProveedor->Name = L"colEmailProveedor";
			this->colEmailProveedor->ReadOnly = true;
			// 
			// colEstado
			// 
			this->colEstado->FillWeight = 50;
			this->colEstado->HeaderText = L"Activo";
			this->colEstado->MinimumWidth = 6;
			this->colEstado->Name = L"colEstado";
			this->colEstado->ReadOnly = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Teal;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(162, 384);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(194, 24);
			this->label4->TabIndex = 50;
			this->label4->Text = L"BUSCAR PROVEEDOR";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(375, 392);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 16);
			this->label5->TabIndex = 51;
			this->label5->Text = L"Cuit:";
			// 
			// txtBuscarProveedor
			// 
			this->txtBuscarProveedor->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBuscarProveedor->Location = System::Drawing::Point(420, 386);
			this->txtBuscarProveedor->Name = L"txtBuscarProveedor";
			this->txtBuscarProveedor->Size = System::Drawing::Size(173, 22);
			this->txtBuscarProveedor->TabIndex = 52;
			// 
			// btnBuscarProveedor
			// 
			this->btnBuscarProveedor->BackColor = System::Drawing::Color::Teal;
			this->btnBuscarProveedor->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscarProveedor->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnBuscarProveedor->Location = System::Drawing::Point(611, 382);
			this->btnBuscarProveedor->Name = L"btnBuscarProveedor";
			this->btnBuscarProveedor->Size = System::Drawing::Size(71, 29);
			this->btnBuscarProveedor->TabIndex = 53;
			this->btnBuscarProveedor->Text = L"Buscar";
			this->btnBuscarProveedor->UseVisualStyleBackColor = false;
			this->btnBuscarProveedor->Click += gcnew System::EventHandler(this, &ProveedorForm::btnBuscarProveedor_Click);
			// 
			// btnRegistrarEnProveedor
			// 
			this->btnRegistrarEnProveedor->BackColor = System::Drawing::Color::Teal;
			this->btnRegistrarEnProveedor->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegistrarEnProveedor->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnRegistrarEnProveedor->Location = System::Drawing::Point(196, 42);
			this->btnRegistrarEnProveedor->Name = L"btnRegistrarEnProveedor";
			this->btnRegistrarEnProveedor->Size = System::Drawing::Size(160, 60);
			this->btnRegistrarEnProveedor->TabIndex = 54;
			this->btnRegistrarEnProveedor->Text = L"REGISTRAR";
			this->btnRegistrarEnProveedor->UseVisualStyleBackColor = false;
			this->btnRegistrarEnProveedor->Click += gcnew System::EventHandler(this, &ProveedorForm::btnRegistrarEnProveedor_Click);
			// 
			// btnFacturacionEnProveedor
			// 
			this->btnFacturacionEnProveedor->BackColor = System::Drawing::Color::Teal;
			this->btnFacturacionEnProveedor->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnFacturacionEnProveedor->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnFacturacionEnProveedor->Location = System::Drawing::Point(750, 42);
			this->btnFacturacionEnProveedor->Name = L"btnFacturacionEnProveedor";
			this->btnFacturacionEnProveedor->Size = System::Drawing::Size(160, 60);
			this->btnFacturacionEnProveedor->TabIndex = 55;
			this->btnFacturacionEnProveedor->Text = L"FACTURACION";
			this->btnFacturacionEnProveedor->UseVisualStyleBackColor = false;
			this->btnFacturacionEnProveedor->Click += gcnew System::EventHandler(this, &ProveedorForm::btnFacturacionEnProveedor_Click);
			// 
			// btnProductoEnProveedor
			// 
			this->btnProductoEnProveedor->BackColor = System::Drawing::Color::Teal;
			this->btnProductoEnProveedor->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProductoEnProveedor->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnProductoEnProveedor->Location = System::Drawing::Point(568, 42);
			this->btnProductoEnProveedor->Name = L"btnProductoEnProveedor";
			this->btnProductoEnProveedor->Size = System::Drawing::Size(160, 60);
			this->btnProductoEnProveedor->TabIndex = 56;
			this->btnProductoEnProveedor->Text = L"PRODUCTO";
			this->btnProductoEnProveedor->UseVisualStyleBackColor = false;
			this->btnProductoEnProveedor->Click += gcnew System::EventHandler(this, &ProveedorForm::btnProductoEnProveedor_Click);
			// 
			// btnHabilitarProveedor
			// 
			this->btnHabilitarProveedor->BackColor = System::Drawing::Color::Teal;
			this->btnHabilitarProveedor->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHabilitarProveedor->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnHabilitarProveedor->Location = System::Drawing::Point(650, 269);
			this->btnHabilitarProveedor->Name = L"btnHabilitarProveedor";
			this->btnHabilitarProveedor->Size = System::Drawing::Size(129, 35);
			this->btnHabilitarProveedor->TabIndex = 57;
			this->btnHabilitarProveedor->Text = L"HABILITAR";
			this->btnHabilitarProveedor->UseVisualStyleBackColor = false;
			this->btnHabilitarProveedor->Click += gcnew System::EventHandler(this, &ProveedorForm::btnHabilitarProveedor_Click);
			// 
			// ProveedorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1182, 653);
			this->Controls->Add(this->btnHabilitarProveedor);
			this->Controls->Add(this->btnProductoEnProveedor);
			this->Controls->Add(this->btnFacturacionEnProveedor);
			this->Controls->Add(this->btnRegistrarEnProveedor);
			this->Controls->Add(this->btnBuscarProveedor);
			this->Controls->Add(this->txtBuscarProveedor);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tablaProveedor);
			this->Controls->Add(this->btnRegistrarProveedor);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtCuitProveedor);
			this->Controls->Add(this->txtEmailProveedor);
			this->Controls->Add(this->btnDeshabilitarProveedor);
			this->Controls->Add(this->btnActualizarProveedor);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtNombreProveedor);
			this->Controls->Add(this->btnClienteEnProveedor);
			this->Name = L"ProveedorForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ProveedorForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tablaProveedor))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: void mostrarProveedoresActivos(){
	tablaProveedor->Rows->Clear();
	Conexion conexion;
	sql::Connection* con = conexion.getConexion();

	try {
		sql::PreparedStatement* ps = con->prepareStatement(
			"select * from proveedores where activo = 1"
		);
		sql::ResultSet* rs = ps->executeQuery();

		while (rs->next()) {
			tablaProveedor->Rows->Add(
				rs->getInt("idProveedor"),
				gcnew String(rs->getString("nombreProveedor").c_str()),
				rs->getInt("cuit"),
				gcnew String(rs->getString("emailProveedor").c_str()),
				"SI"
			);
		}
		delete rs;
		delete ps;
	}
	catch (sql::SQLException& e) {
		MessageBox::Show(gcnew String(e.what()));
	}
}

private: System::Void btnRegistrarProveedor_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string nombreProveedor = msclr::interop::marshal_as<std::string>(txtNombreProveedor->Text);
	int cuit = System::Convert::ToInt32(txtCuitProveedor->Text);
	std::string emailProveedor = msclr::interop::marshal_as<std::string>(txtEmailProveedor->Text);

	Proveedor proveedor(
		nombreProveedor,
		cuit,
		emailProveedor
	);

	proveedor.altaDeProveedor();

	txtNombreProveedor->Text = "";
	txtCuitProveedor->Text = "";
	txtEmailProveedor->Text = "";

	mostrarProveedoresActivos();

	MessageBox::Show("Cliente registrado correctamente.");
	}

private: System::Void btnBuscarProveedor_Click(System::Object^ sender, System::EventArgs^ e) {
	
	int cuit = Convert::ToInt32(txtBuscarProveedor->Text);

	Proveedor proveedor;
	proveedor.buscarProveedor(cuit);
	idProveedorSeleccionado = proveedor.getIdProveedor();

	txtNombreProveedor->Text = gcnew String(proveedor.getNombreProveedor().c_str());
	txtCuitProveedor->Text = proveedor.getCuit().ToString();
	txtEmailProveedor->Text = gcnew String(proveedor.getEmailProveedor().c_str());

	if (proveedor.getActivo()) {
		btnDeshabilitarProveedor->Enabled = true;
		btnHabilitarProveedor->Enabled = false;
	}
	else {
		btnDeshabilitarProveedor->Enabled = false;
		btnHabilitarProveedor->Enabled = true;
	}

	}
private: System::Void btnActualizarProveedor_Click(System::Object^ sender, System::EventArgs^ e) {
	int idProveedor = idProveedorSeleccionado;

	std::string nombreProveedor = msclr::interop::marshal_as<std::string>(txtNombreProveedor->Text);
	int cuit = Convert::ToInt32(txtCuitProveedor->Text);
	std::string emailProveedor = msclr::interop::marshal_as<std::string>(txtEmailProveedor->Text);

	Proveedor proveedor;

	proveedor.actualizarProveedor(
		idProveedor,
		nombreProveedor,
		cuit,
		emailProveedor
	);
	mostrarProveedoresActivos();
	MessageBox::Show("Proveedor actualizado");
	}
	private: System::Void btnDeshabilitarProveedor_Click(System::Object^ sender, System::EventArgs^ e) {
		int cuit = Convert::ToInt32(txtBuscarProveedor->Text);

		Proveedor proveedor;
		proveedor.deshabilitarProveedor(cuit);

		MessageBox::Show("Porveedor deshabilitado.");

		mostrarProveedoresActivos();

		txtNombreProveedor->Text = "";
		txtCuitProveedor->Text = "";
		txtEmailProveedor->Text = "";
	}

	private: System::Void btnHabilitarProveedor_Click(System::Object^ sender, System::EventArgs^ e) {
		int cuit = Convert::ToInt32(txtBuscarProveedor->Text);

		Proveedor proveedor;
		proveedor.habilitarProveedor(cuit);

		MessageBox::Show("Porveedor habilitado.");

		mostrarProveedoresActivos();

		txtNombreProveedor->Text = "";
		txtCuitProveedor->Text = "";
		txtEmailProveedor->Text = "";
	}

	//botones para ir a las demas vistas
	System::Void btnRegistrarEnProveedor_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void btnProductoEnProveedor_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void btnFacturacionEnProveedor_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void btnClienteEnProveedor_Click(System::Object^ sender, System::EventArgs^ e);
};
}
