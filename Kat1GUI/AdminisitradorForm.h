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
	/// Resumen de AdminisitradorForm
	/// </summary>
	public ref class AdminisitradorForm : public System::Windows::Forms::Form
	{
	public:
		AdminisitradorForm(void)
		{
			InitializeComponent();
			ShowUsuario(); // Cargar usuarios al entrar a la pestaña
			ShowRobots();   
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~AdminisitradorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ UserID;
	private: System::Windows::Forms::Label^ Status;
	private: System::Windows::Forms::Label^ Password;


	private: System::Windows::Forms::Label^ Username;

	private: System::Windows::Forms::Label^ Email;

	private: System::Windows::Forms::Label^ UserRole;
	private: System::Windows::Forms::TextBox^ IDUsuarioText;


	private: System::Windows::Forms::TextBox^ PasswordText;
	private: System::Windows::Forms::TextBox^ UserNameText;
	private: System::Windows::Forms::TextBox^ EmailUserText;
	private: System::Windows::Forms::Button^ EliminarUsuarioBoton;
	private: System::Windows::Forms::Button^ ModificarUsuarioBoton;
	private: System::Windows::Forms::Button^ AgregarUsuarioBoton;










	private: System::Windows::Forms::DataGridView^ dgvUsuarios;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RolC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UsernameC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PasswordC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EmailC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EstadoC;
	private: System::Windows::Forms::Label^ RobotID;
	private: System::Windows::Forms::Label^ EstadoN;

	private: System::Windows::Forms::Label^ RobotName;
	private: System::Windows::Forms::TextBox^ NombreRobottext;



	private: System::Windows::Forms::TextBox^ IDRobottext;
	private: System::Windows::Forms::Button^ EliminarRobotBoton;


	private: System::Windows::Forms::Button^ ModificarRobotBoton;


	private: System::Windows::Forms::Button^ AgregarRobotBoton;


	private: System::Windows::Forms::DataGridView^ dgvRobots;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IDC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NombreRobot;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Estado;
	private: System::Windows::Forms::TextBox^ EstadoUsuariotext;
	private: System::Windows::Forms::TextBox^ RolUsuariotext;
	private: System::Windows::Forms::TextBox^ EstadoRobottext;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ labelTituloPlantas;
	private: System::Windows::Forms::Label^ label1;





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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->labelTituloPlantas = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->EstadoUsuariotext = (gcnew System::Windows::Forms::TextBox());
			this->RolUsuariotext = (gcnew System::Windows::Forms::TextBox());
			this->dgvUsuarios = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RolC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UsernameC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PasswordC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EmailC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EstadoC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EliminarUsuarioBoton = (gcnew System::Windows::Forms::Button());
			this->ModificarUsuarioBoton = (gcnew System::Windows::Forms::Button());
			this->AgregarUsuarioBoton = (gcnew System::Windows::Forms::Button());
			this->PasswordText = (gcnew System::Windows::Forms::TextBox());
			this->UserNameText = (gcnew System::Windows::Forms::TextBox());
			this->EmailUserText = (gcnew System::Windows::Forms::TextBox());
			this->IDUsuarioText = (gcnew System::Windows::Forms::TextBox());
			this->Password = (gcnew System::Windows::Forms::Label());
			this->Username = (gcnew System::Windows::Forms::Label());
			this->Email = (gcnew System::Windows::Forms::Label());
			this->UserRole = (gcnew System::Windows::Forms::Label());
			this->Status = (gcnew System::Windows::Forms::Label());
			this->UserID = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->EstadoRobottext = (gcnew System::Windows::Forms::TextBox());
			this->dgvRobots = (gcnew System::Windows::Forms::DataGridView());
			this->IDC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NombreRobot = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Estado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EliminarRobotBoton = (gcnew System::Windows::Forms::Button());
			this->ModificarRobotBoton = (gcnew System::Windows::Forms::Button());
			this->AgregarRobotBoton = (gcnew System::Windows::Forms::Button());
			this->NombreRobottext = (gcnew System::Windows::Forms::TextBox());
			this->IDRobottext = (gcnew System::Windows::Forms::TextBox());
			this->EstadoN = (gcnew System::Windows::Forms::Label());
			this->RobotName = (gcnew System::Windows::Forms::Label());
			this->RobotID = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUsuarios))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRobots))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(3, 12);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1087, 558);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->labelTituloPlantas);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->EstadoUsuariotext);
			this->tabPage1->Controls->Add(this->RolUsuariotext);
			this->tabPage1->Controls->Add(this->dgvUsuarios);
			this->tabPage1->Controls->Add(this->EliminarUsuarioBoton);
			this->tabPage1->Controls->Add(this->ModificarUsuarioBoton);
			this->tabPage1->Controls->Add(this->AgregarUsuarioBoton);
			this->tabPage1->Controls->Add(this->PasswordText);
			this->tabPage1->Controls->Add(this->UserNameText);
			this->tabPage1->Controls->Add(this->EmailUserText);
			this->tabPage1->Controls->Add(this->IDUsuarioText);
			this->tabPage1->Controls->Add(this->Password);
			this->tabPage1->Controls->Add(this->Username);
			this->tabPage1->Controls->Add(this->Email);
			this->tabPage1->Controls->Add(this->UserRole);
			this->tabPage1->Controls->Add(this->Status);
			this->tabPage1->Controls->Add(this->UserID);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(1079, 529);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Usuarios";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &AdminisitradorForm::tabPage1_Click);
			// 
			// labelTituloPlantas
			// 
			this->labelTituloPlantas->AutoSize = true;
			this->labelTituloPlantas->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold));
			this->labelTituloPlantas->Location = System::Drawing::Point(388, 216);
			this->labelTituloPlantas->Name = L"labelTituloPlantas";
			this->labelTituloPlantas->Size = System::Drawing::Size(263, 29);
			this->labelTituloPlantas->TabIndex = 22;
			this->labelTituloPlantas->Text = L"USUARIOS REGISTRADOS";
			this->labelTituloPlantas->Click += gcnew System::EventHandler(this, &AdminisitradorForm::labelTituloPlantas_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(935, 473);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 23);
			this->button4->TabIndex = 21;
			this->button4->Text = L"Finalizar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AdminisitradorForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(15, 473);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 23);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Regresar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdminisitradorForm::button3_Click);
			// 
			// EstadoUsuariotext
			// 
			this->EstadoUsuariotext->Location = System::Drawing::Point(530, 83);
			this->EstadoUsuariotext->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EstadoUsuariotext->Name = L"EstadoUsuariotext";
			this->EstadoUsuariotext->Size = System::Drawing::Size(100, 22);
			this->EstadoUsuariotext->TabIndex = 19;
			this->EstadoUsuariotext->TextChanged += gcnew System::EventHandler(this, &AdminisitradorForm::EstadoUsuariotext_TextChanged);
			// 
			// RolUsuariotext
			// 
			this->RolUsuariotext->Location = System::Drawing::Point(530, 140);
			this->RolUsuariotext->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->RolUsuariotext->Name = L"RolUsuariotext";
			this->RolUsuariotext->Size = System::Drawing::Size(100, 22);
			this->RolUsuariotext->TabIndex = 18;
			// 
			// dgvUsuarios
			// 
			this->dgvUsuarios->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvUsuarios->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->ID, this->RolC,
					this->UsernameC, this->PasswordC, this->EmailC, this->EstadoC
			});
			this->dgvUsuarios->Location = System::Drawing::Point(129, 247);
			this->dgvUsuarios->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvUsuarios->Name = L"dgvUsuarios";
			this->dgvUsuarios->RowHeadersWidth = 51;
			this->dgvUsuarios->RowTemplate->Height = 24;
			this->dgvUsuarios->Size = System::Drawing::Size(800, 222);
			this->dgvUsuarios->TabIndex = 17;
			this->dgvUsuarios->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminisitradorForm::dataGridView1_CellContentClick);
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->MinimumWidth = 6;
			this->ID->Name = L"ID";
			this->ID->Width = 125;
			// 
			// RolC
			// 
			this->RolC->HeaderText = L"Rol";
			this->RolC->MinimumWidth = 6;
			this->RolC->Name = L"RolC";
			this->RolC->Width = 125;
			// 
			// UsernameC
			// 
			this->UsernameC->HeaderText = L"Nombre";
			this->UsernameC->MinimumWidth = 6;
			this->UsernameC->Name = L"UsernameC";
			this->UsernameC->Width = 125;
			// 
			// PasswordC
			// 
			this->PasswordC->HeaderText = L"Contraseña";
			this->PasswordC->MinimumWidth = 6;
			this->PasswordC->Name = L"PasswordC";
			this->PasswordC->Width = 125;
			// 
			// EmailC
			// 
			this->EmailC->HeaderText = L"Email";
			this->EmailC->MinimumWidth = 6;
			this->EmailC->Name = L"EmailC";
			this->EmailC->Width = 125;
			// 
			// EstadoC
			// 
			this->EstadoC->HeaderText = L"Estado";
			this->EstadoC->MinimumWidth = 6;
			this->EstadoC->Name = L"EstadoC";
			this->EstadoC->Width = 125;
			// 
			// EliminarUsuarioBoton
			// 
			this->EliminarUsuarioBoton->Location = System::Drawing::Point(834, 143);
			this->EliminarUsuarioBoton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EliminarUsuarioBoton->Name = L"EliminarUsuarioBoton";
			this->EliminarUsuarioBoton->Size = System::Drawing::Size(95, 34);
			this->EliminarUsuarioBoton->TabIndex = 16;
			this->EliminarUsuarioBoton->Text = L"Eliminar";
			this->EliminarUsuarioBoton->UseVisualStyleBackColor = true;
			this->EliminarUsuarioBoton->Click += gcnew System::EventHandler(this, &AdminisitradorForm::EliminarUsuarioBoton_Click);
			// 
			// ModificarUsuarioBoton
			// 
			this->ModificarUsuarioBoton->Location = System::Drawing::Point(834, 89);
			this->ModificarUsuarioBoton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ModificarUsuarioBoton->Name = L"ModificarUsuarioBoton";
			this->ModificarUsuarioBoton->Size = System::Drawing::Size(95, 34);
			this->ModificarUsuarioBoton->TabIndex = 15;
			this->ModificarUsuarioBoton->Text = L"Modificar";
			this->ModificarUsuarioBoton->UseVisualStyleBackColor = true;
			this->ModificarUsuarioBoton->Click += gcnew System::EventHandler(this, &AdminisitradorForm::ModificarUsuarioBoton_Click);
			// 
			// AgregarUsuarioBoton
			// 
			this->AgregarUsuarioBoton->Location = System::Drawing::Point(834, 33);
			this->AgregarUsuarioBoton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AgregarUsuarioBoton->Name = L"AgregarUsuarioBoton";
			this->AgregarUsuarioBoton->Size = System::Drawing::Size(95, 34);
			this->AgregarUsuarioBoton->TabIndex = 14;
			this->AgregarUsuarioBoton->Text = L"Agregar";
			this->AgregarUsuarioBoton->UseVisualStyleBackColor = true;
			this->AgregarUsuarioBoton->Click += gcnew System::EventHandler(this, &AdminisitradorForm::button1_Click);
			// 
			// PasswordText
			// 
			this->PasswordText->Location = System::Drawing::Point(151, 191);
			this->PasswordText->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PasswordText->Name = L"PasswordText";
			this->PasswordText->Size = System::Drawing::Size(100, 22);
			this->PasswordText->TabIndex = 11;
			// 
			// UserNameText
			// 
			this->UserNameText->Location = System::Drawing::Point(151, 133);
			this->UserNameText->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->UserNameText->Name = L"UserNameText";
			this->UserNameText->Size = System::Drawing::Size(100, 22);
			this->UserNameText->TabIndex = 10;
			// 
			// EmailUserText
			// 
			this->EmailUserText->Location = System::Drawing::Point(151, 83);
			this->EmailUserText->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EmailUserText->Name = L"EmailUserText";
			this->EmailUserText->Size = System::Drawing::Size(100, 22);
			this->EmailUserText->TabIndex = 9;
			// 
			// IDUsuarioText
			// 
			this->IDUsuarioText->Location = System::Drawing::Point(151, 30);
			this->IDUsuarioText->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->IDUsuarioText->Name = L"IDUsuarioText";
			this->IDUsuarioText->Size = System::Drawing::Size(100, 22);
			this->IDUsuarioText->TabIndex = 6;
			this->IDUsuarioText->TextChanged += gcnew System::EventHandler(this, &AdminisitradorForm::IDText_TextChanged);
			// 
			// Password
			// 
			this->Password->AutoSize = true;
			this->Password->Location = System::Drawing::Point(63, 191);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(79, 16);
			this->Password->TabIndex = 5;
			this->Password->Text = L"Contraseña:";
			// 
			// Username
			// 
			this->Username->AutoSize = true;
			this->Username->Location = System::Drawing::Point(63, 140);
			this->Username->Name = L"Username";
			this->Username->Size = System::Drawing::Size(59, 16);
			this->Username->TabIndex = 4;
			this->Username->Text = L"Nombre:";
			// 
			// Email
			// 
			this->Email->AutoSize = true;
			this->Email->Location = System::Drawing::Point(63, 89);
			this->Email->Name = L"Email";
			this->Email->Size = System::Drawing::Size(44, 16);
			this->Email->TabIndex = 3;
			this->Email->Text = L"Email:";
			// 
			// UserRole
			// 
			this->UserRole->AutoSize = true;
			this->UserRole->Location = System::Drawing::Point(435, 139);
			this->UserRole->Name = L"UserRole";
			this->UserRole->Size = System::Drawing::Size(31, 16);
			this->UserRole->TabIndex = 2;
			this->UserRole->Text = L"Rol:";
			// 
			// Status
			// 
			this->Status->AutoSize = true;
			this->Status->Location = System::Drawing::Point(435, 86);
			this->Status->Name = L"Status";
			this->Status->Size = System::Drawing::Size(53, 16);
			this->Status->TabIndex = 1;
			this->Status->Text = L"Estado:";
			this->Status->Click += gcnew System::EventHandler(this, &AdminisitradorForm::label1_Click_1);
			// 
			// UserID
			// 
			this->UserID->AutoSize = true;
			this->UserID->Location = System::Drawing::Point(63, 33);
			this->UserID->Name = L"UserID";
			this->UserID->Size = System::Drawing::Size(23, 16);
			this->UserID->TabIndex = 0;
			this->UserID->Text = L"ID:";
			this->UserID->Click += gcnew System::EventHandler(this, &AdminisitradorForm::label1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->EstadoRobottext);
			this->tabPage2->Controls->Add(this->dgvRobots);
			this->tabPage2->Controls->Add(this->EliminarRobotBoton);
			this->tabPage2->Controls->Add(this->ModificarRobotBoton);
			this->tabPage2->Controls->Add(this->AgregarRobotBoton);
			this->tabPage2->Controls->Add(this->NombreRobottext);
			this->tabPage2->Controls->Add(this->IDRobottext);
			this->tabPage2->Controls->Add(this->EstadoN);
			this->tabPage2->Controls->Add(this->RobotName);
			this->tabPage2->Controls->Add(this->RobotID);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Size = System::Drawing::Size(1079, 529);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Robots";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &AdminisitradorForm::tabPage2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(458, 223);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(240, 29);
			this->label1->TabIndex = 23;
			this->label1->Text = L"ROBOTS REGISTRADOS";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(956, 469);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Finalizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminisitradorForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 469);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 23);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminisitradorForm::button1_Click_2);
			// 
			// EstadoRobottext
			// 
			this->EstadoRobottext->Location = System::Drawing::Point(267, 202);
			this->EstadoRobottext->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EstadoRobottext->Name = L"EstadoRobottext";
			this->EstadoRobottext->Size = System::Drawing::Size(100, 22);
			this->EstadoRobottext->TabIndex = 10;
			// 
			// dgvRobots
			// 
			this->dgvRobots->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvRobots->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->IDC, this->NombreRobot,
					this->Estado
			});
			this->dgvRobots->Location = System::Drawing::Point(364, 254);
			this->dgvRobots->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvRobots->Name = L"dgvRobots";
			this->dgvRobots->RowHeadersWidth = 51;
			this->dgvRobots->RowTemplate->Height = 24;
			this->dgvRobots->Size = System::Drawing::Size(422, 162);
			this->dgvRobots->TabIndex = 9;
			// 
			// IDC
			// 
			this->IDC->HeaderText = L"ID";
			this->IDC->MinimumWidth = 6;
			this->IDC->Name = L"IDC";
			this->IDC->Width = 125;
			// 
			// NombreRobot
			// 
			this->NombreRobot->HeaderText = L"Nombre";
			this->NombreRobot->MinimumWidth = 6;
			this->NombreRobot->Name = L"NombreRobot";
			this->NombreRobot->Width = 125;
			// 
			// Estado
			// 
			this->Estado->HeaderText = L"Estado";
			this->Estado->MinimumWidth = 6;
			this->Estado->Name = L"Estado";
			this->Estado->Width = 125;
			// 
			// EliminarRobotBoton
			// 
			this->EliminarRobotBoton->Location = System::Drawing::Point(792, 185);
			this->EliminarRobotBoton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EliminarRobotBoton->Name = L"EliminarRobotBoton";
			this->EliminarRobotBoton->Size = System::Drawing::Size(85, 33);
			this->EliminarRobotBoton->TabIndex = 8;
			this->EliminarRobotBoton->Text = L"Eliminar";
			this->EliminarRobotBoton->UseVisualStyleBackColor = true;
			this->EliminarRobotBoton->Click += gcnew System::EventHandler(this, &AdminisitradorForm::EliminarRobotBoton_Click);
			// 
			// ModificarRobotBoton
			// 
			this->ModificarRobotBoton->Location = System::Drawing::Point(792, 119);
			this->ModificarRobotBoton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ModificarRobotBoton->Name = L"ModificarRobotBoton";
			this->ModificarRobotBoton->Size = System::Drawing::Size(85, 33);
			this->ModificarRobotBoton->TabIndex = 7;
			this->ModificarRobotBoton->Text = L"Modificar";
			this->ModificarRobotBoton->UseVisualStyleBackColor = true;
			this->ModificarRobotBoton->Click += gcnew System::EventHandler(this, &AdminisitradorForm::ModificarRobotBoton_Click);
			// 
			// AgregarRobotBoton
			// 
			this->AgregarRobotBoton->Location = System::Drawing::Point(792, 57);
			this->AgregarRobotBoton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AgregarRobotBoton->Name = L"AgregarRobotBoton";
			this->AgregarRobotBoton->Size = System::Drawing::Size(85, 33);
			this->AgregarRobotBoton->TabIndex = 6;
			this->AgregarRobotBoton->Text = L"Agregar";
			this->AgregarRobotBoton->UseVisualStyleBackColor = true;
			this->AgregarRobotBoton->Click += gcnew System::EventHandler(this, &AdminisitradorForm::button1_Click_1);
			// 
			// NombreRobottext
			// 
			this->NombreRobottext->Location = System::Drawing::Point(267, 130);
			this->NombreRobottext->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->NombreRobottext->Name = L"NombreRobottext";
			this->NombreRobottext->Size = System::Drawing::Size(100, 22);
			this->NombreRobottext->TabIndex = 4;
			// 
			// IDRobottext
			// 
			this->IDRobottext->Location = System::Drawing::Point(267, 54);
			this->IDRobottext->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->IDRobottext->Name = L"IDRobottext";
			this->IDRobottext->Size = System::Drawing::Size(100, 22);
			this->IDRobottext->TabIndex = 3;
			// 
			// EstadoN
			// 
			this->EstadoN->AutoSize = true;
			this->EstadoN->Location = System::Drawing::Point(168, 202);
			this->EstadoN->Name = L"EstadoN";
			this->EstadoN->Size = System::Drawing::Size(50, 16);
			this->EstadoN->TabIndex = 2;
			this->EstadoN->Text = L"Estado";
			this->EstadoN->Click += gcnew System::EventHandler(this, &AdminisitradorForm::label1_Click_3);
			// 
			// RobotName
			// 
			this->RobotName->AutoSize = true;
			this->RobotName->Location = System::Drawing::Point(168, 130);
			this->RobotName->Name = L"RobotName";
			this->RobotName->Size = System::Drawing::Size(59, 16);
			this->RobotName->TabIndex = 1;
			this->RobotName->Text = L"Nombre:";
			// 
			// RobotID
			// 
			this->RobotID->AutoSize = true;
			this->RobotID->Location = System::Drawing::Point(168, 57);
			this->RobotID->Name = L"RobotID";
			this->RobotID->Size = System::Drawing::Size(23, 16);
			this->RobotID->TabIndex = 0;
			this->RobotID->Text = L"ID:";
			this->RobotID->Click += gcnew System::EventHandler(this, &AdminisitradorForm::label1_Click_2);
			// 
			// AdminisitradorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1104, 544);
			this->Controls->Add(this->tabControl1);
			this->IsMdiContainer = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"AdminisitradorForm";
			this->Text = L"AdminisitradorForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUsuarios))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRobots))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion




	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void StatusText_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   //Agregar Usuario

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int UserId = Int32::Parse(IDUsuarioText->Text);
		String^ Username = UserNameText->Text->Trim();
		String^ Password = PasswordText->Text->Trim();
		String^ Email = EmailUserText->Text->Trim();
		String^ Estado = EstadoUsuariotext->Text->Trim();
		String^ Rol = RolUsuariotext->Text->Trim();
		//validacion de ID
		if (UserId== 0) {
			MessageBox::Show("Debe insertar un ID para el Usuario");
			return;
		}
		//validacion de usuario
		if (Username->Length == 0) {
			MessageBox::Show("El nombre del Usuario no debe estar vacío");
			return;
		}
		//validacion de contraseña
		if (Password->Length == 0) {
			MessageBox::Show("Introduzca una contraseña");
			return;
		}
		//validacion de correo
		if (Email->Length == 0) {
			MessageBox::Show("Inserte un Email válido");
			return;
		}
		//validacion estado *temporal*
		if (Estado->Length == 0) {
			MessageBox::Show("El estado del Usuario no debe estar vacío");
			return;
		}
		//validacion rol
		if (Rol->Length == 0) {
			MessageBox::Show("Debe insertar un rol para el Usuario");
			return;
		}

		Usuario^ usuario = nullptr;
		usuario = gcnew  Usuario(UserId, Estado, Rol, Email, Username, Password);

		if (Controller::AgregarUsuario(usuario) == 1) {
			ShowUsuario();
			MessageBox::Show("Se ha agregado el Usuario" + UserId + " - " + Username);
		}
		else {
			MessageBox::Show("No se ha podido agregar el Usuario " + UserId);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No se ha podido agregar el usuario por el siguiente motivo:\n" +
			ex->Message);
	}
}
private: System::Void IDText_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
}

	   //Agregar Usuario

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int UserId = Int32::Parse(IDUsuarioText->Text);
		String^ Username = UserNameText->Text->Trim();
		String^ Password = PasswordText->Text->Trim();
		String^ Email = EmailUserText->Text->Trim();
		String^ Estado = EstadoUsuariotext->Text->Trim();
		String^ Rol = RolUsuariotext->Text->Trim();
		//validacion de ID
		if (UserId == 0) {
			MessageBox::Show("Debe insertar un ID para el Usuario");
			return;
		}
		//validacion de usuario
		if (Username->Length == 0) {
			MessageBox::Show("El nombre del Usuario no debe estar vacío");
			return;
		}
		//validacion de contraseña
		if (Password->Length == 0) {
			MessageBox::Show("Introduzca una contraseña");
			return;
		}
		//validacion de correo
		if (Email->Length == 0) {
			MessageBox::Show("Inserte un Email válido");
			return;
		}
		//validacion estado *temporal*
		if (Estado->Length == 0) {
			MessageBox::Show("El estado del Usuario no debe estar vacío");
			return;
		}
		//validacion rol
		if (Rol->Length == 0) {
			MessageBox::Show("Debe insertar un rol para el Usuario");
			return;
		}

		Usuario^ usuario = nullptr;
		usuario = gcnew  Usuario(UserId, Estado, Rol, Email, Username, Password);

		if (Controller::AgregarUsuario(usuario) == 1) {
			ShowUsuario();
			MessageBox::Show("Se ha agregado el Usuario" + UserId + " - " + Username);
		}
		else {
			MessageBox::Show("No se ha podido agregar el Usuario " + UserId);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No se ha podido agregar el usuario por el siguiente motivo:\n" +
			ex->Message);
	}
}
private: System::Void IDText_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
}


	   //Agregar Robot
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	try {
		int RobotID = Int32::Parse(IDRobottext->Text);
		String^ RobotName = NombreRobottext->Text->Trim();
		String^ StatusRobot = EstadoRobottext->Text->Trim();
		//validacion ID robot
		if (RobotID == 0) {
			MessageBox::Show("Debe insertar un ID para el Robot");
			return;
		}
		//validacion nombre robot
		if (RobotName->Length == 0) {
			MessageBox::Show("El nombre del Robot no debe estar vacío");
			return;
		}
		//validacion Status robot *temporal*
		if (StatusRobot->Length == 0) {
			MessageBox::Show("El estado del Robot no puede estar vacío");
			return;
		}

		RobotAgronomo^ robot = nullptr;
		robot = gcnew  RobotAgronomo(RobotID, RobotName, StatusRobot);

		if (Controller::AgregarRobot(robot) == 1) {
			ShowRobots();
			MessageBox::Show("Se ha agregado el Robot " + RobotID + " - " + RobotName);
		}
		else {
			MessageBox::Show("No se ha podido agregar el Robot " + RobotID);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No se ha podido agregar el Robot por el siguiente motivo:\n" +
			ex->Message);
	}
}
private: System::Void label1_Click_3(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EstadoUsuariotext_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

	   //Eliminar Usuario
private: System::Void EliminarUsuarioBoton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ UserID = IDUsuarioText->Text->Trim();
	if (UserID->Equals("")) {
		MessageBox::Show("Debe seleccionar un Usuario(ID).");
		return;
	}
	try {
		System::Windows::Forms::DialogResult dlgResult = MessageBox::Show("¿Desea eliminar el Usuario?",
			"Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (dlgResult == System::Windows::Forms::DialogResult::Yes) {
			Controller::EliminarUsuario(Convert::ToInt32(UserID));
			ShowUsuario();
			MessageBox::Show("Se ha eliminado el Usuario con Id = " + UserID + " de manera exitosa.");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No ha sido posible eliminar el usuario por el siguiente motivo:\n" +
			ex->Message);
	}
}



	   //Modificar Usuario
