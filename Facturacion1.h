#pragma once

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
	public:
		Facturacion(void)
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
	private: System::Windows::Forms::DataGridView^ dataGridView1;






	private: System::Windows::Forms::Button^ btnConfirmarCompra;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCodigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColDescripcion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColPrecio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColCantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColSubtotal;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ lbDescuentoProducto;
	private: System::Windows::Forms::Label^ lbDescuentoTotal;



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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->colId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCodigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColDescripcion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColPrecio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColCantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColSubtotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnConfirmarCompra = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->lbDescuentoProducto = (gcnew System::Windows::Forms::Label());
			this->lbDescuentoTotal = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(134, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"DNI:";
			// 
			// txtDniCliente
			// 
			this->txtDniCliente->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtDniCliente->Location = System::Drawing::Point(173, 83);
			this->txtDniCliente->Name = L"txtDniCliente";
			this->txtDniCliente->Size = System::Drawing::Size(100, 22);
			this->txtDniCliente->TabIndex = 1;
			// 
			// btnBuscarCliente
			// 
			this->btnBuscarCliente->Location = System::Drawing::Point(289, 85);
			this->btnBuscarCliente->Name = L"btnBuscarCliente";
			this->btnBuscarCliente->Size = System::Drawing::Size(75, 23);
			this->btnBuscarCliente->TabIndex = 2;
			this->btnBuscarCliente->Text = L"BUSCAR";
			this->btnBuscarCliente->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(98, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"NOMBRE:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(96, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"APELLIDO";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(105, 222);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"CODIGO:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(66, 254);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 16);
			this->label5->TabIndex = 6;
			this->label5->Text = L"DESCRIPCION:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(107, 287);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 16);
			this->label6->TabIndex = 7;
			this->label6->Text = L"PRECIO:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(112, 319);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 16);
			this->label7->TabIndex = 8;
			this->label7->Text = L"STOCK:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(88, 357);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 16);
			this->label8->TabIndex = 9;
			this->label8->Text = L"CANTIDAD:";
			// 
			// txtCodigoProducto
			// 
			this->txtCodigoProducto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtCodigoProducto->Location = System::Drawing::Point(173, 216);
			this->txtCodigoProducto->Name = L"txtCodigoProducto";
			this->txtCodigoProducto->Size = System::Drawing::Size(100, 22);
			this->txtCodigoProducto->TabIndex = 10;
			// 
			// btnBuscarProducto
			// 
			this->btnBuscarProducto->Location = System::Drawing::Point(289, 216);
			this->btnBuscarProducto->Name = L"btnBuscarProducto";
			this->btnBuscarProducto->Size = System::Drawing::Size(75, 23);
			this->btnBuscarProducto->TabIndex = 11;
			this->btnBuscarProducto->Text = L"BUSCAR";
			this->btnBuscarProducto->UseVisualStyleBackColor = true;
			// 
			// txtCantidadProducto
			// 
			this->txtCantidadProducto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtCantidadProducto->Location = System::Drawing::Point(173, 351);
			this->txtCantidadProducto->Name = L"txtCantidadProducto";
			this->txtCantidadProducto->Size = System::Drawing::Size(73, 22);
			this->txtCantidadProducto->TabIndex = 12;
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(217, 416);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(75, 23);
			this->btnAgregar->TabIndex = 13;
			this->btnAgregar->Text = L"AGREGAR";
			this->btnAgregar->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(170, 64);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 16);
			this->label9->TabIndex = 14;
			this->label9->Text = L"CLIENTE";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(170, 197);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(84, 16);
			this->label10->TabIndex = 15;
			this->label10->Text = L"PRODUCTO";
			// 
			// lbNombreCliente
			// 
			this->lbNombreCliente->AutoSize = true;
			this->lbNombreCliente->BackColor = System::Drawing::SystemColors::ControlLight;
			this->lbNombreCliente->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbNombreCliente->Location = System::Drawing::Point(173, 122);
			this->lbNombreCliente->Name = L"lbNombreCliente";
			this->lbNombreCliente->Size = System::Drawing::Size(162, 18);
			this->lbNombreCliente->TabIndex = 16;
			this->lbNombreCliente->Text = L"                                                   ";
			// 
			// lbApellidoCliente
			// 
			this->lbApellidoCliente->AutoSize = true;
			this->lbApellidoCliente->BackColor = System::Drawing::SystemColors::ControlLight;
			this->lbApellidoCliente->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbApellidoCliente->Location = System::Drawing::Point(173, 151);
			this->lbApellidoCliente->Name = L"lbApellidoCliente";
			this->lbApellidoCliente->Size = System::Drawing::Size(162, 18);
			this->lbApellidoCliente->TabIndex = 17;
			this->lbApellidoCliente->Text = L"                                                   ";
			// 
			// lbDescripcionProducto
			// 
			this->lbDescripcionProducto->AutoSize = true;
			this->lbDescripcionProducto->BackColor = System::Drawing::SystemColors::ControlLight;
			this->lbDescripcionProducto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbDescripcionProducto->Location = System::Drawing::Point(173, 254);
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
			this->lbPrecioProducto->Location = System::Drawing::Point(173, 285);
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
			this->lbStockProducto->Location = System::Drawing::Point(173, 317);
			this->lbStockProducto->Name = L"lbStockProducto";
			this->lbStockProducto->Size = System::Drawing::Size(162, 18);
			this->lbStockProducto->TabIndex = 20;
			this->lbStockProducto->Text = L"                                                   ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->colId,
					this->colCodigo, this->ColDescripcion, this->ColPrecio, this->ColCantidad, this->ColSubtotal
			});
			this->dataGridView1->Location = System::Drawing::Point(380, 98);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(704, 313);
			this->dataGridView1->TabIndex = 21;
			// 
			// colId
			// 
			this->colId->HeaderText = L"ID";
			this->colId->MinimumWidth = 6;
			this->colId->Name = L"colId";
			this->colId->Width = 125;
			// 
			// colCodigo
			// 
			this->colCodigo->HeaderText = L"Codigo";
			this->colCodigo->MinimumWidth = 6;
			this->colCodigo->Name = L"colCodigo";
			this->colCodigo->Width = 125;
			// 
			// ColDescripcion
			// 
			this->ColDescripcion->HeaderText = L"Descripcion";
			this->ColDescripcion->MinimumWidth = 6;
			this->ColDescripcion->Name = L"ColDescripcion";
			this->ColDescripcion->Width = 125;
			// 
			// ColPrecio
			// 
			this->ColPrecio->HeaderText = L"Precio";
			this->ColPrecio->MinimumWidth = 6;
			this->ColPrecio->Name = L"ColPrecio";
			this->ColPrecio->Width = 125;
			// 
			// ColCantidad
			// 
			this->ColCantidad->FillWeight = 50;
			this->ColCantidad->HeaderText = L"Cantidad";
			this->ColCantidad->MinimumWidth = 6;
			this->ColCantidad->Name = L"ColCantidad";
			this->ColCantidad->Width = 50;
			// 
			// ColSubtotal
			// 
			this->ColSubtotal->HeaderText = L"Subtotal";
			this->ColSubtotal->MinimumWidth = 6;
			this->ColSubtotal->Name = L"ColSubtotal";
			this->ColSubtotal->Width = 125;
			// 
			// btnConfirmarCompra
			// 
			this->btnConfirmarCompra->Location = System::Drawing::Point(524, 440);
			this->btnConfirmarCompra->Name = L"btnConfirmarCompra";
			this->btnConfirmarCompra->Size = System::Drawing::Size(105, 23);
			this->btnConfirmarCompra->TabIndex = 22;
			this->btnConfirmarCompra->Text = L"CONFIRMAR";
			this->btnConfirmarCompra->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(377, 447);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(54, 16);
			this->label11->TabIndex = 23;
			this->label11->Text = L"TOTAL:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label12->Location = System::Drawing::Point(437, 445);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(72, 18);
			this->label12->TabIndex = 24;
			this->label12->Text = L"                     ";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(676, 64);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(71, 16);
			this->label13->TabIndex = 25;
			this->label13->Text = L"FACTURA";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(88, 395);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(95, 16);
			this->label14->TabIndex = 26;
			this->label14->Text = L"DESCUENTO:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(652, 443);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(95, 16);
			this->label15->TabIndex = 27;
			this->label15->Text = L"DESCUENTO:";
			// 
			// lbDescuentoProducto
			// 
			this->lbDescuentoProducto->AutoSize = true;
			this->lbDescuentoProducto->BackColor = System::Drawing::SystemColors::ControlLight;
			this->lbDescuentoProducto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbDescuentoProducto->Location = System::Drawing::Point(182, 393);
			this->lbDescuentoProducto->Name = L"lbDescuentoProducto";
			this->lbDescuentoProducto->Size = System::Drawing::Size(72, 18);
			this->lbDescuentoProducto->TabIndex = 28;
			this->lbDescuentoProducto->Text = L"                     ";
			// 
			// lbDescuentoTotal
			// 
			this->lbDescuentoTotal->AutoSize = true;
			this->lbDescuentoTotal->BackColor = System::Drawing::SystemColors::ControlLight;
			this->lbDescuentoTotal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbDescuentoTotal->Location = System::Drawing::Point(753, 440);
			this->lbDescuentoTotal->Name = L"lbDescuentoTotal";
			this->lbDescuentoTotal->Size = System::Drawing::Size(72, 18);
			this->lbDescuentoTotal->TabIndex = 29;
			this->lbDescuentoTotal->Text = L"                     ";
			// 
			// Facturacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1189, 768);
			this->Controls->Add(this->lbDescuentoTotal);
			this->Controls->Add(this->lbDescuentoProducto);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->btnConfirmarCompra);
			this->Controls->Add(this->dataGridView1);
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
			this->Text = L"Facturacion";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
