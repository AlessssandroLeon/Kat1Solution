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
	try {
		plantas->Add(Planta);
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;
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
			return 1;
		}
	}
	return 0;
}

//robot

int Kat1CONTROLLER::Controller::AgregarRobot(RobotAgronomo^ Robot) {
	try {
		robots->Add(Robot);
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;
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
			return 1;
		}
	}
	return 0;
}
//usuarios
int Kat1CONTROLLER::Controller::AgregarUsuario(Usuario^ Usuario) {
	try {
		usuarios->Add(Usuario);
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;
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
			return 1;
		}
	}
	return 0;
}