private: System::Void ModificarUsuarioBoton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ UserID = IDUsuarioText->Text->Trim();
	if (UserID->Equals("")) {
		MessageBox::Show("Debe seleccionar un Usuario(ID).");
		return;
	}
	try {
		int UserID = Int32::Parse(IDUsuarioText->Text);
		String^ Username = UserNameText->Text->Trim();
		String^ Password = PasswordText->Text->Trim();
		String^ Email = EmailUserText->Text->Trim();
		String^ Estado = EstadoUsuariotext->Text->Trim();
		String^ Rol = RolUsuariotext->Text->Trim();

		//validacion de usuario
		if (Username->Length == 0) {
			MessageBox::Show("El nombre del Usuario no debe estar vacío");
			return;
		}
		//validacion de contraseña
		if (Password->Length == 0) {
			MessageBox::Show("Introduzca una contraseña");
			return;
		}
		//validacion de correo
		if (Email->Length == 0) {
			MessageBox::Show("Inserte un Email válido");
			return;
		}
		//validacion estado *temporal*
		if (Estado->Length == 0) {
			MessageBox::Show("El estado del Usuario no debe estar vacío");
			return;
		}
		//validacion rol
		if (Rol->Length == 0) {
			MessageBox::Show("Debe insertar un rol para el Usuario");
			return;
		}


		Usuario^ usuario = nullptr;
		usuario = gcnew  Usuario(UserID, Estado, Rol, Email, Username, Password);

		if (Controller::ModificarUsuario(usuario) == 1) {
			ShowUsuario();
			MessageBox::Show("Se ha modificado el usuario " + UserID + "-" + Username);
		}
		else {
			MessageBox::Show("No se ha podido modificar el usuario " + UserID);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No se ha podido modificar el usuario por el siguiente motivo:\n" +
			ex->Message);
	}

}

	   //Modificar Robot
