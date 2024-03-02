#include <iostream>
#include <string>

using namespace std;

// declaramos la clase del bomba de agua

class bomba_de_agua {
	
	public:
		// atributos de la clase
		
		string marca;
		string capacidad;
		string tipo;
		string modelo;
	
		//constructor para inicializar atributos
	
		bomba_de_agua(string _marca, string _capacidad,string _tipo,string _modelo) {
			marca=_marca;
			capacidad=_capacidad;
			capacidad=_tipo;
			modelo=_modelo;
		
			
				// imprimimos mensaje para inciciar el objeto que se creo 
			cout<< "se creo el objeto bomba de agua " <<endl;
		}
			
	
		
		//destructor se ejecuta cuando se destruye un objeto de la clase
		~bomba_de_agua(){
			
			cout<<"se destruyo el objeto bomba de agua " <<endl;
		 	
		}
	   	//metodos y acciones del objeto 
		//metodo representa la accion de encender bomba de agua 
		void apagar(){
			cout<<"la bomba de agua esta apagada" <<endl;
			
		}
		
	};
	
		//funcion principal main
		
		int main (){
		
		//creamos un objeto
		bomba_de_agua miBomba("truper","2000l","sumergible","tx200");
		
		//hacemos un llamado a los metodos creados
		miBomba.apagar();
		
		return 0;
	}
	
	