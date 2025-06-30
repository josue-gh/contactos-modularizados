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

void eliminarContacto(){
		cout<<"lista de contactos: "<<endl;
		cout<<endl;
		//realizamos un bucle para mostrar los contactos:
		for(int i=0; i<cant; i++){
			cout<<"contacto "<<i+1<<" :"<<persona[i].nombres<<endl;
		}
		cout<<endl;
		int eliminarCont;
		//condicion para saber si hay contactos
		if(cant>0){
		//ingresamos el indice del contacto a eliminar
		cout<<"que contacto desea eliminar(ingrese su indice: 1,2,3.....)"<<endl;
		cin>>eliminarCont;
		//asignamos ina variable
		int elim=eliminarCont;
		//retroceder el numeros para que vaya de acuerdo al arreglo
		eliminarCont--;
		cout<<endl;
		//le decimos al usuario que contacto elimino
		cout<<"eliminaste al contacto "<<elim<<": "<<persona[eliminarCont].nombres<<endl;
		//condicion para eliminar contacto
		if(eliminarCont>=0 and eliminarCont<cant){
			//bucle para recorrer los contactos
			for(int i=eliminarCont; i<cant-1; i++){
			persona[i].nombres=persona[i+1].nombres;
			persona[i].sexo=persona[i+1].sexo;
			persona[i].edad=persona[i+1].edad;
			persona[i].telefono=persona[i+1].telefono;
			persona[i].email=persona[i+1].email;
			persona[i].nacionalidad=persona[i+1].nacionalidad;
		    }
		    //disminuir la cantidad de contactos
		    cant--;
		}
		 
	    }else{
	    	cout<<"no hay contactos "<<endl;
	    	cout<<endl;
		}
}