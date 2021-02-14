#include "Empleado.cpp"
#include <iostream>

using namespace std;
class Datos : Empleado{
	
	public:
	 
		Datos(){
		}
		Datos(int cod, string pue, string sue) : Empleado(sue,pue,cod){
		}
		
	void setCodEmpleado(int cod){codigo = cod;}
	void setPuesto(string pue){puesto = pue;}
	void setSueldo(string sue){sueldo = sue;}


	int getoCodEmpleado(){return codigo;}
	string getPuesto(){return puesto;}
	string getSueldo(){return sueldo;}
	
	void mostrar(){

		cout<<"__________________"<<endl;
		cout<<"Codigo de empleado: "<<codigo<<"\n puesto: "<<puesto<<"\n Sueldo: "<<sueldo<<endl;
		}
};

