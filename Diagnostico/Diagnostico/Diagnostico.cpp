// Diagnostico.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Fraccion.h"
#include "MatFrac.h"
#include <iostream>


int main()
{
    Fraccion F1(2,3);
    Fraccion F2(1,8);
    Fraccion suma = suma.suma(F1,F2);
    suma.imprimirFraccion();
    Fraccion multiplicacion = multiplicacion.multiplicacion(F1, F2);
    multiplicacion.imprimirFraccion();


    MatFrac matriz1;
    matriz1.cargarArchivo("Archivo.txt");
    MatFrac matriz2;
    matriz2.cargarArchivo("Archivo2.txt");

    matriz1.imprimirArchivo(matriz1, matriz2,"sumadematrices.txt");
    

    


}

