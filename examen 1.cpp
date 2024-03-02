#include <iostream>
#include <string>

using namespace std;

// declaramos la clase del tractor

class tractor {
	
	public:
		// atributos de la clase
		
		string modelo;
		string marca;
		string traccion;
		string capacidad;
	
		//constructor para inicializar atributos
	
		tractor(string _modelo, string _marca,string _traccion,string _capacidad) {
			modelo=_modelo;
			marca=_marca;
			traccion=_traccion;
			capacidad=_capacidad;
		
			
				// imprimimos mensaje para inciciar el objeto que se creo 
			cout<< "se creo el objeto tractor " <<endl;
		}
			
	
		
		//destructor se ejecuta cuando se destruye un objeto de la clase
		~tractor(){
			
			cout<<"se destruyo el objeto tractor " <<endl;
		 	
		}
	   	//metodos y acciones del objeto 
		//metodo representa la accion de encender tractor
		void apagar(){
			cout<<"el tractor esta apagado" <<endl;
			
		}
		
	};
	
		//funcion principal main
		
		int main (){
		
		//creamos un objeto
		tractor miVehiculo("5415","joh dere", "trasera","4");
		
		//hacemos un llamado a los metodos creadod
		miVehiculo.apagar();
		
		return 0;
	}
	
	
