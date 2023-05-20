#include "MatFrac.h"
#include "Fraccion.h"

MatFrac::MatFrac()
{
	
}

MatFrac::MatFrac(int f, int c) : fila(f), columna(c) //indicar con que empiezan las variables
{
	matriz1 = new Fraccion *[fila];
	for (int i = 0; i < fila; ++i)
	{
		matriz1[i] = new Fraccion[columna]; //inicializar las matrices 
	}

	matriz2 = new Fraccion * [fila];
	for (int i = 0; i < fila; ++i)
	{
		matriz2[i] = new Fraccion[columna];
	}
}

Fraccion MatFrac::suma(Fraccion, Fraccion)
{
	return Fraccion();
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
