#pragma once

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
		ProductoForm(void)
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
		~ProductoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnProveedorProd;
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
			this->btnProveedorProd = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnProveedorProd
			// 
			this->btnProveedorProd->BackColor = System::Drawing::Color::Teal;
			this->btnProveedorProd->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProveedorProd->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnProveedorProd->Location = System::Drawing::Point(411, 50);
			this->btnProveedorProd->Name = L"btnProveedorProd";
			this->btnProveedorProd->Size = System::Drawing::Size(148, 59);
			this->btnProveedorProd->TabIndex = 20;
			this->btnProveedorProd->Text = L"Proveedor";
			this->btnProveedorProd->UseVisualStyleBackColor = false;
			// 
			// ProductoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1113, 573);
			this->Controls->Add(this->btnProveedorProd);
			this->Name = L"ProductoForm";
			this->Text = L"ProductoForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
