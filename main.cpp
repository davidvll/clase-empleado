#include "Datos.cpp"
#include <iostream>
using namespace std;
main(){
	string puesto,sueldo;
	int codigo;
	
	cout<<"Codigo Empleado: " ;
	cin>>codigo;
	cout<<"Puesto: ";
	cin>>puesto;
	cout<<"Sueldo: ";
	cin>>sueldo;
	
	Datos obj = Datos(codigo, puesto, sueldo);
	obj.mostrar();	
	
	
}