private: System::Void ModificarRobotBoton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ RobotID = IDRobottext->Text->Trim();
	if (RobotID->Equals("")) {
		MessageBox::Show("Debe seleccionar un Robot(ID).");
		return;
	}
	try {
		int RobotID = Int32::Parse(IDRobottext->Text);
		String^ RobotNombre = NombreRobottext->Text->Trim();
		//Validacion nombre robot
		if (RobotNombre->Length == 0) {
			MessageBox::Show("El nombre del Robot no debe estar vacío");
			return;
		}
		String^ EstadoRobot = EstadoRobottext->Text->Trim();
		//validacion del estado *temporal*
		if (EstadoRobot->Length == 0) {
			MessageBox::Show("El estado del Robot no debe estar vacío");
			return;
		}
		RobotAgronomo^ robot = nullptr;
		robot = gcnew  RobotAgronomo(RobotID, RobotNombre, EstadoRobot);

		if (Controller::ModificarRobot(robot) == 1) {
			ShowRobots();
			MessageBox::Show("Se ha modificado el robot " + RobotID + "-" + RobotNombre);
		}
		else {
			MessageBox::Show("No se ha podido modificar el robot " + RobotID);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No se ha podido modificar el robot por el siguiente motivo:\n" +
			ex->Message);
	}
}

	   //Eliminar Robot
