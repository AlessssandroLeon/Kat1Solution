#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace Kat1MODEL;

namespace Kat1CONTROLLER {

	public ref class Controller
		{
		private:
			//LISTA PLANTAS
			static List<Planta^>^ plantas = gcnew List<Planta^>();
			//LISTA ROBOTS
			static List<RobotAgronomo^>^ robots = gcnew List<RobotAgronomo^>();
			//LISTA USUARIOS
			static List<Usuario^>^ usuarios = gcnew List<Usuario^>();
		public:
			//plantas
			static int AgregarPlanta(Planta^ Planta);
			static Planta^ ConsultaPlanta(int PlantaID);
			static List<Planta^>^ ObtenerPlanta();
			static int EliminarPlanta(int PlantaID);
			static int ModificarPlanta(Planta^ Planta);

			//robots 
			static int AgregarRobot(RobotAgronomo^ Robot);
			static RobotAgronomo^ ConsultaRobot(int RobotID);
			static List<RobotAgronomo^>^ ObtenerRobot();
			static int EliminarRobot(int RobotID);
			static int ModificarRobot(RobotAgronomo^ RobotID);
			//usuarios
			static int AgregarUsuario(Usuario^ Usuario);
			static Usuario^ ConsultaUsuario(int UserID);
			static List<Usuario^>^ ObtenerUsuario();
			static int EliminarUsuario(int UserID);
			static int ModificarUsuario(Usuario^ Usuario);
	};

}


