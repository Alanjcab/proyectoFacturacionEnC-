#pragma once
#include "Conexion.h"
#include <jdbc/cppconn/prepared_statement.h>
#include <jdbc/cppconn/resultset.h>
#include "Producto.h"
#include <msclr/marshal_cppstd.h>

namespace proyectoFacturacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ProductoForm
	/// </summary>
	public ref class ProductoForm : public System::Windows::Forms::Form
	{
	public:
		int idProductoSeleccionado;
		ProductoForm(void)
		{
			InitializeComponent();
			cargarProveedores();
			mostrarProductosActivos();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ProductoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnProveedorEnProducto;
	protected:

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ btnRegistrarProveedor;
	private: System::Windows::Forms::TextBox^ txtCodigo;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtStock;

	private: System::Windows::Forms::TextBox^ txtPrecio;

	private: System::Windows::Forms::TextBox^ txtDescripcion;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cbProveedores;
	private: System::Windows::Forms::DataGridView^ tablaProductos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColCodigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colDescripcion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colPrecio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColStock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CoProveedor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colEstado;
	private: System::Windows::Forms::Button^ btnBuscarProducto;
	private: System::Windows::Forms::TextBox^ txtBuscarProducto;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnDeshabilitarProducto;
	private: System::Windows::Forms::Button^ btnActualizarProducto;
	private: System::Windows::Forms::Button^ btnClienteEnProducto;
	private: System::Windows::Forms::Button^ btnRegistrarEnProducto;
	private: System::Windows::Forms::Button^ btnFacturacionEnProducto;
	private: System::Windows::Forms::Button^ btnHabilitarProducto;





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
			this->btnProveedorEnProducto = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->btnRegistrarProveedor = (gcnew System::Windows::Forms::Button());
			this->txtCodigo = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtStock = (gcnew System::Windows::Forms::TextBox());
			this->txtPrecio = (gcnew System::Windows::Forms::TextBox());
			this->txtDescripcion = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cbProveedores = (gcnew System::Windows::Forms::ComboBox());
			this->tablaProductos = (gcnew System::Windows::Forms::DataGridView());
			this->colId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColCodigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colDescripcion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colPrecio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColStock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CoProveedor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEstado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnBuscarProducto = (gcnew System::Windows::Forms::Button());
			this->txtBuscarProducto = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnDeshabilitarProducto = (gcnew System::Windows::Forms::Button());
			this->btnActualizarProducto = (gcnew System::Windows::Forms::Button());
			this->btnClienteEnProducto = (gcnew System::Windows::Forms::Button());
			this->btnRegistrarEnProducto = (gcnew System::Windows::Forms::Button());
			this->btnFacturacionEnProducto = (gcnew System::Windows::Forms::Button());
			this->btnHabilitarProducto = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tablaProductos))->BeginInit();
			this->SuspendLayout();
			// 
			// btnProveedorEnProducto
			// 
			this->btnProveedorEnProducto->BackColor = System::Drawing::Color::Teal;
			this->btnProveedorEnProducto->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProveedorEnProducto->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnProveedorEnProducto->Location = System::Drawing::Point(555, 12);
			this->btnProveedorEnProducto->Name = L"btnProveedorEnProducto";
			this->btnProveedorEnProducto->Size = System::Drawing::Size(160, 60);
			this->btnProveedorEnProducto->TabIndex = 21;
			this->btnProveedorEnProducto->Text = L"PROVEEDOR";
			this->btnProveedorEnProducto->UseVisualStyleBackColor = false;
			this->btnProveedorEnProducto->Click += gcnew System::EventHandler(this, &ProductoForm::btnProveedorEnProducto_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Teal;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label16->Location = System::Drawing::Point(400, 174);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(213, 24);
			this->label16->TabIndex = 40;
			this->label16->Text = L"REGISTRAR PRODUCTO";
			// 
			// btnRegistrarProveedor
			// 
			this->btnRegistrarProveedor->BackColor = System::Drawing::Color::Teal;
			this->btnRegistrarProveedor->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegistrarProveedor->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnRegistrarProveedor->Location = System::Drawing::Point(449, 393);
			this->btnRegistrarProveedor->Name = L"btnRegistrarProveedor";
			this->btnRegistrarProveedor->Size = System::Drawing::Size(129, 35);
			this->btnRegistrarProveedor->TabIndex = 49;
			this->btnRegistrarProveedor->Text = L"REGISTRAR";
			this->btnRegistrarProveedor->UseVisualStyleBackColor = false;
			this->btnRegistrarProveedor->Click += gcnew System::EventHandler(this, &ProductoForm::btnRegistrarProveedor_Click);
			// 
			// txtCodigo
			// 
			this->txtCodigo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtCodigo->Location = System::Drawing::Point(430, 221);
			this->txtCodigo->Name = L"txtCodigo";
			this->txtCodigo->Size = System::Drawing::Size(173, 22);
			this->txtCodigo->TabIndex = 50;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(370, 227);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 16);
			this->label1->TabIndex = 51;
			this->label1->Text = L"Codigo:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(365, 291);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 16);
			this->label2->TabIndex = 52;
			this->label2->Text = L"Precio:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(370, 329);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 53;
			this->label3->Text = L"Stock:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(342, 255);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 16);
			this->label4->TabIndex = 54;
			this->label4->Text = L"Descripcion:";
			// 
			// txtStock
			// 
			this->txtStock->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtStock->Location = System::Drawing::Point(430, 327);
			this->txtStock->Name = L"txtStock";
			this->txtStock->Size = System::Drawing::Size(173, 22);
			this->txtStock->TabIndex = 55;
			// 
			// txtPrecio
			// 
			this->txtPrecio->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPrecio->Location = System::Drawing::Point(430, 289);
			this->txtPrecio->Name = L"txtPrecio";
			this->txtPrecio->Size = System::Drawing::Size(173, 22);
			this->txtPrecio->TabIndex = 56;
			// 
			// txtDescripcion
			// 
			this->txtDescripcion->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtDescripcion->Location = System::Drawing::Point(430, 255);
			this->txtDescripcion->Name = L"txtDescripcion";
			this->txtDescripcion->Size = System::Drawing::Size(173, 22);
			this->txtDescripcion->TabIndex = 57;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(278, 360);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(136, 16);
			this->label5->TabIndex = 58;
			this->label5->Text = L"Sleccione proveedor:";
			// 
			// cbProveedores
			// 
			this->cbProveedores->FormattingEnabled = true;
			this->cbProveedores->Location = System::Drawing::Point(430, 360);
			this->cbProveedores->Name = L"cbProveedores";
			this->cbProveedores->Size = System::Drawing::Size(173, 24);
			this->cbProveedores->TabIndex = 59;
			this->cbProveedores->SelectedIndexChanged += gcnew System::EventHandler(this, &ProductoForm::cbProveedores_SelectedIndexChanged);
			// 
			// tablaProductos
			// 
			this->tablaProductos->AllowUserToAddRows = false;
			this->tablaProductos->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->tablaProductos->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Teal;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tablaProductos->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->tablaProductos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tablaProductos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->colId,
					this->ColCodigo, this->colDescripcion, this->colPrecio, this->ColStock, this->CoProveedor, this->colEstado
			});
			this->tablaProductos->EnableHeadersVisualStyles = false;
			this->tablaProductos->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tablaProductos->Location = System::Drawing::Point(153, 491);
			this->tablaProductos->Name = L"tablaProductos";
			this->tablaProductos->RowHeadersWidth = 51;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			this->tablaProductos->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->tablaProductos->RowTemplate->Height = 24;
			this->tablaProductos->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->tablaProductos->Size = System::Drawing::Size(881, 106);
			this->tablaProductos->TabIndex = 60;
			// 
			// colId
			// 
			this->colId->FillWeight = 50;
			this->colId->HeaderText = L"ID";
			this->colId->MinimumWidth = 6;
			this->colId->Name = L"colId";
			this->colId->ReadOnly = true;
			// 
			// ColCodigo
			// 
			this->ColCodigo->HeaderText = L"Codigo";
			this->ColCodigo->MinimumWidth = 6;
			this->ColCodigo->Name = L"ColCodigo";
			// 
			// colDescripcion
			// 
			this->colDescripcion->HeaderText = L"Descripcion";
			this->colDescripcion->MinimumWidth = 6;
			this->colDescripcion->Name = L"colDescripcion";
			this->colDescripcion->ReadOnly = true;
			// 
			// colPrecio
			// 
			this->colPrecio->FillWeight = 50;
			this->colPrecio->HeaderText = L"Precio";
			this->colPrecio->MinimumWidth = 6;
			this->colPrecio->Name = L"colPrecio";
			this->colPrecio->ReadOnly = true;
			// 
			// ColStock
			// 
			this->ColStock->FillWeight = 50;
			this->ColStock->HeaderText = L"Stock";
			this->ColStock->MinimumWidth = 6;
			this->ColStock->Name = L"ColStock";
			// 
			// CoProveedor
			// 
			this->CoProveedor->HeaderText = L"Proveedor";
			this->CoProveedor->MinimumWidth = 6;
			this->CoProveedor->Name = L"CoProveedor";
			// 
			// colEstado
			// 
			this->colEstado->FillWeight = 50;
			this->colEstado->HeaderText = L"Activo";
			this->colEstado->MinimumWidth = 6;
			this->colEstado->Name = L"colEstado";
			this->colEstado->ReadOnly = true;
			// 
			// btnBuscarProducto
			// 
			this->btnBuscarProducto->BackColor = System::Drawing::Color::Teal;
			this->btnBuscarProducto->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscarProducto->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnBuscarProducto->Location = System::Drawing::Point(345, 445);
			this->btnBuscarProducto->Name = L"btnBuscarProducto";
			this->btnBuscarProducto->Size = System::Drawing::Size(70, 31);
			this->btnBuscarProducto->TabIndex = 61;
			this->btnBuscarProducto->Text = L"Buscar";
			this->btnBuscarProducto->UseVisualStyleBackColor = false;
			this->btnBuscarProducto->Click += gcnew System::EventHandler(this, &ProductoForm::btnBuscarProducto_Click);
			// 
			// txtBuscarProducto
			// 
			this->txtBuscarProducto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBuscarProducto->Location = System::Drawing::Point(153, 451);
			this->txtBuscarProducto->Name = L"txtBuscarProducto";
			this->txtBuscarProducto->Size = System::Drawing::Size(173, 22);
			this->txtBuscarProducto->TabIndex = 62;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(150, 421);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(132, 16);
			this->label6->TabIndex = 63;
			this->label6->Text = L"Codigo del producto:";
			// 
			// btnDeshabilitarProducto
			// 
			this->btnDeshabilitarProducto->BackColor = System::Drawing::Color::Teal;
			this->btnDeshabilitarProducto->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeshabilitarProducto->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDeshabilitarProducto->Location = System::Drawing::Point(639, 310);
			this->btnDeshabilitarProducto->Name = L"btnDeshabilitarProducto";
			this->btnDeshabilitarProducto->Size = System::Drawing::Size(129, 35);
			this->btnDeshabilitarProducto->TabIndex = 65;
			this->btnDeshabilitarProducto->Text = L"DESHABILITAR";
			this->btnDeshabilitarProducto->UseVisualStyleBackColor = false;
			this->btnDeshabilitarProducto->Click += gcnew System::EventHandler(this, &ProductoForm::btnDeshabilitarProducto_Click);
			// 
			// btnActualizarProducto
			// 
			this->btnActualizarProducto->BackColor = System::Drawing::Color::Teal;
			this->btnActualizarProducto->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnActualizarProducto->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnActualizarProducto->Location = System::Drawing::Point(639, 269);
			this->btnActualizarProducto->Name = L"btnActualizarProducto";
			this->btnActualizarProducto->Size = System::Drawing::Size(129, 35);
			this->btnActualizarProducto->TabIndex = 66;
			this->btnActualizarProducto->Text = L"ACTUALIZAR";
			this->btnActualizarProducto->UseVisualStyleBackColor = false;
			this->btnActualizarProducto->Click += gcnew System::EventHandler(this, &ProductoForm::btnActualizarProducto_Click);
			// 
			// btnClienteEnProducto
			// 
			this->btnClienteEnProducto->BackColor = System::Drawing::Color::Teal;
			this->btnClienteEnProducto->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClienteEnProducto->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnClienteEnProducto->Location = System::Drawing::Point(368, 12);
			this->btnClienteEnProducto->Name = L"btnClienteEnProducto";
			this->btnClienteEnProducto->Size = System::Drawing::Size(160, 60);
			this->btnClienteEnProducto->TabIndex = 67;
			this->btnClienteEnProducto->Text = L"CLIENTE";
			this->btnClienteEnProducto->UseVisualStyleBackColor = false;
			this->btnClienteEnProducto->Click += gcnew System::EventHandler(this, &ProductoForm::btnClienteEnProducto_Click);
			// 
			// btnRegistrarEnProducto
			// 
			this->btnRegistrarEnProducto->BackColor = System::Drawing::Color::Teal;
			this->btnRegistrarEnProducto->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegistrarEnProducto->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnRegistrarEnProducto->Location = System::Drawing::Point(196, 12);
			this->btnRegistrarEnProducto->Name = L"btnRegistrarEnProducto";
			this->btnRegistrarEnProducto->Size = System::Drawing::Size(160, 60);
			this->btnRegistrarEnProducto->TabIndex = 69;
			this->btnRegistrarEnProducto->Text = L"REGISTRAR";
			this->btnRegistrarEnProducto->UseVisualStyleBackColor = false;
			this->btnRegistrarEnProducto->Click += gcnew System::EventHandler(this, &ProductoForm::btnRegistrarEnProducto_Click);
			// 
			// btnFacturacionEnProducto
			// 
			this->btnFacturacionEnProducto->BackColor = System::Drawing::Color::Teal;
			this->btnFacturacionEnProducto->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnFacturacionEnProducto->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnFacturacionEnProducto->Location = System::Drawing::Point(745, 12);
			this->btnFacturacionEnProducto->Name = L"btnFacturacionEnProducto";
			this->btnFacturacionEnProducto->Size = System::Drawing::Size(160, 60);
			this->btnFacturacionEnProducto->TabIndex = 70;
			this->btnFacturacionEnProducto->Text = L"FACTURACION";
			this->btnFacturacionEnProducto->UseVisualStyleBackColor = false;
			this->btnFacturacionEnProducto->Click += gcnew System::EventHandler(this, &ProductoForm::btnFacturacionEnProducto_Click);
			// 
			// btnHabilitarProducto
			// 
			this->btnHabilitarProducto->BackColor = System::Drawing::Color::Teal;
			this->btnHabilitarProducto->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHabilitarProducto->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnHabilitarProducto->Location = System::Drawing::Point(639, 353);
			this->btnHabilitarProducto->Name = L"btnHabilitarProducto";
			this->btnHabilitarProducto->Size = System::Drawing::Size(129, 35);
			this->btnHabilitarProducto->TabIndex = 71;
			this->btnHabilitarProducto->Text = L"HABILITAR";
			this->btnHabilitarProducto->UseVisualStyleBackColor = false;
			this->btnHabilitarProducto->Click += gcnew System::EventHandler(this, &ProductoForm::btnHabilitarProducto_Click);
			// 
			// ProductoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1182, 653);
			this->Controls->Add(this->btnHabilitarProducto);
			this->Controls->Add(this->btnFacturacionEnProducto);
			this->Controls->Add(this->btnRegistrarEnProducto);
			this->Controls->Add(this->btnClienteEnProducto);
			this->Controls->Add(this->btnActualizarProducto);
			this->Controls->Add(this->btnDeshabilitarProducto);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtBuscarProducto);
			this->Controls->Add(this->btnBuscarProducto);
			this->Controls->Add(this->tablaProductos);
			this->Controls->Add(this->cbProveedores);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtDescripcion);
			this->Controls->Add(this->txtPrecio);
			this->Controls->Add(this->txtStock);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtCodigo);
			this->Controls->Add(this->btnRegistrarProveedor);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->btnProveedorEnProducto);
			this->Name = L"ProductoForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ProductoForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tablaProductos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void mostrarProductosActivos() {
				
		tablaProductos->Rows->Clear();
			Conexion conexion;
			sql::Connection* con = conexion.getConexion();

			try {
				sql::PreparedStatement* ps = con->prepareStatement("select * from productos where activo = 1");
				sql::ResultSet* rs = ps->executeQuery();

				while (rs->next()) {
				tablaProductos->Rows->Add(
					rs->getInt("idProducto"),
					rs->getInt("codigo"),
					gcnew String(rs->getString("descripcion").c_str()),
					rs->getDouble("precio"),
					rs->getInt("stock"),
					gcnew String(rs->getString("idProveedor").c_str()),
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
	private: void cargarProveedores() { //metodo para que el usuario seleccine el proveedor cuando registra un producto

		Conexion conexion;
		sql::Connection* con = conexion.getConexion();

		try {
			sql::PreparedStatement* ps = con->prepareStatement(
				"select idProveedor, nombreProveedor from proveedores where activo = 1"
			);

			sql::ResultSet* rs = ps->executeQuery();

			cbProveedores->Items->Clear();

			while (rs->next()) {

				int id = rs->getInt("idProveedor");
				std::string nombre = rs->getString("nombreProveedor");

				String^ item = gcnew String(
					(std::to_string(id) + " - " + nombre).c_str()
				);

				cbProveedores->Items->Add(item);
			}
		}
		catch (sql::SQLException& e) {
			MessageBox::Show(gcnew String(e.what()));
		}
	}
	private: System::Void cbProveedores_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnRegistrarProveedor_Click(System::Object^ sender, System::EventArgs^ e) {

		if (cbProveedores->SelectedIndex == -1) {  //para verificar que seleccione un proveedor
			MessageBox::Show("Seleccione un proveedor.");
			return;
		}

		int codigo = System::Convert::ToInt32(txtCodigo->Text);
		std::string descripcion = msclr::interop::marshal_as<std::string>(txtDescripcion->Text);
		double precio = System::Convert::ToDouble(txtPrecio->Text);
		int stock = System::Convert::ToInt32(txtStock->Text);

		String^ proveedorSeleccionado = cbProveedores->SelectedItem->ToString();

		array<String^>^ partes = proveedorSeleccionado->Split('-');

		int idProveedor = System::Convert::ToInt32(partes[0]->Trim());

		Producto producto(
			codigo,
			descripcion,
			precio,
			stock,
			idProveedor
		);

		producto.altaProducto();

		txtCodigo->Text = "";
		txtDescripcion->Text = "";
		txtPrecio->Text = "";
		txtStock->Text = "";
		cbProveedores->SelectedIndex = -1;

		MessageBox::Show("Producto registrado correctamente.");
	}
	private: System::Void btnBuscarProducto_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigo = Convert::ToInt32(txtBuscarProducto->Text);

		Producto producto;
		producto.buscarProducto(codigo);

		idProductoSeleccionado = producto.getIdProducto();

		txtCodigo->Text = producto.getCodigo().ToString();
		txtDescripcion->Text = gcnew String(producto.getDescripcion().c_str());
		txtPrecio->Text = producto.getPrecio().ToString();
		txtStock->Text = producto.getStock().ToString();
		cbProveedores->Text = gcnew String(producto.getNombreProveedor().c_str());

		if (producto.getActivo()) {
			btnDeshabilitarProducto->Enabled = true;
			btnHabilitarProducto->Enabled = false;
		}
		else {
			btnDeshabilitarProducto->Enabled = false;
			btnHabilitarProducto->Enabled = true;
		}
	}

	private: System::Void btnActualizarProducto_Click(System::Object^ sender, System::EventArgs^ e) {
		int idProducto = idProductoSeleccionado;

		int codigo = Convert::ToInt32(txtCodigo->Text);
		std::string descripcion = msclr::interop::marshal_as<std::string>(txtDescripcion->Text);
		double precio = Convert::ToDouble(txtPrecio->Text);
		int stock = Convert::ToInt32(txtStock->Text);

		Producto producto;

		producto.actualizarProducto(
			idProducto,
			descripcion,
			precio,
			stock
		);
		MessageBox::Show("Producto actualizado");
	}
	private: System::Void btnDeshabilitarProducto_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigo = Convert::ToInt32(txtBuscarProducto->Text);

		Producto producto;
		producto.deshabilitarProducto(codigo);
		mostrarProductosActivos();
		MessageBox::Show("Porducto deshabilitado.");

		txtCodigo->Text = "";
		txtDescripcion->Text = "";
		txtPrecio->Text = "";
		txtStock->Text = "";
		cbProveedores->SelectedIndex = -1;
	}
	private: System::Void btnHabilitarProducto_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigo = Convert::ToInt32(txtBuscarProducto->Text);

		Producto producto;
		producto.habilitarProducto(codigo);
		mostrarProductosActivos();
		MessageBox::Show("Porducto habilitado.");

		txtCodigo->Text = "";
		txtDescripcion->Text = "";
		txtPrecio->Text = "";
		txtStock->Text = "";
		cbProveedores->SelectedIndex = -1;
	}
	System::Void btnClienteEnProducto_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void btnRegistrarEnProducto_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void btnProveedorEnProducto_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void btnFacturacionEnProducto_Click(System::Object^ sender, System::EventArgs^ e);


};
}