private: System::Void EliminarRobotBoton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ RobotID = IDRobottext->Text->Trim();
	if (RobotID->Equals("")) {
		MessageBox::Show("Debe seleccionar un Robot(ID).");
		return;
	}
	try {
		System::Windows::Forms::DialogResult dlgResult = MessageBox::Show("¿Desea eliminar el Robot?",
			"Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (dlgResult == System::Windows::Forms::DialogResult::Yes) {
			Controller::EliminarRobot(Convert::ToInt32(RobotID));
			ShowRobots();
			MessageBox::Show("Se ha eliminado el Robot con Id = " + RobotID + " de manera exitosa.");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No ha sido posible eliminar el Robot por el siguiente motivo:\n" +
			ex->Message);
	}
}


	   //Mostrar Robots
	   void ShowRobots() {
		   List<RobotAgronomo^>^ robots = Controller::ObtenerRobot();
		   if (robots != nullptr) {
			   dgvRobots->Rows->Clear();
			   for (int i = 0; i < robots->Count; i++) {
				   dgvRobots->Rows->Add(gcnew array<String^>{
					   "" + robots[i]->RobotID,
						   robots[i]->RobotName,
						   "" + robots[i]->Status
				   }
				   );
			   }
		   }
	   }
	   //Mostrar Usuario
	   void ShowUsuario() {
		   List<Usuario^>^ usuarios= Controller::ObtenerUsuario();
		   if (usuarios != nullptr) {
			   dgvUsuarios->Rows->Clear();
			   for (int i = 0; i < usuarios->Count; i++) {
				   dgvUsuarios->Rows->Add(gcnew array<String^>{
					   "" + usuarios[i]->UserID,
						   usuarios[i]->UserRole,
						   "" + usuarios[i]->Username,
						   usuarios[i]->Password,
						   usuarios[i]->Email,
						   "" + usuarios[i]->Status
				   }
				   );
			   }
		   }
	   }
private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	if (this->Owner != nullptr) {
		this->Owner->Show(); // Muestra el formulario LoginUsuario
	}
	this->Close(); // Cierra AdministradorForm
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->Owner != nullptr) {
		this->Owner->Show(); // Muestra el formulario LoginUsuario
	}
	this->Close(); // Cierra AdministradorForm
}
private: System::Void labelTituloPlantas_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
