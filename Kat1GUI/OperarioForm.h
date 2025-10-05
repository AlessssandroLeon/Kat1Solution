#pragma once

namespace Kat1GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace Kat1MODEL;
	using namespace Kat1CONTROLLER;

	/// <summary>
	/// Resumen de OperarioForm
	/// </summary>
	public ref class OperarioForm : public System::Windows::Forms::Form
	{
	public:
		OperarioForm(void)
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
		~OperarioForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::DataGridView^ dgvPlantas;
	protected:

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IDC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Orden;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TemperaturaC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ HumedadC;
	private: System::Windows::Forms::Button^ EliminarPlanta;
	private: System::Windows::Forms::Button^ ModificaPlanta;
	private: System::Windows::Forms::Button^ AgregarPlanta;
	private: System::Windows::Forms::TextBox^ HumedadText;

	private: System::Windows::Forms::TextBox^ TemperaturaText;

	private: System::Windows::Forms::TextBox^ OrdenText;

	private: System::Windows::Forms::TextBox^ IDText;

	private: System::Windows::Forms::Label^ Humedad;
	private: System::Windows::Forms::Label^ Temperatura;
	private: System::Windows::Forms::Label^ OrdenPlanta;
	private: System::Windows::Forms::Label^ PlantaID;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ labelTituloPlantas;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ IDEnsayo;
	private: System::Windows::Forms::Label^ ObservacionesEnsayo;



	private: System::Windows::Forms::Label^ Fecha;
	private: System::Windows::Forms::Label^ IDPlanta;
	private: System::Windows::Forms::TextBox^ HoraText;

	private: System::Windows::Forms::TextBox^ FechaText;

	private: System::Windows::Forms::TextBox^ IDPlantaText;

	private: System::Windows::Forms::TextBox^ IDEnsayoText;

	private: System::Windows::Forms::Label^ HoraReg;
	private: System::Windows::Forms::Label^ CondicionesReg;
	private: System::Windows::Forms::TextBox^ ObservacionesText;

	private: System::Windows::Forms::Button^ AgregarEnsayo;
	private: System::Windows::Forms::TextBox^ CondicionesText;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IDEnsayoC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IDPlantaC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FechaC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ HoraC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ObservacionesC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CondicionesC;
	private: System::Windows::Forms::Button^ EliminarEnsayo;
	private: System::Windows::Forms::Button^ ModificarEnsayo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Regresar;
	private: System::Windows::Forms::Button^ Finalizar;




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
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelTituloPlantas = (gcnew System::Windows::Forms::Label());
			this->dgvPlantas = (gcnew System::Windows::Forms::DataGridView());
			this->IDC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Orden = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TemperaturaC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HumedadC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EliminarPlanta = (gcnew System::Windows::Forms::Button());
			this->ModificaPlanta = (gcnew System::Windows::Forms::Button());
			this->AgregarPlanta = (gcnew System::Windows::Forms::Button());
			this->HumedadText = (gcnew System::Windows::Forms::TextBox());
			this->TemperaturaText = (gcnew System::Windows::Forms::TextBox());
			this->OrdenText = (gcnew System::Windows::Forms::TextBox());
			this->IDText = (gcnew System::Windows::Forms::TextBox());
			this->Humedad = (gcnew System::Windows::Forms::Label());
			this->Temperatura = (gcnew System::Windows::Forms::Label());
			this->OrdenPlanta = (gcnew System::Windows::Forms::Label());
			this->PlantaID = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->IDEnsayo = (gcnew System::Windows::Forms::Label());
			this->IDPlanta = (gcnew System::Windows::Forms::Label());
			this->Fecha = (gcnew System::Windows::Forms::Label());
			this->ObservacionesEnsayo = (gcnew System::Windows::Forms::Label());
			this->CondicionesReg = (gcnew System::Windows::Forms::Label());
			this->HoraReg = (gcnew System::Windows::Forms::Label());
			this->IDEnsayoText = (gcnew System::Windows::Forms::TextBox());
			this->IDPlantaText = (gcnew System::Windows::Forms::TextBox());
			this->FechaText = (gcnew System::Windows::Forms::TextBox());
			this->HoraText = (gcnew System::Windows::Forms::TextBox());
			this->ObservacionesText = (gcnew System::Windows::Forms::TextBox());
			this->CondicionesText = (gcnew System::Windows::Forms::TextBox());
			this->AgregarEnsayo = (gcnew System::Windows::Forms::Button());
			this->ModificarEnsayo = (gcnew System::Windows::Forms::Button());
			this->EliminarEnsayo = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->IDEnsayoC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->IDPlantaC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FechaC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HoraC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ObservacionesC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CondicionesC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Regresar = (gcnew System::Windows::Forms::Button());
			this->Finalizar = (gcnew System::Windows::Forms::Button());
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPlantas))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->labelTituloPlantas);
			this->tabPage1->Controls->Add(this->dgvPlantas);
			this->tabPage1->Controls->Add(this->EliminarPlanta);
			this->tabPage1->Controls->Add(this->ModificaPlanta);
			this->tabPage1->Controls->Add(this->AgregarPlanta);
			this->tabPage1->Controls->Add(this->HumedadText);
			this->tabPage1->Controls->Add(this->TemperaturaText);
			this->tabPage1->Controls->Add(this->OrdenText);
			this->tabPage1->Controls->Add(this->IDText);
			this->tabPage1->Controls->Add(this->Humedad);
			this->tabPage1->Controls->Add(this->Temperatura);
			this->tabPage1->Controls->Add(this->OrdenPlanta);
			this->tabPage1->Controls->Add(this->PlantaID);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(803, 462);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Plantas";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &OperarioForm::tabPage1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(667, 427);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 29);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Finalizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &OperarioForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(20, 427);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 29);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OperarioForm::button1_Click);
			// 
			// labelTituloPlantas
			// 
			this->labelTituloPlantas->AutoSize = true;
			this->labelTituloPlantas->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold));
			this->labelTituloPlantas->Location = System::Drawing::Point(281, 231);
			this->labelTituloPlantas->Name = L"labelTituloPlantas";
			this->labelTituloPlantas->Size = System::Drawing::Size(247, 29);
			this->labelTituloPlantas->TabIndex = 14;
			this->labelTituloPlantas->Text = L"PLANTAS REGISTRADAS";
			// 
			// dgvPlantas
			// 
			this->dgvPlantas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPlantas->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->IDC, this->Orden,
					this->TemperaturaC, this->HumedadC
			});
			this->dgvPlantas->Location = System::Drawing::Point(120, 262);
			this->dgvPlantas->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvPlantas->Name = L"dgvPlantas";
			this->dgvPlantas->RowHeadersWidth = 51;
			this->dgvPlantas->RowTemplate->Height = 24;
			this->dgvPlantas->Size = System::Drawing::Size(548, 150);
			this->dgvPlantas->TabIndex = 11;
			this->dgvPlantas->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &OperarioForm::dgvPlantas_CellContentClick);
			// 
			// IDC
			// 
			this->IDC->HeaderText = L"ID";
			this->IDC->MinimumWidth = 6;
			this->IDC->Name = L"IDC";
			this->IDC->Width = 125;
			// 
			// Orden
			// 
			this->Orden->HeaderText = L"Orden";
			this->Orden->MinimumWidth = 6;
			this->Orden->Name = L"Orden";
			this->Orden->Width = 125;
			// 
			// TemperaturaC
			// 
			this->TemperaturaC->HeaderText = L"Temperatura";
			this->TemperaturaC->MinimumWidth = 6;
			this->TemperaturaC->Name = L"TemperaturaC";
			this->TemperaturaC->Width = 125;
			// 
			// HumedadC
			// 
			this->HumedadC->HeaderText = L"Humedad";
			this->HumedadC->MinimumWidth = 6;
			this->HumedadC->Name = L"HumedadC";
			this->HumedadC->Width = 125;
			// 
			// EliminarPlanta
			// 
			this->EliminarPlanta->Location = System::Drawing::Point(582, 181);
			this->EliminarPlanta->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EliminarPlanta->Name = L"EliminarPlanta";
			this->EliminarPlanta->Size = System::Drawing::Size(85, 32);
			this->EliminarPlanta->TabIndex = 10;
			this->EliminarPlanta->Text = L"Eliminar";
			this->EliminarPlanta->UseVisualStyleBackColor = true;
			this->EliminarPlanta->Click += gcnew System::EventHandler(this, &OperarioForm::EliminarPlanta_Click);
			// 
			// ModificaPlanta
			// 
			this->ModificaPlanta->Location = System::Drawing::Point(582, 107);
			this->ModificaPlanta->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ModificaPlanta->Name = L"ModificaPlanta";
			this->ModificaPlanta->Size = System::Drawing::Size(85, 31);
			this->ModificaPlanta->TabIndex = 9;
			this->ModificaPlanta->Text = L"Modificar";
			this->ModificaPlanta->UseVisualStyleBackColor = true;
			this->ModificaPlanta->Click += gcnew System::EventHandler(this, &OperarioForm::ModificaPlanta_Click);
			// 
			// AgregarPlanta
			// 
			this->AgregarPlanta->Location = System::Drawing::Point(582, 33);
			this->AgregarPlanta->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AgregarPlanta->Name = L"AgregarPlanta";
			this->AgregarPlanta->Size = System::Drawing::Size(85, 31);
			this->AgregarPlanta->TabIndex = 8;
			this->AgregarPlanta->Text = L"Agregar";
			this->AgregarPlanta->UseVisualStyleBackColor = true;
			this->AgregarPlanta->Click += gcnew System::EventHandler(this, &OperarioForm::AgregarPlanta_Click);
			// 
			// HumedadText
			// 
			this->HumedadText->Location = System::Drawing::Point(157, 201);
			this->HumedadText->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->HumedadText->Name = L"HumedadText";
			this->HumedadText->Size = System::Drawing::Size(100, 22);
			this->HumedadText->TabIndex = 7;
			// 
			// TemperaturaText
			// 
			this->TemperaturaText->Location = System::Drawing::Point(157, 143);
			this->TemperaturaText->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TemperaturaText->Name = L"TemperaturaText";
			this->TemperaturaText->Size = System::Drawing::Size(100, 22);
			this->TemperaturaText->TabIndex = 6;
			// 
			// OrdenText
			// 
			this->OrdenText->Location = System::Drawing::Point(157, 83);
			this->OrdenText->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->OrdenText->Name = L"OrdenText";
			this->OrdenText->Size = System::Drawing::Size(100, 22);
			this->OrdenText->TabIndex = 5;
			// 
			// IDText
			// 
			this->IDText->Location = System::Drawing::Point(157, 27);
			this->IDText->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->IDText->Name = L"IDText";
			this->IDText->Size = System::Drawing::Size(100, 22);
			this->IDText->TabIndex = 4;
			this->IDText->TextChanged += gcnew System::EventHandler(this, &OperarioForm::textBox1_TextChanged);
			// 
			// Humedad
			// 
			this->Humedad->AutoSize = true;
			this->Humedad->Location = System::Drawing::Point(48, 207);
			this->Humedad->Name = L"Humedad";
			this->Humedad->Size = System::Drawing::Size(70, 16);
			this->Humedad->TabIndex = 3;
			this->Humedad->Text = L"Humedad:";
			// 
			// Temperatura
			// 
			this->Temperatura->AutoSize = true;
			this->Temperatura->Location = System::Drawing::Point(48, 143);
			this->Temperatura->Name = L"Temperatura";
			this->Temperatura->Size = System::Drawing::Size(88, 16);
			this->Temperatura->TabIndex = 2;
			this->Temperatura->Text = L"Temperatura:";
			this->Temperatura->Click += gcnew System::EventHandler(this, &OperarioForm::Temperatura_Click);
			// 
			// OrdenPlanta
			// 
			this->OrdenPlanta->AutoSize = true;
			this->OrdenPlanta->Location = System::Drawing::Point(48, 86);
			this->OrdenPlanta->Name = L"OrdenPlanta";
			this->OrdenPlanta->Size = System::Drawing::Size(47, 16);
			this->OrdenPlanta->TabIndex = 1;
			this->OrdenPlanta->Text = L"Orden:";
			// 
			// PlantaID
			// 
			this->PlantaID->AutoSize = true;
			this->PlantaID->Location = System::Drawing::Point(48, 33);
			this->PlantaID->Name = L"PlantaID";
			this->PlantaID->Size = System::Drawing::Size(23, 16);
			this->PlantaID->TabIndex = 0;
			this->PlantaID->Text = L"ID:";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(25, 12);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(811, 491);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->Finalizar);
			this->tabPage2->Controls->Add(this->Regresar);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Controls->Add(this->EliminarEnsayo);
			this->tabPage2->Controls->Add(this->ModificarEnsayo);
			this->tabPage2->Controls->Add(this->AgregarEnsayo);
			this->tabPage2->Controls->Add(this->CondicionesText);
			this->tabPage2->Controls->Add(this->ObservacionesText);
			this->tabPage2->Controls->Add(this->HoraText);
			this->tabPage2->Controls->Add(this->FechaText);
			this->tabPage2->Controls->Add(this->IDPlantaText);
			this->tabPage2->Controls->Add(this->IDEnsayoText);
			this->tabPage2->Controls->Add(this->HoraReg);
			this->tabPage2->Controls->Add(this->CondicionesReg);
			this->tabPage2->Controls->Add(this->ObservacionesEnsayo);
			this->tabPage2->Controls->Add(this->Fecha);
			this->tabPage2->Controls->Add(this->IDPlanta);
			this->tabPage2->Controls->Add(this->IDEnsayo);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(803, 462);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Nuevo Ensayo";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// IDEnsayo
			// 
			this->IDEnsayo->AutoSize = true;
			this->IDEnsayo->Location = System::Drawing::Point(46, 44);
			this->IDEnsayo->Name = L"IDEnsayo";
			this->IDEnsayo->Size = System::Drawing::Size(72, 16);
			this->IDEnsayo->TabIndex = 0;
			this->IDEnsayo->Text = L"ID Ensayo:";
			this->IDEnsayo->Click += gcnew System::EventHandler(this, &OperarioForm::label1_Click);
			// 
			// IDPlanta
			// 
			this->IDPlanta->AutoSize = true;
			this->IDPlanta->Location = System::Drawing::Point(46, 95);
			this->IDPlanta->Name = L"IDPlanta";
			this->IDPlanta->Size = System::Drawing::Size(64, 16);
			this->IDPlanta->TabIndex = 1;
			this->IDPlanta->Text = L"ID Planta:";
			// 
			// Fecha
			// 
			this->Fecha->AutoSize = true;
			this->Fecha->Location = System::Drawing::Point(46, 141);
			this->Fecha->Name = L"Fecha";
			this->Fecha->Size = System::Drawing::Size(48, 16);
			this->Fecha->TabIndex = 2;
			this->Fecha->Text = L"Fecha:";
			// 
			// ObservacionesEnsayo
			// 
			this->ObservacionesEnsayo->AutoSize = true;
			this->ObservacionesEnsayo->Location = System::Drawing::Point(279, 27);
			this->ObservacionesEnsayo->Name = L"ObservacionesEnsayo";
			this->ObservacionesEnsayo->Size = System::Drawing::Size(102, 16);
			this->ObservacionesEnsayo->TabIndex = 5;
			this->ObservacionesEnsayo->Text = L"Observaciones:";
			// 
			// CondicionesReg
			// 
			this->CondicionesReg->AutoSize = true;
			this->CondicionesReg->Location = System::Drawing::Point(279, 133);
			this->CondicionesReg->Name = L"CondicionesReg";
			this->CondicionesReg->Size = System::Drawing::Size(153, 16);
			this->CondicionesReg->TabIndex = 6;
			this->CondicionesReg->Text = L"Condiciones de Ensayo:";
			// 
			// HoraReg
			// 
			this->HoraReg->AutoSize = true;
			this->HoraReg->Location = System::Drawing::Point(46, 194);
			this->HoraReg->Name = L"HoraReg";
			this->HoraReg->Size = System::Drawing::Size(40, 16);
			this->HoraReg->TabIndex = 7;
			this->HoraReg->Text = L"Hora:";
			this->HoraReg->Click += gcnew System::EventHandler(this, &OperarioForm::HoraReg_Click);
			// 
			// IDEnsayoText
			// 
			this->IDEnsayoText->Location = System::Drawing::Point(124, 41);
			this->IDEnsayoText->Name = L"IDEnsayoText";
			this->IDEnsayoText->Size = System::Drawing::Size(100, 22);
			this->IDEnsayoText->TabIndex = 8;
			// 
			// IDPlantaText
			// 
			this->IDPlantaText->Location = System::Drawing::Point(124, 89);
			this->IDPlantaText->Name = L"IDPlantaText";
			this->IDPlantaText->Size = System::Drawing::Size(100, 22);
			this->IDPlantaText->TabIndex = 9;
			// 
			// FechaText
			// 
			this->FechaText->Location = System::Drawing::Point(124, 141);
			this->FechaText->Name = L"FechaText";
			this->FechaText->Size = System::Drawing::Size(100, 22);
			this->FechaText->TabIndex = 10;
			// 
			// HoraText
			// 
			this->HoraText->Location = System::Drawing::Point(124, 194);
			this->HoraText->Name = L"HoraText";
			this->HoraText->Size = System::Drawing::Size(100, 22);
			this->HoraText->TabIndex = 11;
			// 
			// ObservacionesText
			// 
			this->ObservacionesText->Location = System::Drawing::Point(282, 46);
			this->ObservacionesText->Multiline = true;
			this->ObservacionesText->Name = L"ObservacionesText";
			this->ObservacionesText->Size = System::Drawing::Size(342, 65);
			this->ObservacionesText->TabIndex = 12;
			// 
			// CondicionesText
			// 
			this->CondicionesText->Location = System::Drawing::Point(282, 157);
			this->CondicionesText->Multiline = true;
			this->CondicionesText->Name = L"CondicionesText";
			this->CondicionesText->Size = System::Drawing::Size(342, 59);
			this->CondicionesText->TabIndex = 14;
			// 
			// AgregarEnsayo
			// 
			this->AgregarEnsayo->Location = System::Drawing::Point(677, 40);
			this->AgregarEnsayo->Name = L"AgregarEnsayo";
			this->AgregarEnsayo->Size = System::Drawing::Size(75, 31);
			this->AgregarEnsayo->TabIndex = 15;
			this->AgregarEnsayo->Text = L"Agregar";
			this->AgregarEnsayo->UseVisualStyleBackColor = true;
			// 
			// ModificarEnsayo
			// 
			this->ModificarEnsayo->Location = System::Drawing::Point(677, 115);
			this->ModificarEnsayo->Name = L"ModificarEnsayo";
			this->ModificarEnsayo->Size = System::Drawing::Size(75, 30);
			this->ModificarEnsayo->TabIndex = 16;
			this->ModificarEnsayo->Text = L"Modificar";
			this->ModificarEnsayo->UseVisualStyleBackColor = true;
			// 
			// EliminarEnsayo
			// 
			this->EliminarEnsayo->Location = System::Drawing::Point(677, 190);
			this->EliminarEnsayo->Name = L"EliminarEnsayo";
			this->EliminarEnsayo->Size = System::Drawing::Size(75, 30);
			this->EliminarEnsayo->TabIndex = 17;
			this->EliminarEnsayo->Text = L"Eliminar";
			this->EliminarEnsayo->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->IDEnsayoC,
					this->IDPlantaC, this->FechaC, this->HoraC, this->ObservacionesC, this->CondicionesC
			});
			this->dataGridView1->Location = System::Drawing::Point(15, 266);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(771, 150);
			this->dataGridView1->TabIndex = 18;
			// 
			// IDEnsayoC
			// 
			this->IDEnsayoC->HeaderText = L"ID Ensayo";
			this->IDEnsayoC->MinimumWidth = 6;
			this->IDEnsayoC->Name = L"IDEnsayoC";
			this->IDEnsayoC->Width = 125;
			// 
			// IDPlantaC
			// 
			this->IDPlantaC->HeaderText = L"ID Planta";
			this->IDPlantaC->MinimumWidth = 6;
			this->IDPlantaC->Name = L"IDPlantaC";
			this->IDPlantaC->Width = 125;
			// 
			// FechaC
			// 
			this->FechaC->HeaderText = L"Fecha";
			this->FechaC->MinimumWidth = 6;
			this->FechaC->Name = L"FechaC";
			this->FechaC->Width = 125;
			// 
			// HoraC
			// 
			this->HoraC->HeaderText = L"Hora";
			this->HoraC->MinimumWidth = 6;
			this->HoraC->Name = L"HoraC";
			this->HoraC->Width = 125;
			// 
			// ObservacionesC
			// 
			this->ObservacionesC->HeaderText = L"Observaciones";
			this->ObservacionesC->MinimumWidth = 6;
			this->ObservacionesC->Name = L"ObservacionesC";
			this->ObservacionesC->Width = 125;
			// 
			// CondicionesC
			// 
			this->CondicionesC->HeaderText = L"Condiciones de Ensayo";
			this->CondicionesC->MinimumWidth = 6;
			this->CondicionesC->Name = L"CondicionesC";
			this->CondicionesC->Width = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(287, 235);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(249, 29);
			this->label1->TabIndex = 19;
			this->label1->Text = L"ENSAYOS REGISTRADOS";
			this->label1->Click += gcnew System::EventHandler(this, &OperarioForm::label1_Click_1);
			// 
			// Regresar
			// 
			this->Regresar->Location = System::Drawing::Point(19, 425);
			this->Regresar->Name = L"Regresar";
			this->Regresar->Size = System::Drawing::Size(99, 31);
			this->Regresar->TabIndex = 20;
			this->Regresar->Text = L"Regresar";
			this->Regresar->UseVisualStyleBackColor = true;
			// 
			// Finalizar
			// 
			this->Finalizar->Location = System::Drawing::Point(687, 425);
			this->Finalizar->Name = L"Finalizar";
			this->Finalizar->Size = System::Drawing::Size(99, 31);
			this->Finalizar->TabIndex = 21;
			this->Finalizar->Text = L"Finalizar";
			this->Finalizar->UseVisualStyleBackColor = true;
			// 
			// OperarioForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(857, 514);
			this->Controls->Add(this->tabControl1);
			this->IsMdiContainer = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"OperarioForm";
			this->Text = L"OperarioForm";
			this->Load += gcnew System::EventHandler(this, &OperarioForm::OperarioForm_Load);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPlantas))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Temperatura_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   //agregar plantas
