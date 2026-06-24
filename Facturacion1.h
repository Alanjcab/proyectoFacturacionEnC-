#pragma once
#include "Facturacion.h"
#include "DetalleFactura.h"
#include "Cliente.h"
#include "Producto.h"

namespace proyectoFacturacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Facturacion
	/// </summary>
	public ref class Facturacion : public System::Windows::Forms::Form
	{
	private: //guargo los id seleccionados
		int idClienteSeleccionado;
		int idProductoSeleccionado;
		int stockProductoSeleccionado;
		double precioProductoSeleccionado;

	private: System::Windows::Forms::TextBox^ txtDescuentoProducto;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCodigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColDescripcion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColPrecio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColCantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColDescuento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColSubtotal;
	private: System::Windows::Forms::TextBox^ txtDescuentoTotal;
	private: System::Windows::Forms::Button^ btnClienteEnFacturacion;
	private: System::Windows::Forms::Button^ btnProductoEnFacturacion;
	private: System::Windows::Forms::Button^ btnProveedorEnFacturacion;
	private: System::Windows::Forms::Button^ btnRegistrarEnFacturacion;

	private:
		String^ rolUsuario;
		void permisosRol() {
			if (rolUsuario == "cajero")
			{
				btnProveedorEnFacturacion->Enabled = false;
				btnRegistrarEnFacturacion->Enabled = false;
			}
			else if (rolUsuario == "deposito") {
				MessageBox::Show("No tenes permiso para acceder a Usuarios.");
				this->Close();
				return;
			}
		}
		    
	public:
		Facturacion(String^ rol)
		{
			InitializeComponent();

			tablaFacturacion->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
			tablaFacturacion->MultiSelect = false;
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
		~Facturacion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtDniCliente;
	private: System::Windows::Forms::Button^ btnBuscarCliente;
	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtCodigoProducto;
	private: System::Windows::Forms::Button^ btnBuscarProducto;
	private: System::Windows::Forms::TextBox^ txtCantidadProducto;
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ lbNombreCliente;
	private: System::Windows::Forms::Label^ lbApellidoCliente;
	private: System::Windows::Forms::Label^ lbDescripcionProducto;
	private: System::Windows::Forms::Label^ lbPrecioProducto;
	private: System::Windows::Forms::Label^ lbStockProducto;
	private: System::Windows::Forms::DataGridView^ tablaFacturacion;
	private: System::Windows::Forms::Button^ btnConfirmarCompra;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ lbTotal;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ lbSubTotalNeto;
	private: System::Windows::Forms::Button^ button1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtDniCliente = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscarCliente = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtCodigoProducto = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscarProducto = (gcnew System::Windows::Forms::Button());
			this->txtCantidadProducto = (gcnew System::Windows::Forms::TextBox());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->lbNombreCliente = (gcnew System::Windows::Forms::Label());
			this->lbApellidoCliente = (gcnew System::Windows::Forms::Label());
			this->lbDescripcionProducto = (gcnew System::Windows::Forms::Label());
			this->lbPrecioProducto = (gcnew System::Windows::Forms::Label());
			this->lbStockProducto = (gcnew System::Windows::Forms::Label());
			this->tablaFacturacion = (gcnew System::Windows::Forms::DataGridView());
			this->colId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCodigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColDescripcion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColPrecio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColCantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColDescuento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColSubtotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnConfirmarCompra = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->lbTotal = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->lbSubTotalNeto = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtDescuentoProducto = (gcnew System::Windows::Forms::TextBox());
			this->txtDescuentoTotal = (gcnew System::Windows::Forms::TextBox());
			this->btnClienteEnFacturacion = (gcnew System::Windows::Forms::Button());
			this->btnProductoEnFacturacion = (gcnew System::Windows::Forms::Button());
			this->btnProveedorEnFacturacion = (gcnew System::Windows::Forms::Button());
			this->btnRegistrarEnFacturacion = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tablaFacturacion))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(71, 122);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"DNI:";
			// 
			// txtDniCliente
			// 
			this->txtDniCliente->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtDniCliente->Location = System::Drawing::Point(110, 120);
			this->txtDniCliente->Name = L"txtDniCliente";
			this->txtDniCliente->Size = System::Drawing::Size(100, 22);
			this->txtDniCliente->TabIndex = 1;
			// 
			// btnBuscarCliente
			// 
			this->btnBuscarCliente->BackColor = System::Drawing::Color::Teal;
			this->btnBuscarCliente->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscarCliente->ForeColor = System::Drawing::Color::White;
			this->btnBuscarCliente->Location = System::Drawing::Point(116, 214);
			this->btnBuscarCliente->Name = L"btnBuscarCliente";
			this->btnBuscarCliente->Size = System::Drawing::Size(94, 35);
			this->btnBuscarCliente->TabIndex = 2;
			this->btnBuscarCliente->Text = L"BUSCAR";
			this->btnBuscarCliente->UseVisualStyleBackColor = false;
			this->btnBuscarCliente->Click += gcnew System::EventHandler(this, &Facturacion::btnBuscarCliente_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 153);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"NOMBRE:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(30, 182);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"APELLIDO:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(342, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"CODIGO:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(303, 157);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 16);
			this->label5->TabIndex = 6;
			this->label5->Text = L"DESCRIPCION:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(344, 186);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 16);
			this->label6->TabIndex = 7;
			this->label6->Text = L"PRECIO:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(349, 216);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 16);
			this->label7->TabIndex = 8;
			this->label7->Text = L"STOCK:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(325, 278);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 16);
			this->label8->TabIndex = 9;
			this->label8->Text = L"CANTIDAD:";
			// 
			// txtCodigoProducto
			// 
			this->txtCodigoProducto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtCodigoProducto->Location = System::Drawing::Point(410, 120);
			this->txtCodigoProducto->Name = L"txtCodigoProducto";
			this->txtCodigoProducto->Size = System::Drawing::Size(100, 22);
			this->txtCodigoProducto->TabIndex = 10;
			// 
			// btnBuscarProducto
			// 
			this->btnBuscarProducto->BackColor = System::Drawing::Color::Teal;
			this->btnBuscarProducto->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscarProducto->ForeColor = System::Drawing::Color::White;
			this->btnBuscarProducto->Location = System::Drawing::Point(525, 116);
			this->btnBuscarProducto->Name = L"btnBuscarProducto";
			this->btnBuscarProducto->Size = System::Drawing::Size(93, 35);
			this->btnBuscarProducto->TabIndex = 11;
			this->btnBuscarProducto->Text = L"BUSCAR";
			this->btnBuscarProducto->UseVisualStyleBackColor = false;
			this->btnBuscarProducto->Click += gcnew System::EventHandler(this, &Facturacion::btnBuscarProducto_Click);
			// 
			// txtCantidadProducto
			// 
			this->txtCantidadProducto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtCantidadProducto->Location = System::Drawing::Point(410, 272);
			this->txtCantidadProducto->Name = L"txtCantidadProducto";
			this->txtCantidadProducto->Size = System::Drawing::Size(73, 22);
			this->txtCantidadProducto->TabIndex = 12;
			// 
			// btnAgregar
			// 
			this->btnAgregar->BackColor = System::Drawing::Color::Teal;
			this->btnAgregar->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregar->ForeColor = System::Drawing::Color::White;
			this->btnAgregar->Location = System::Drawing::Point(505, 259);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(113, 35);
			this->btnAgregar->TabIndex = 13;
			this->btnAgregar->Text = L"AGREGAR";
			this->btnAgregar->UseVisualStyleBackColor = false;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &Facturacion::btnAgregar_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(70, 87);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(187, 24);
			this->label9->TabIndex = 14;
			this->label9->Text = L"DATOD DEL CLIENTE";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(406, 87);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(109, 24);
			this->label10->TabIndex = 15;
			this->label10->Text = L"PRODUCTO";
			// 
			// lbNombreCliente
			// 
			this->lbNombreCliente->AutoSize = true;
			this->lbNombreCliente->BackColor = System::Drawing::SystemColors::ControlLight;
			this->lbNombreCliente->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbNombreCliente->Location = System::Drawing::Point(110, 153);
			this->lbNombreCliente->Name = L"lbNombreCliente";
			this->lbNombreCliente->Size = System::Drawing::Size(108, 18);
			this->lbNombreCliente->TabIndex = 16;
			this->lbNombreCliente->Text = L"                                 ";
			// 
			// lbApellidoCliente
			// 
			this->lbApellidoCliente->AutoSize = true;
			this->lbApellidoCliente->BackColor = System::Drawing::SystemColors::ControlLight;
			this->lbApellidoCliente->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbApellidoCliente->Location = System::Drawing::Point(110, 182);
			this->lbApellidoCliente->Name = L"lbApellidoCliente";
			this->lbApellidoCliente->Size = System::Drawing::Size(108, 18);
			this->lbApellidoCliente->TabIndex = 17;
			this->lbApellidoCliente->Text = L"                                 ";
			// 
			// lbDescripcionProducto
			// 
			this->lbDescripcionProducto->AutoSize = true;
			this->lbDescripcionProducto->BackColor = System::Drawing::SystemColors::ControlLight;
			this->lbDescripcionProducto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbDescripcionProducto->Location = System::Drawing::Point(410, 157);
			this->lbDescripcionProducto->Name = L"lbDescripcionProducto";
			this->lbDescripcionProducto->Size = System::Drawing::Size(162, 18);
			this->lbDescripcionProducto->TabIndex = 18;
			this->lbDescripcionProducto->Text = L"                                                   ";
			// 
			// lbPrecioProducto
			// 
			this->lbPrecioProducto->AutoSize = true;
			this->lbPrecioProducto->BackColor = System::Drawing::SystemColors::ControlLight;
			this->lbPrecioProducto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbPrecioProducto->Location = System::Drawing::Point(410, 186);
			this->lbPrecioProducto->Name = L"lbPrecioProducto";
			this->lbPrecioProducto->Size = System::Drawing::Size(162, 18);
			this->lbPrecioProducto->TabIndex = 19;
			this->lbPrecioProducto->Text = L"                                                   ";
			// 
			// lbStockProducto
			// 
			this->lbStockProducto->AutoSize = true;
			this->lbStockProducto->BackColor = System::Drawing::SystemColors::ControlLight;
			this->lbStockProducto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbStockProducto->Location = System::Drawing::Point(410, 214);
			this->lbStockProducto->Name = L"lbStockProducto";
			this->lbStockProducto->Size = System::Drawing::Size(162, 18);
			this->lbStockProducto->TabIndex = 20;
			this->lbStockProducto->Text = L"                                                   ";
			// 
			// tablaFacturacion
			// 
			this->tablaFacturacion->AllowUserToAddRows = false;
			this->tablaFacturacion->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->tablaFacturacion->BackgroundColor = System::Drawing::Color::Silver;
			this->tablaFacturacion->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tablaFacturacion->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->colId,
					this->colCodigo, this->ColDescripcion, this->ColPrecio, this->ColCantidad, this->ColDescuento, this->ColSubtotal
			});
			this->tablaFacturacion->Location = System::Drawing::Point(12, 328);
			this->tablaFacturacion->Name = L"tablaFacturacion";
			this->tablaFacturacion->ReadOnly = true;
			this->tablaFacturacion->RowHeadersWidth = 51;
			this->tablaFacturacion->RowTemplate->Height = 24;
			this->tablaFacturacion->Size = System::Drawing::Size(843, 313);
			this->tablaFacturacion->TabIndex = 21;
			// 
			// colId
			// 
			this->colId->HeaderText = L"ID";
			this->colId->MinimumWidth = 6;
			this->colId->Name = L"colId";
			this->colId->ReadOnly = true;
			// 
			// colCodigo
			// 
			this->colCodigo->HeaderText = L"Codigo";
			this->colCodigo->MinimumWidth = 6;
			this->colCodigo->Name = L"colCodigo";
			this->colCodigo->ReadOnly = true;
			// 
			// ColDescripcion
			// 
			this->ColDescripcion->HeaderText = L"Descripcion";
			this->ColDescripcion->MinimumWidth = 6;
			this->ColDescripcion->Name = L"ColDescripcion";
			this->ColDescripcion->ReadOnly = true;
			// 
			// ColPrecio
			// 
			this->ColPrecio->HeaderText = L"Precio";
			this->ColPrecio->MinimumWidth = 6;
			this->ColPrecio->Name = L"ColPrecio";
			this->ColPrecio->ReadOnly = true;
			// 
			// ColCantidad
			// 
			this->ColCantidad->HeaderText = L"Cant.";
			this->ColCantidad->MinimumWidth = 6;
			this->ColCantidad->Name = L"ColCantidad";
			this->ColCantidad->ReadOnly = true;
			// 
			// ColDescuento
			// 
			this->ColDescuento->HeaderText = L"Des. %";
			this->ColDescuento->MinimumWidth = 6;
			this->ColDescuento->Name = L"ColDescuento";
			this->ColDescuento->ReadOnly = true;
			// 
			// ColSubtotal
			// 
			this->ColSubtotal->HeaderText = L"Subtotal";
			this->ColSubtotal->MinimumWidth = 6;
			this->ColSubtotal->Name = L"ColSubtotal";
			this->ColSubtotal->ReadOnly = true;
			// 
			// btnConfirmarCompra
			// 
			this->btnConfirmarCompra->BackColor = System::Drawing::Color::ForestGreen;
			this->btnConfirmarCompra->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConfirmarCompra->ForeColor = System::Drawing::Color::White;
			this->btnConfirmarCompra->Location = System::Drawing::Point(938, 472);
			this->btnConfirmarCompra->Name = L"btnConfirmarCompra";
			this->btnConfirmarCompra->Size = System::Drawing::Size(160, 60);
			this->btnConfirmarCompra->TabIndex = 22;
			this->btnConfirmarCompra->Text = L"CONFIRMAR";
			this->btnConfirmarCompra->UseVisualStyleBackColor = false;
			this->btnConfirmarCompra->Click += gcnew System::EventHandler(this, &Facturacion::btnConfirmarCompra_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(919, 421);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(86, 27);
			this->label11->TabIndex = 23;
			this->label11->Text = L"TOTAL:";
			// 
			// lbTotal
			// 
			this->lbTotal->AutoSize = true;
			this->lbTotal->BackColor = System::Drawing::SystemColors::ControlLight;
			this->lbTotal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbTotal->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTotal->Location = System::Drawing::Point(1012, 421);
			this->lbTotal->Name = L"lbTotal";
			this->lbTotal->Size = System::Drawing::Size(119, 27);
			this->lbTotal->TabIndex = 24;
			this->lbTotal->Text = L"                     ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(893, 359);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(108, 19);
			this->label15->TabIndex = 27;
			this->label15->Text = L"DESCUENTO:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(294, 248);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(110, 16);
			this->label14->TabIndex = 26;
			this->label14->Text = L"DESCUENTO %:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(876, 388);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(125, 19);
			this->label13->TabIndex = 32;
			this->label13->Text = L"SUBTOTAL NETO:";
			// 
			// lbSubTotalNeto
			// 
			this->lbSubTotalNeto->AutoSize = true;
			this->lbSubTotalNeto->BackColor = System::Drawing::SystemColors::ControlLight;
			this->lbSubTotalNeto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbSubTotalNeto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSubTotalNeto->Location = System::Drawing::Point(1012, 388);
			this->lbSubTotalNeto->Name = L"lbSubTotalNeto";
			this->lbSubTotalNeto->Size = System::Drawing::Size(100, 20);
			this->lbSubTotalNeto->TabIndex = 33;
			this->lbSubTotalNeto->Text = L"                  ";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Teal;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(12, 282);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(192, 40);
			this->button1->TabIndex = 34;
			this->button1->Text = L"ELIMINAR PRODUCTO";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Facturacion::button1_Click);
			// 
			// txtDescuentoProducto
			// 
			this->txtDescuentoProducto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtDescuentoProducto->Location = System::Drawing::Point(410, 246);
			this->txtDescuentoProducto->Name = L"txtDescuentoProducto";
			this->txtDescuentoProducto->Size = System::Drawing::Size(73, 22);
			this->txtDescuentoProducto->TabIndex = 35;
			// 
			// txtDescuentoTotal
			// 
			this->txtDescuentoTotal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtDescuentoTotal->Location = System::Drawing::Point(1011, 356);
			this->txtDescuentoTotal->Name = L"txtDescuentoTotal";
			this->txtDescuentoTotal->Size = System::Drawing::Size(73, 22);
			this->txtDescuentoTotal->TabIndex = 36;
			this->txtDescuentoTotal->TextChanged += gcnew System::EventHandler(this, &Facturacion::txtDescuentoTotal_TextChanged);
			// 
			// btnClienteEnFacturacion
			// 
			this->btnClienteEnFacturacion->BackColor = System::Drawing::Color::Teal;
			this->btnClienteEnFacturacion->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClienteEnFacturacion->ForeColor = System::Drawing::Color::White;
			this->btnClienteEnFacturacion->Location = System::Drawing::Point(376, 12);
			this->btnClienteEnFacturacion->Name = L"btnClienteEnFacturacion";
			this->btnClienteEnFacturacion->Size = System::Drawing::Size(170, 60);
			this->btnClienteEnFacturacion->TabIndex = 38;
			this->btnClienteEnFacturacion->Text = L"CLIENTE";
			this->btnClienteEnFacturacion->UseVisualStyleBackColor = false;
			this->btnClienteEnFacturacion->Click += gcnew System::EventHandler(this, &Facturacion::btnClienteEnFacturacion_Click);
			// 
			// btnProductoEnFacturacion
			// 
			this->btnProductoEnFacturacion->BackColor = System::Drawing::Color::Teal;
			this->btnProductoEnFacturacion->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnProductoEnFacturacion->ForeColor = System::Drawing::Color::White;
			this->btnProductoEnFacturacion->Location = System::Drawing::Point(579, 12);
			this->btnProductoEnFacturacion->Name = L"btnProductoEnFacturacion";
			this->btnProductoEnFacturacion->Size = System::Drawing::Size(170, 60);
			this->btnProductoEnFacturacion->TabIndex = 39;
			this->btnProductoEnFacturacion->Text = L"PRODUCTO";
			this->btnProductoEnFacturacion->UseVisualStyleBackColor = false;
			this->btnProductoEnFacturacion->Click += gcnew System::EventHandler(this, &Facturacion::btnProductoEnFacturacion_Click);
			// 
			// btnProveedorEnFacturacion
			// 
			this->btnProveedorEnFacturacion->BackColor = System::Drawing::Color::Teal;
			this->btnProveedorEnFacturacion->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnProveedorEnFacturacion->ForeColor = System::Drawing::Color::White;
			this->btnProveedorEnFacturacion->Location = System::Drawing::Point(787, 12);
			this->btnProveedorEnFacturacion->Name = L"btnProveedorEnFacturacion";
			this->btnProveedorEnFacturacion->Size = System::Drawing::Size(170, 60);
			this->btnProveedorEnFacturacion->TabIndex = 40;
			this->btnProveedorEnFacturacion->Text = L"PROVEEDOR";
			this->btnProveedorEnFacturacion->UseVisualStyleBackColor = false;
			this->btnProveedorEnFacturacion->Click += gcnew System::EventHandler(this, &Facturacion::btnProveedorEnFacturacion_Click);
			// 
			// btnRegistrarEnFacturacion
			// 
			this->btnRegistrarEnFacturacion->BackColor = System::Drawing::Color::Teal;
			this->btnRegistrarEnFacturacion->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnRegistrarEnFacturacion->ForeColor = System::Drawing::Color::White;
			this->btnRegistrarEnFacturacion->Location = System::Drawing::Point(176, 12);
			this->btnRegistrarEnFacturacion->Name = L"btnRegistrarEnFacturacion";
			this->btnRegistrarEnFacturacion->Size = System::Drawing::Size(170, 60);
			this->btnRegistrarEnFacturacion->TabIndex = 41;
			this->btnRegistrarEnFacturacion->Text = L"REGISTRAR";
			this->btnRegistrarEnFacturacion->UseVisualStyleBackColor = false;
			this->btnRegistrarEnFacturacion->Click += gcnew System::EventHandler(this, &Facturacion::btnRegistrarEnFacturacion_Click);
			// 
			// Facturacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1182, 653);
			this->Controls->Add(this->btnRegistrarEnFacturacion);
			this->Controls->Add(this->btnProveedorEnFacturacion);
			this->Controls->Add(this->btnProductoEnFacturacion);
			this->Controls->Add(this->btnClienteEnFacturacion);
			this->Controls->Add(this->txtDescuentoTotal);
			this->Controls->Add(this->txtDescuentoProducto);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lbSubTotalNeto);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->lbTotal);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->btnConfirmarCompra);
			this->Controls->Add(this->tablaFacturacion);
			this->Controls->Add(this->lbStockProducto);
			this->Controls->Add(this->lbPrecioProducto);
			this->Controls->Add(this->lbDescripcionProducto);
			this->Controls->Add(this->lbApellidoCliente);
			this->Controls->Add(this->lbNombreCliente);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->txtCantidadProducto);
			this->Controls->Add(this->btnBuscarProducto);
			this->Controls->Add(this->txtCodigoProducto);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnBuscarCliente);
			this->Controls->Add(this->txtDniCliente);
			this->Controls->Add(this->label1);
			this->Name = L"Facturacion";
			this->Text = L"REGISTRAR";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Facturacion::Facturacion_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tablaFacturacion))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//recalculo los totales cuando voy agregano algun producto
	private: void recalcularTotales() {

		double subtotalNeto = 0;

		for (int i = 0; i < tablaFacturacion->Rows->Count; i++) {
			if (tablaFacturacion->Rows[i]->IsNewRow) {
				continue;
			}
			subtotalNeto += Convert::ToDouble(tablaFacturacion->Rows[i]->Cells[6]->Value);
		}

		lbSubTotalNeto->Text = subtotalNeto.ToString();

		int descuentoTotal = 0;

		if (txtDescuentoTotal->Text->Trim() != "") {
			descuentoTotal = Convert::ToInt32(txtDescuentoTotal->Text);
		}

		double total = subtotalNeto - (subtotalNeto * descuentoTotal / 100);

		lbTotal->Text = total.ToString();
	}

	private: void limpiarFactura() {
		txtDniCliente->Text = "";
		lbNombreCliente->Text = L"                                 ";
		lbApellidoCliente->Text = L"                                 ";

		txtCodigoProducto->Text = "";
		txtDescuentoProducto->Text = "";
		txtCantidadProducto->Text = "";

		lbDescripcionProducto->Text = L"                                                   ";
		lbPrecioProducto->Text = L"                                                   ";
		lbStockProducto->Text = L"                                                   ";

		txtDescuentoTotal->Text = "";
		lbSubTotalNeto->Text = L"                  ";
		lbTotal->Text = L"                     ";

		tablaFacturacion->Rows->Clear();

		idClienteSeleccionado = 0;
		idProductoSeleccionado = 0;
		stockProductoSeleccionado = 0;
		precioProductoSeleccionado = 0;
	}

	//calculo el total general de la facturs
	private: void calcularTotalFinal()
	{
		double subtotalNeto = 0;

		for (int i = 0; i < tablaFacturacion->Rows->Count; i++)
		{
			subtotalNeto += Convert::ToDouble(
				tablaFacturacion->Rows[i]->Cells[6]->Value
			);
		}

		lbSubTotalNeto->Text = subtotalNeto.ToString();

		double descuentoGeneral = 0;

		if (txtDescuentoTotal->Text != "")
		{
			descuentoGeneral =
				Convert::ToDouble(txtDescuentoTotal->Text);
		}

		double total =
			subtotalNeto - (subtotalNeto * descuentoGeneral / 100);

		lbTotal->Text = total.ToString();
	}

	private: System::Void btnBuscarCliente_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtDniCliente->Text == ""){
			MessageBox::Show("Ingrese el dni del cliente");
			return;
		}
		int dni;

		if (!Int32::TryParse(txtDniCliente->Text, dni)) {
			MessageBox::Show("Ingrese un dni valido");
			return;
		}

		Cliente cliente;

		cliente.buscarCliente(dni);

		if (cliente.getIdCliente() == 0)
		{
			MessageBox::Show("Cliente no encontrado.");
			return;
		}

		idClienteSeleccionado = cliente.getIdCliente();

		lbNombreCliente->Text =
			gcnew String(cliente.getNombre().c_str());

		lbApellidoCliente->Text =
			gcnew String(cliente.getApellido().c_str());
	}
	private: System::Void btnBuscarProducto_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtCodigoProducto->Text == ""){
			MessageBox::Show("ingrese el código del producto");
			return;
		}
		int codigo;

		if (!Int32::TryParse(txtCodigoProducto->Text, codigo)) {
			MessageBox::Show("Ingrese un código valido.");
			return;
		}

		Producto producto;
		producto.buscarProducto(codigo);

		if (producto.getIdProducto() == 0)
		{
			MessageBox::Show("Producto no encontrado.");
			return;
		}

		idProductoSeleccionado = producto.getIdProducto();
		precioProductoSeleccionado = producto.getPrecio();
		stockProductoSeleccionado = producto.getStock();
		lbDescripcionProducto->Text = gcnew String(producto.getDescripcion().c_str());
		lbPrecioProducto->Text = producto.getPrecio().ToString();
		lbStockProducto->Text = producto.getStock().ToString();
	}
	private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (idProductoSeleccionado == 0 || txtCodigoProducto->Text->Trim() == "") {
			MessageBox::Show("Tiene que buscar un producto");
			return;
		}
		if (txtCantidadProducto->Text->Trim() == ""){
			MessageBox::Show("ingrese una cantidad.");
			return;
		}
		int cantidad;

		if (!Int32::TryParse(txtCantidadProducto->Text, cantidad)) {
			MessageBox::Show("Ingrese una cantidad valida.");
			return;
		}

		if (cantidad <= 0) {
			MessageBox::Show("ingrese una cantidad valida");
			return;
		}

		if (cantidad > stockProductoSeleccionado) {
			MessageBox::Show("no hay  stock disponible del producto");
			return;
		}
		
		double descuentoProducto = 0;

		if (txtDescuentoProducto->Text->Trim() != "") {

			if (!Double::TryParse(txtDescuentoProducto->Text, descuentoProducto)) {
				MessageBox::Show("ingrese un descuento valido");
				return;
			}

			if (descuentoProducto < 0 || descuentoProducto > 100) {
				MessageBox::Show("el descuento debe estar entre 0 y 100");
				return;
			}
		}

		double subtotalSinDescuento = precioProductoSeleccionado * cantidad;
		double montoDescuento = subtotalSinDescuento * descuentoProducto / 100;
		double subtotalFinal = subtotalSinDescuento - montoDescuento;
		//un for para checkear que no se agregue ods veeces el mismo item, y validar que cuando se agrega otro haya stock disp
		for (int i = 0; i < tablaFacturacion->Rows->Count; i++) {

			if (tablaFacturacion->Rows[i]->IsNewRow ||
				tablaFacturacion->Rows[i]->Cells[0]->Value == nullptr) {
				continue;
			}
			int idProductoTabla =
				Convert::ToInt32(tablaFacturacion->Rows[i]->Cells[0]->Value);

			if (idProductoTabla == idProductoSeleccionado) {

				int cantidadActual =
					Convert::ToInt32(tablaFacturacion->Rows[i]->Cells[4]->Value);

				int nuevaCantidad = cantidadActual + cantidad;

				if (nuevaCantidad > stockProductoSeleccionado) {
					MessageBox::Show("Producto sin stock");
					return;
				}

				double subtotalAnterior =
					Convert::ToDouble(tablaFacturacion->Rows[i]->Cells[6]->Value);

				double subtotalNuevoSinDescuento =
					precioProductoSeleccionado * cantidad;

				double montoDescuentoNuevo =
					subtotalNuevoSinDescuento * descuentoProducto / 100;

				double subtotalNuevoFinal =
					subtotalNuevoSinDescuento - montoDescuentoNuevo;

				double nuevoSubtotalFinal =
					subtotalAnterior + subtotalNuevoFinal;

				tablaFacturacion->Rows[i]->Cells[4]->Value = nuevaCantidad;
				tablaFacturacion->Rows[i]->Cells[5]->Value = descuentoProducto;
				tablaFacturacion->Rows[i]->Cells[6]->Value = nuevoSubtotalFinal;

				idProductoSeleccionado = 0;
				stockProductoSeleccionado = 0;
				precioProductoSeleccionado = 0;

				lbDescripcionProducto->Text = "         ";
				lbPrecioProducto->Text = "         ";
				lbStockProducto->Text = "         ";

				recalcularTotales();
				return;
			}
		}

		tablaFacturacion->Rows->Add(
			idProductoSeleccionado,
			Convert::ToInt32(txtCodigoProducto->Text),
			lbDescripcionProducto->Text,
			precioProductoSeleccionado,
			cantidad,
			descuentoProducto,
			subtotalFinal
		);

		txtCodigoProducto->Text = "";
		txtDescuentoProducto->Text = "";
		txtCantidadProducto->Text = "";

		idProductoSeleccionado = 0;
		stockProductoSeleccionado = 0;
		precioProductoSeleccionado = 0;

		lbDescripcionProducto->Text = "         ";
		lbPrecioProducto->Text = "         ";
		lbStockProducto->Text = "         ";

		recalcularTotales();
	}
	//btn para eliminar producto de la tabla
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (tablaFacturacion->SelectedRows->Count == 0) {
			MessageBox::Show("seleccione un producto de la tabla");
			return;
		}

		int fila = tablaFacturacion->SelectedRows[0]->Index;

		tablaFacturacion->Rows->RemoveAt(fila);

		recalcularTotales();
	}
	private: System::Void txtDescuentoTotal_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		if (txtDescuentoTotal->Text->Trim() == "") {
			recalcularTotales();
			return;
		}
		int descuento;
		if (!Int32::TryParse(txtDescuentoTotal->Text->Trim(), descuento)) {
			MessageBox::Show("Ingrese un descuento válido");
			txtDescuentoTotal->Text = "";
			txtDescuentoTotal->SelectionStart = txtDescuentoTotal->Text->Length;
			recalcularTotales();
			return;
		}
		if (descuento < 0 || descuento > 100) {
			MessageBox::Show("El descuento debe estar entre 0 y 100");
			txtDescuentoTotal->Text = "";
			txtDescuentoTotal->SelectionStart = txtDescuentoTotal->Text->Length;
			recalcularTotales();
			return;
		}
		recalcularTotales();
	}

	private: System::Void btnConfirmarCompra_Click(System::Object^ sender, System::EventArgs^ e) {
		if (idClienteSeleccionado == 0) {
			MessageBox::Show("Tiene que seleccionar un cliente");
			return;
		}
		if (tablaFacturacion->Rows->Count == 0) {
			MessageBox::Show("Tiene que agregar un producto");
			return;
		}

		double subtotal = Convert::ToDouble(lbSubTotalNeto->Text);
		double descuentoGeneral = 0;

		if (txtDescuentoTotal->Text != "") {
			descuentoGeneral = Convert::ToDouble(txtDescuentoTotal->Text);
		}

		double total = Convert::ToDouble(lbTotal->Text);

		Factura factura(
			idClienteSeleccionado,
			subtotal,
			descuentoGeneral,
			total
		);

		int idFactura = factura.guardarFactura();

		if (idFactura == 0) {
			MessageBox::Show("No se guardo la factura");
			return;
		}
		for (int i = 0; i < tablaFacturacion->Rows->Count; i++)
		{
			int idProducto = Convert::ToInt32(tablaFacturacion->Rows[i]->Cells[0]->Value);
			int cantidad = Convert::ToInt32(tablaFacturacion->Rows[i]->Cells[4]->Value);
			double precio = Convert::ToDouble(tablaFacturacion->Rows[i]->Cells[3]->Value);
			double descuento = Convert::ToDouble(tablaFacturacion->Rows[i]->Cells[5]->Value);
			double subTotalNeto = Convert::ToDouble(tablaFacturacion->Rows[i]->Cells[6]->Value);

			DetalleFactura detalle(
				idFactura,
				idProducto,
				cantidad,
				precio,
				descuento,
				subTotalNeto
			);
			detalle.guardarDetalle();
		}
		MessageBox::Show("factura guardada correctamente ID: " + idFactura.ToString());
		limpiarFactura();
	}

	//boton a las demas vistas
	System::Void btnRegistrarEnFacturacion_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void btnClienteEnFacturacion_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void btnProductoEnFacturacion_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void btnProveedorEnFacturacion_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void Facturacion_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Application::Exit();
	}
};
}
