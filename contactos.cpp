#include <iostream>
#include "funciones.h"

const int maximo=50;
int  cant=0 ;
contactoEmail persona[maximo];

void agregarNcontacto(){
	
	//designamos valor a la variables i
		int i=cant;
		//agregando datos de los contactos
		cout<<"ingresa el nombre de la persona "<<endl;
		getline(cin, persona[i].nombres);
		cout<<endl;
		cout<<"ingrese el sexo de las persona(M-F)"<<"\n";
		cin >> persona[i].sexo ;
		cout<<endl;
		cout<<"ingrese la edad de la persona"<<endl;
		cin>> persona[i].edad;
		cout<<endl;
		cout<<"ingrese el telefono de las persona"<<endl;
		cin>>persona[i].telefono;
		cout<<endl;
		//limpiar el buffer
		cin.ignore();
		cout<<"ingrese el email de la persona"<<endl;
		getline(cin, persona[i].email);
		cout<<endl;
		cout<<"ingrese la nacionalidad de la personas"<<endl;
		getline(cin, persona[i].nacionalidad);
		
		cout<<endl;
		cant++;
}