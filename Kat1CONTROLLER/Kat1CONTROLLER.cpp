#include "pch.h"

#include "Kat1CONTROLLER.h"
//ensayo

int Kat1CONTROLLER::Controller::AgregarEnsayo(Ensayo^ Ensayo) {
	try {
		ensayos->Add(Ensayo);
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;
}

Ensayo^ Kat1CONTROLLER::Controller::ConsultaEnsayo(int EnsayoID) {
	for each (Ensayo ^ ensayo in ensayos) {
		if (ensayo->EnsayoID == EnsayoID) {
			return ensayo;
		}
	}
	return nullptr;
}

List<Ensayo^>^ Kat1CONTROLLER::Controller::ObtenerEnsayo() {
	return ensayos;
}
int Kat1CONTROLLER::Controller::EliminarEnsayo(int EnsayoID)
{
	for (int i = 0; i < ensayos->Count; i++)
	{
		if (ensayos[i]->EnsayoID == EnsayoID) {
			ensayos->RemoveAt(i);
			return 1;
		}
	}
	return 0;
}

int Kat1CONTROLLER::Controller::ModificarEnsayo(Ensayo^ Ensayo)
{
	for (int i = 0; i < ensayos->Count; i++)
	{
		if (ensayos[i]->EnsayoID == Ensayo->EnsayoID) {
			ensayos[i] = Ensayo;
			return 1;
		}
	}
	return 0;
}

//planta
int Kat1CONTROLLER::Controller::AgregarPlanta(Planta^ Planta) {
	plantas->Add(Planta);
	GuardarDatos();
	return 1;
}

Planta^ Kat1CONTROLLER::Controller::ConsultaPlanta(int PlantaID) {
	for each (Planta ^ planta in plantas) {
		if (planta->PlantaID == PlantaID) {
			return planta;
		}
	}
	return nullptr;
}

List<Planta^>^ Kat1CONTROLLER::Controller::ObtenerPlanta() {
	return plantas;
}
int Kat1CONTROLLER::Controller::EliminarPlanta(int PlantaID)
{
	for (int i = 0; i < plantas->Count; i++)
	{
		if (plantas[i]->PlantaID == PlantaID) {
			plantas->RemoveAt(i);
			GuardarDatos();
			return 1;
		}
	}
	return 0;
}

int Kat1CONTROLLER::Controller::ModificarPlanta(Planta^ Planta)
{
	for (int i = 0; i < plantas->Count; i++)
	{
		if (plantas[i]->PlantaID == Planta->PlantaID) {
			plantas[i] = Planta;
			GuardarDatos();
			return 1;
		}
	}
	return 0;
}

//robot

int Kat1CONTROLLER::Controller::AgregarRobot(RobotAgronomo^ Robot) {
	robots->Add(Robot);
	GuardarDatos();
	return 1;
}

RobotAgronomo^ Kat1CONTROLLER::Controller::ConsultaRobot(int RobotID) {
	for each (RobotAgronomo ^ robot in robots) {
		if (robot->RobotID == RobotID) {
			return robot;
		}
	}
	return nullptr;
}

List<RobotAgronomo^>^ Kat1CONTROLLER::Controller::ObtenerRobot() {
	return robots;
}
int Kat1CONTROLLER::Controller::EliminarRobot(int RobotID)
{
	for (int i = 0; i < robots->Count; i++)
	{
		if (robots[i]->RobotID == RobotID) {
			robots->RemoveAt(i);
			GuardarDatos();
			return 1;
		}
	}
	return 0;
}

int Kat1CONTROLLER::Controller::ModificarRobot(RobotAgronomo^ Robot)
{
	for (int i = 0; i < robots->Count; i++)
	{
		if (robots[i]->RobotID == Robot->RobotID) {
			robots[i] = Robot;
			GuardarDatos();
			return 1;
		}
	}
	return 0;
}
//usuarios
int Kat1CONTROLLER::Controller::AgregarUsuario(Usuario^ Usuario) {
	usuarios->Add(Usuario);
	GuardarDatos();
	return 1;
}

Usuario^ Kat1CONTROLLER::Controller::ConsultaUsuario(int UserID) {
	for each (Usuario^ usuario in usuarios) {
		if (usuario->UserID == UserID) {
			return usuario;
		}
	}
	return nullptr;
}

List<Usuario^>^ Kat1CONTROLLER::Controller::ObtenerUsuario() {
	return usuarios;
}
int Kat1CONTROLLER::Controller::EliminarUsuario(int UserID)
{
	for (int i = 0; i < usuarios->Count; i++)
	{
		if (usuarios[i]->UserID == UserID) {
			usuarios->RemoveAt(i);
			GuardarDatos();
			return 1;
		}
	}
	return 0;
}

int Kat1CONTROLLER::Controller::ModificarUsuario(Usuario^ Usuario)
{
	for (int i = 0; i < usuarios->Count; i++)
	{
		if (usuarios[i]->UserID == Usuario->UserID) {
			usuarios[i] = Usuario;
			GuardarDatos();
			return 1;
		}
	}
	return 0;
}

//Guardar todos los datos en archivos
void Kat1CONTROLLER::Controller::GuardarDatos() {
	// Guardar usuarios
	System::IO::StreamWriter^ archivoUsuarios = gcnew System::IO::StreamWriter("usuarios_db.txt");
	for (int i = 0; i < usuarios->Count; i++) {
		archivoUsuarios->WriteLine(usuarios[i]->UserID + "," + usuarios[i]->Status + "," +
			usuarios[i]->UserRole + "," + usuarios[i]->Email + "," +
			usuarios[i]->Username + "," + usuarios[i]->Password);
	}
	archivoUsuarios->Close();

	// Guardar robots
	System::IO::StreamWriter^ archivoRobots = gcnew System::IO::StreamWriter("robots_db.txt");
	for (int i = 0; i < robots->Count; i++) {
		archivoRobots->WriteLine(robots[i]->RobotID + "," + robots[i]->RobotName + "," + robots[i]->Status);
	}
	archivoRobots->Close();

	// Guardar plantas
	System::IO::StreamWriter^ archivoPlantas = gcnew System::IO::StreamWriter("plantas_db.txt");
	for (int i = 0; i < plantas->Count; i++) {
		archivoPlantas->WriteLine(plantas[i]->PlantaID + "," + plantas[i]->OrdenPlanta + "," +
			plantas[i]->Temperatura + "," + plantas[i]->Humedad);
	}
	archivoPlantas->Close();
}

//Cargar todos los datos desde archivos
void Kat1CONTROLLER::Controller::CargarDatos() {
	// Cargar usuarios
	if (System::IO::File::Exists("usuarios_db.txt")) {
		System::IO::StreamReader^ archivoUsuarios = gcnew System::IO::StreamReader("usuarios_db.txt");
		String^ linea = archivoUsuarios->ReadLine();

		while (linea != nullptr) {
			array<String^>^ datos = linea->Split(',');
			if (datos->Length == 6) {
				Usuario^ usuario = gcnew Usuario(Int32::Parse(datos[0]), datos[1], datos[2], datos[3], datos[4], datos[5]);
				usuarios->Add(usuario);
			}
			linea = archivoUsuarios->ReadLine();
		}
		archivoUsuarios->Close();
	}

	// Cargar robots
	if (System::IO::File::Exists("robots_db.txt")) {
		System::IO::StreamReader^ archivoRobots = gcnew System::IO::StreamReader("robots_db.txt");
		String^ linea = archivoRobots->ReadLine();

		while (linea != nullptr) {
			array<String^>^ datos = linea->Split(',');
			if (datos->Length == 3) {
				RobotAgronomo^ robot = gcnew RobotAgronomo(Int32::Parse(datos[0]), datos[1], datos[2]);
				robots->Add(robot);
			}
			linea = archivoRobots->ReadLine();
		}
		archivoRobots->Close();
	}

	// Cargar plantas
	if (System::IO::File::Exists("plantas_db.txt")) {
		System::IO::StreamReader^ archivoPlantas = gcnew System::IO::StreamReader("plantas_db.txt");
		String^ linea = archivoPlantas->ReadLine();

		while (linea != nullptr) {
			array<String^>^ datos = linea->Split(',');
			if (datos->Length == 4) {
				Planta^ planta = gcnew Planta(Int32::Parse(datos[0]), datos[1], datos[2], datos[3]);
				plantas->Add(planta);
			}
			linea = archivoPlantas->ReadLine();
		}
		archivoPlantas->Close();
	}
}