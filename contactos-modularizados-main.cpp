#include <iostream>
#include "funciones.h"

using namespace std;

int main(){
	string respuesta;
	int hacer;
	
	do{
	//mostramos el menu de entrada
	cout<<"menu: "<<endl;
	cout<<endl;
	cout<<"agregar nuevo contacto (apretar 1)"<<endl;
	cout<<"aliminar un contacto (apretar 2)"<<endl;
	cout<<"mostrar lista de contactos (apretar 3)"<<endl;
	cout<<"mostrar lista por orden de servicio de correo (apretar 4)"<<endl;
	//pedimos lo que desea hacer
	cout<<"que deseas hacer: "<<endl;
	cin >> hacer;
	cout<<endl;
	//aplicando el cin.ignore para limpiar el buffer
	cin.ignore();
	//comparamos la respuesta
		
	if(hacer == 1){
		//agregamos la funcion de agregar contacto
		agregarNcontacto();
		
	}else if(hacer ==2){
		//agregamos la funcion de eliminar contacto
		eliminarContacto();
		
	}else if(hacer ==3){
		
		//agregamos la funcion de listar contactos
		listarContactos();
	}	
		
		
		
	//hacemos que el ususario diga que ingresar
	cout<<"deseas realizar algo mas? (si o no)"<<endl;
	cin>>respuesta;
			
	}while(respuesta=="si");
	
	return 0;
}