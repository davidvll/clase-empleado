//main
#include <iostream>
using namespace std;
class Empleado{

	protected : string  sueldo, puesto;
				int codigo;
	
	protected: 			
				Empleado(){
				}
					Empleado(string sue, string pue,int cod){
						codigo = cod;
						puesto = pue;
						sueldo = sue;	
					}
				void mostrar();
	};			