private: System::Void AgregarPlanta_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int PlantaID = Int32::Parse(IDText->Text);
		String^ Humedad = HumedadText->Text->Trim();
		String^ Temperatura = TemperaturaText->Text->Trim();
		String^ Orden = OrdenText->Text->Trim();
		//validacion id planta
		if (PlantaID==0) {
			MessageBox::Show("Debe insertar un ID para la planta.");
			return;
		}
		//validacion humedad*temporal*
		if (Humedad->Equals("")) {
			MessageBox::Show("Debe insertar un valor para la Humedad.");
			return;
		}
		//validacion temperatura *temporal*
		if (Temperatura->Equals("")) {
			MessageBox::Show("Debe insertar un valor de Temperatura.");
			return;
		}
		//validacion orden
		if (Orden->Equals("")) {
			MessageBox::Show("Debe insertar un Orden para la planta.");
			return;
		}
		Planta^ planta = nullptr;
	
		planta = gcnew  Planta(PlantaID, Orden, Temperatura, Humedad);

		if (Controller::AgregarPlanta(planta) == 1) {
			ShowPlanta();
			MessageBox::Show("Se ha agregado la planta " + PlantaID);
		}
		else {
			MessageBox::Show("No se ha podido agregar la planta " + PlantaID);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No se ha podido agregar la planta por el siguiente motivo:\n" +
			ex->Message);
	}

}
	   void ShowPlanta() {
		   List<Planta^>^ plantas = Controller::ObtenerPlanta();
		   if (plantas != nullptr) {
			   dgvPlantas->Rows->Clear();
			   for (int i = 0; i < plantas->Count; i++) {
				   dgvPlantas->Rows->Add(gcnew array<String^>{
					   "" + plantas[i]->PlantaID,
						   plantas[i]->OrdenPlanta,
						   "" + plantas[i]->Temperatura,
						   plantas[i]->Humedad
				   }
				   );
			   }
		   }
	   }


	   //modificar planta
