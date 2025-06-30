#ifndef FUNCIONES_H
#define FUNCIONES_H

#include<string>
using namespace std;
 

struct contactoEmail{
	
	string nombres;
	char sexo;
	int edad;
	string telefono;
	string email;
	string nacionalidad;
};

extern const int maximo;
extern contactoEmail persona[];
extern int  cant; 

void agregarNcontacto();
void eliminarContacto();
void listarContactos();
#endif