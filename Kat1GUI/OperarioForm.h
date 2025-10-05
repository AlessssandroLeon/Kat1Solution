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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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

	protected:























	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
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
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPlantas))->BeginInit();
			this->tabControl1->SuspendLayout();
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
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabPage1->Size = System::Drawing::Size(600, 373);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Plantas";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &OperarioForm::tabPage1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(500, 352);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 19);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Finalizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &OperarioForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 352);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(74, 19);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OperarioForm::button1_Click);
			// 
			// labelTituloPlantas
			// 
			this->labelTituloPlantas->AutoSize = true;
			this->labelTituloPlantas->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold));
			this->labelTituloPlantas->Location = System::Drawing::Point(198, 195);
			this->labelTituloPlantas->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelTituloPlantas->Name = L"labelTituloPlantas";
			this->labelTituloPlantas->Size = System::Drawing::Size(197, 23);
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
			this->dgvPlantas->Location = System::Drawing::Point(90, 220);
			this->dgvPlantas->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dgvPlantas->Name = L"dgvPlantas";
			this->dgvPlantas->RowHeadersWidth = 51;
			this->dgvPlantas->RowTemplate->Height = 24;
			this->dgvPlantas->Size = System::Drawing::Size(411, 122);
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
			this->EliminarPlanta->Location = System::Drawing::Point(374, 159);
			this->EliminarPlanta->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->EliminarPlanta->Name = L"EliminarPlanta";
			this->EliminarPlanta->Size = System::Drawing::Size(64, 26);
			this->EliminarPlanta->TabIndex = 10;
			this->EliminarPlanta->Text = L"Eliminar";
			this->EliminarPlanta->UseVisualStyleBackColor = true;
			this->EliminarPlanta->Click += gcnew System::EventHandler(this, &OperarioForm::EliminarPlanta_Click);
			// 
			// ModificaPlanta
			// 
			this->ModificaPlanta->Location = System::Drawing::Point(374, 99);
			this->ModificaPlanta->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ModificaPlanta->Name = L"ModificaPlanta";
			this->ModificaPlanta->Size = System::Drawing::Size(64, 25);
			this->ModificaPlanta->TabIndex = 9;
			this->ModificaPlanta->Text = L"Modificar";
			this->ModificaPlanta->UseVisualStyleBackColor = true;
			this->ModificaPlanta->Click += gcnew System::EventHandler(this, &OperarioForm::ModificaPlanta_Click);
			// 
			// AgregarPlanta
			// 
			this->AgregarPlanta->Location = System::Drawing::Point(374, 39);
			this->AgregarPlanta->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->AgregarPlanta->Name = L"AgregarPlanta";
			this->AgregarPlanta->Size = System::Drawing::Size(64, 26);
			this->AgregarPlanta->TabIndex = 8;
			this->AgregarPlanta->Text = L"Agregar";
			this->AgregarPlanta->UseVisualStyleBackColor = true;
			this->AgregarPlanta->Click += gcnew System::EventHandler(this, &OperarioForm::AgregarPlanta_Click);
			// 
			// HumedadText
			// 
			this->HumedadText->Location = System::Drawing::Point(118, 185);
			this->HumedadText->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->HumedadText->Name = L"HumedadText";
			this->HumedadText->Size = System::Drawing::Size(76, 20);
			this->HumedadText->TabIndex = 7;
			// 
			// TemperaturaText
			// 
			this->TemperaturaText->Location = System::Drawing::Point(118, 138);
			this->TemperaturaText->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TemperaturaText->Name = L"TemperaturaText";
			this->TemperaturaText->Size = System::Drawing::Size(76, 20);
			this->TemperaturaText->TabIndex = 6;
			// 
			// OrdenText
			// 
			this->OrdenText->Location = System::Drawing::Point(118, 89);
			this->OrdenText->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->OrdenText->Name = L"OrdenText";
			this->OrdenText->Size = System::Drawing::Size(76, 20);
			this->OrdenText->TabIndex = 5;
			// 
			// IDText
			// 
			this->IDText->Location = System::Drawing::Point(118, 34);
			this->IDText->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->IDText->Name = L"IDText";
			this->IDText->Size = System::Drawing::Size(76, 20);
			this->IDText->TabIndex = 4;
			this->IDText->TextChanged += gcnew System::EventHandler(this, &OperarioForm::textBox1_TextChanged);
			// 
			// Humedad
			// 
			this->Humedad->AutoSize = true;
			this->Humedad->Location = System::Drawing::Point(36, 190);
			this->Humedad->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Humedad->Name = L"Humedad";
			this->Humedad->Size = System::Drawing::Size(56, 13);
			this->Humedad->TabIndex = 3;
			this->Humedad->Text = L"Humedad:";
			// 
			// Temperatura
			// 
			this->Temperatura->AutoSize = true;
			this->Temperatura->Location = System::Drawing::Point(36, 138);
			this->Temperatura->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Temperatura->Name = L"Temperatura";
			this->Temperatura->Size = System::Drawing::Size(70, 13);
			this->Temperatura->TabIndex = 2;
			this->Temperatura->Text = L"Temperatura:";
			this->Temperatura->Click += gcnew System::EventHandler(this, &OperarioForm::Temperatura_Click);
			// 
			// OrdenPlanta
			// 
			this->OrdenPlanta->AutoSize = true;
			this->OrdenPlanta->Location = System::Drawing::Point(36, 92);
			this->OrdenPlanta->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->OrdenPlanta->Name = L"OrdenPlanta";
			this->OrdenPlanta->Size = System::Drawing::Size(39, 13);
			this->OrdenPlanta->TabIndex = 1;
			this->OrdenPlanta->Text = L"Orden:";
			// 
			// PlantaID
			// 
			this->PlantaID->AutoSize = true;
			this->PlantaID->Location = System::Drawing::Point(36, 39);
			this->PlantaID->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->PlantaID->Name = L"PlantaID";
			this->PlantaID->Size = System::Drawing::Size(21, 13);
			this->PlantaID->TabIndex = 0;
			this->PlantaID->Text = L"ID:";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(19, 10);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(608, 399);
			this->tabControl1->TabIndex = 0;
			// 
			// OperarioForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(643, 418);
			this->Controls->Add(this->tabControl1);
			this->IsMdiContainer = true;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"OperarioForm";
			this->Text = L"OperarioForm";
			this->Load += gcnew System::EventHandler(this, &OperarioForm::OperarioForm_Load);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPlantas))->EndInit();
			this->tabControl1->ResumeLayout(false);
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
		MessageBox::Show("Debe seleccionar una planta.");
		return;
	}
	try {
		int PlantaID = Int32::Parse(IDText->Text);
		String^ Humedad = HumedadText->Text->Trim();
		String^ Temperatura = TemperaturaText->Text->Trim();
		String^ Orden = OrdenText->Text->Trim();

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
		MessageBox::Show("Debe seleccionar una planta.");
		return;
	}
	try {
		System::Windows::Forms::DialogResult dlgResult = MessageBox::Show("�Desea eliminar la planta?",
			"Confirmaci�n", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

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
};
}