private: System::Void ModificaPlanta_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ PlantaID = IDText->Text->Trim();
	if (PlantaID->Equals("")) {
		MessageBox::Show("Debe seleccionar una planta(ID).");
		return;
	}
	try {
		int PlantaID = Int32::Parse(IDText->Text);
		String^ Humedad = HumedadText->Text->Trim();
		String^ Temperatura = TemperaturaText->Text->Trim();
		String^ Orden = OrdenText->Text->Trim();

		//validacion humedad*temporal*
		if (Humedad->Equals("")) {
			MessageBox::Show("Debe insertar un valor para la Humedad.");
			return;
		}
		//validacion temperatura *temporal*
		if (Temperatura->Equals("")) {
			MessageBox::Show("Debe insertar un valor de Temperatura.");
			return;
		}
		//validacion orden
		if (Orden->Equals("")) {
			MessageBox::Show("Debe insertar un Orden para la planta.");
			return;
		}

		Planta^ planta = nullptr;
		planta = gcnew  Planta(PlantaID, Orden, Temperatura, Humedad);

		if (Controller::ModificarPlanta(planta) == 1) {
			ShowPlanta();
			MessageBox::Show("Se ha modificado la planta " + PlantaID);
		}
		else {
			MessageBox::Show("No se ha podido modificar la planta " + PlantaID);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No se ha podido modificar la planta por el siguiente motivo:\n" +
			ex->Message);
	}
}

	   //Eliminar planta
private: System::Void EliminarPlanta_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ PlantaID = IDText->Text->Trim();
	if (PlantaID->Equals("")) {
		MessageBox::Show("Debe seleccionar una planta(ID).");
		return;
	}
	try {
		System::Windows::Forms::DialogResult dlgResult = MessageBox::Show("¿Desea eliminar la planta?",
			"Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (dlgResult == System::Windows::Forms::DialogResult::Yes) {
			Controller::EliminarPlanta(Convert::ToInt32(PlantaID));
			ShowPlanta();
			MessageBox::Show("Se ha eliminado la planta con Id = " + PlantaID + " de manera exitosa.");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No ha sido posible eliminar la planta por el siguiente motivo:\n" +
			ex->Message);
	}

}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dgvPlantas_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void OperarioForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->Owner != nullptr) {
		this->Owner->Show(); // Muestra el formulario LoginUsuario
	}
	this->Close(); // Cierra OperarioForm
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void HoraReg_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}

