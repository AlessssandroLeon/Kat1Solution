#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace Kat1MODEL {
    ref class Usuario;
    ref class RobotAgronomo;
    ref class Planta;
    ref class Sensor;

    //Usuario y subclases
    public ref class Usuario {
    public:
        int UserID;
        String^ Status;
        String^ UserRole;
        String^ Email;
        String^ Username;
        String^ Password;
        Usuario() {}
        Usuario(int UserID, String^ Status, String^ UserRole, String^ Email, String^ Username, String^ Password) {
            this->UserID = UserID;
            this->UserRole = UserRole;
            this->Email = Email;
            this->Username = Username;
            this->Password = Password;
        }
    };

    public ref class Operador : public Usuario {
    private:

    public:
        Operador(int UserID, String^ Status, String^ UserRole, String^ Email, String^ Username, String^ Password)
            : Usuario(UserID,Status,UserRole,Email,Username,Password){
        }
    };

    public ref class Administrador : public Usuario {
    private:

    public:
        Administrador(int UserID, String^ Status, String^ UserRole, String^ Email, String^ Username, String^ Password)
            : Usuario(UserID, Status, UserRole, Email, Username, Password) {
        }
    };

    //Planta
    public ref class Planta {
    public:
        int PlantaID;
        String^ OrdenPlanta;
        String^ Temperatura;
        String^ Humedad;
        Planta() {}
        Planta(int PlantaID, String^ OrdenPlanta, String^ Temperatura, String^ Humedad) {
            this->PlantaID = PlantaID;
            this->OrdenPlanta = OrdenPlanta;
            this->Temperatura = Temperatura;
            this->Humedad = Humedad;
        }
    };

    //Sensor y subsclases
    public ref class Sensor {
    public:
        int SensorID;
        String^ Status;
        Sensor() {}
        Sensor(int SensorID, String^ Status) {
            this->SensorID = SensorID;
            this->Status = Status;
        }
    };

    public ref class SensorHumedad : public Sensor {
    private:
        double Humedad;
    public:
        SensorHumedad(int SensorID, String^ Status, double Hm)
            : Sensor(SensorID, Status), Humedad(Hm) {
        }
    };

    public ref class SensorTemperatura : public Sensor {
    private:
        double GradosRegistrados;
        String^ UnidadMedida;
    public:
        SensorTemperatura(int SensorID, String^ Status, double Gr, String^ UnidadMedida)
            : Sensor(SensorID, Status), GradosRegistrados(Gr), UnidadMedida(nullptr) {
        }
    };

    //RobotAgronomo
    public ref class RobotAgronomo {
    public:
        int RobotID;
        String^ RobotName;
        String^ Status;
        RobotAgronomo() {}
        RobotAgronomo(int RobotID, String^ RobotName, String^ Status) {
            this->RobotID = RobotID;
            this->RobotName = RobotName;
            this->Status = Status;
        }
    };
}