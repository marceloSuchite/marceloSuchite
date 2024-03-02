#include <iostream>
#include <string>

using namespace std;

// declaramos la clase del generador

class generador {
	
	public:
		// atributos de la clase
		
		string marca;
		string modelo;
		string capacidad;
		string combustible;
	
		//constructor para inicializar atributos
	
		generador(string _marca, string _modelo,string _capacidad,string _combustible) {
			modelo=_marca;
			marca=_modelo;
			capacidad=_capacidad;
			combustible=_combustible;
		
			
				// imprimimos mensaje para inciciar el objeto que se creo 
			cout<< "se creo el objeto generador " <<endl;
		}
			
	
		
		//destructor se ejecuta cuando se destruye un objeto de la clase
		~generador(){
			
			cout<<"se destruyo el objeto generador " <<endl;
		 	
		}
	   	//metodos y acciones del objeto 
		//metodo representa la accion de encender generador
		void apagar(){
			cout<<"el generador esta apagado" <<endl;
			
		}
		
	};
	
		//funcion principal main
		
		int main (){
		
		//creamos un objeto
		generador miGenerador("Honda","l2500","5kw/h","gasolina");
		
		//hacemos un llamado a los metodos creados
		miGenerador.apagar();
		
		return 0;
	}
	
	