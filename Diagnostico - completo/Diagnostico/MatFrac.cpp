#include "MatFrac.h"
#include "Fraccion.h"
#include <iostream>
#include <string>
#include <fstream>

MatFrac::MatFrac()
{
	fila = 1;
		columna = 1;
		matriz = nullptr;
			resultado = nullptr;
			matriz = new Fraccion * [fila];
			for (int i = 0; i < fila; i++) {
				matriz[i] = new Fraccion[columna];
			}
			resultado = new Fraccion * [fila];
			for (int i = 0; i < fila; i++) {
				resultado[i] = new Fraccion[columna];
			}
}

//MatFrac::~MatFrac()
//{
//	if (matriz != nullptr) {
//		for (int i = 0; i < fila; i++) {
//			delete[] matriz[i];
//		}	
//		delete[] matriz;
//	}
//}

MatFrac::MatFrac(int f, int c) : fila(f), columna(c), matriz(nullptr) //inicializacion de las matrices 
{
	if (fila > 0 && columna > 0) {
		matriz = new Fraccion * [fila];
		resultado = new Fraccion * [fila];
		for (int i = 0; i < fila; i++) {
			matriz[i] = new Fraccion[columna];
			resultado[i] = new Fraccion[columna];
		}
	}
}




Fraccion** MatFrac::suma(MatFrac matriz1,MatFrac matriz2)
{
	if (matriz1.fila != matriz2.fila || matriz1.columna != matriz2.columna) {
		std::cout << "Las matrices deben ser del mismo tamaño para poder sumarlas";
		exit(0);
	}

	int fila_confirmada = matriz1.fila;
	int columna_confirmada = matriz2.columna;
	resultado = nullptr;
	resultado = new Fraccion * [fila];

	for (int i = 0; i < fila_confirmada; i++) {
		resultado[i] = new Fraccion[columna_confirmada];
	}	
	
	for (int i = 0; i < fila_confirmada; i++) {
		for (int j = 0; j < columna_confirmada; j++) {
			resultado[i][j] = resultado[i][j].suma(matriz1.matriz[i][j], matriz2.matriz[i][j]);
		}
	}

	return resultado;

}


void MatFrac::cargarArchivo(const std::string Archivo) {
	std::ifstream file(Archivo);
	if (!file) {
		std::cout << "Las matrices deben ser del mismo tamaño para poder sumarlas";
		exit(0);
	}

	file >> fila >> columna;
	if (fila <= 0 || columna <= 0) {
		std::cout << "Las matrices deben ser del mismo tamaño para poder sumarlas";
		exit(0);
	}
	// Allocate memory for the matrix data
	MatFrac::matriz= new Fraccion* [fila];
	for (int i = 0; i < fila; i++) {
		matriz[i] = new Fraccion[columna];
		for (int j = 0; j < columna; j++) {
			int numerador, denominador;
			file >> numerador >> denominador;
			matriz[i][j] = Fraccion(numerador, denominador);
		}
	}

	file.close();
}

void MatFrac::imprimirArchivo(MatFrac matriz1, MatFrac matriz2, std::string archivo){
	if (matriz1.fila != matriz2.fila || matriz1.columna != matriz2.columna) {
		std::cout << "Las matrices deben ser del mismo tamaño para poder sumarlas";
		exit(0);
	}

	Fraccion** res = MatFrac::suma(matriz1, matriz2);

	std::ofstream file(archivo, std::ios::trunc);
	if (!file) {
		throw std::runtime_error("No se pudo abrir el archivo: " + archivo);
	}
	file << "Suma de matrices:" << std::endl;
	for (int i = 0; i < matriz1.fila; i++) {
		for (int j = 0; j < matriz1.columna; j++) {
			file << res[i][j].getNumerador() << "/" << res[i][j].getDenominador() << " ";
		}
		file << std::endl;
	}
	file.close();
}
