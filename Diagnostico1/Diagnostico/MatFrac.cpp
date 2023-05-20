#include "MatFrac.h"
#include "Fraccion.h"
#include <iostream>
#include <string>

MatFrac::MatFrac()
{
	
}

MatFrac::MatFrac(f, c : matriz1(a), matriz2(b) //inicializacion de las matrices 
{
	if (rows > 0 && columns > 0) {
		data = new Fraction * [rows];
		for (int i = 0; i < rows; i++) {
			data[i] = new Fraction[columns];
		}
	}
}

Fraccion** MatFrac::suma()
{
	if (sizeof(matriz1) != sizeof(matriz2) || sizeof(matriz1[0]) != sizeof(matriz2[0]))
	{
		std::cout << "Las matrices deben ser del mismo tamaño" << std::endl;
	}

	
	Fraccion** resultadoMatriz = new Fraccion * [sizeof(matriz1)];

	for (int i = 0; i < sizeof(matriz1); ++i)
	{
		matriz1[i] = new Fraccion[sizeof(matriz1[0])];
	}

	for (int i = 0; i < sizeof(matriz1); ++i) {
		for (int j = 0; j < sizeof(matriz1[0]); ++j) {
			resultadoMatriz[i][j] = resultadoMatriz[i][j].suma( matriz1[i][j], matriz2[i][j]);
		}
	}

	return resultadoMatriz;

}

void MatFrac::cargarArchivo(std::string)
{
}

void MatFrac::imprimirArchivo(std::string)
{
}

void MatFrac::setMatriz1(Fraccion** matriz)//nueva matriz
{
	for (int i = 0; i < fila; ++i) { //cuenta filas
		for (int j = 0; j < columna; ++j) {//cuenta las columnas que tiene las filas
			matriz1[i][j] = matriz[i][j];//matriz valores por defecto 0/1 se llenan con valores nuevos
		}
	}
}

void MatFrac::setMatriz2(Fraccion** matriz)
{
	for (int i = 0; i < fila; ++i) {
		for (int j = 0; j < columna; ++j) {
			matriz2[i][j] = matriz[i][j];
		}
	}
}
