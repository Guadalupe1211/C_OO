#pragma once
#include "Fraccion.h"
#include <string>
class MatFrac
{
private:
	
	Fraccion** matriz1;
	Fraccion** matriz2;
	int fila;
	int columna;


public:
	MatFrac();
	MatFrac(int, int);
	Fraccion suma(Fraccion, Fraccion);
	void cargarArchivo(std::string);
	void imprimirArchivo(std::string); //*apuntador para ver el contenido de la direccion//  &valor para ver la direccion de memoria
	void setMatriz1(Fraccion**); //objeto bidimencional (columans renglones) tipo fraccion// ** dimension del apuntador
	void setMatriz2(Fraccion**);




};
