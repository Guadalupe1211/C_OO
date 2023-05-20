#pragma once
#include "Fraccion.h"
#include <string>
class MatFrac
{
private:
	
	int fila;
	int columna;

public:
	
	Fraccion** matriz;
	Fraccion** resultado;
	MatFrac();
	//~MatFrac();
	MatFrac(int,int);
	Fraccion** suma(MatFrac, MatFrac);
	void cargarArchivo(const std::string);
	void imprimirArchivo(MatFrac,MatFrac,std::string); //*apuntador para ver el contenido de la direccion//  &valor para ver la direccion de memoria
	void setMatriz1(Fraccion**); //objeto bidimencional (columans renglones) tipo fraccion// ** dimension del apuntador
	void setMatriz2(Fraccion**);




};

