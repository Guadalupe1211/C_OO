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

    Fraccion fracccion1(1, 2);
    Fraccion fracccion2(3, 4);
    Fraccion fracccion3(5, 6);
    Fraccion fracccion4(7, 8);

    Fraccion** mat1 = new Fraccion*[2];
    int a = sizeof(fracccion1);
    for (int i = 0; i < 2; ++i)
    {
        mat1[i] = new Fraccion[2];
    }
    
    mat1[0][0] = fracccion1;
    mat1[0][1] = fracccion2;
    mat1[1][0] = fracccion3;
    mat1[1][1] = fracccion4;
    mat1[0][0].imprimirFraccion();
    mat1[0][1].imprimirFraccion();
    mat1[1][0].imprimirFraccion();
    mat1[1][1].imprimirFraccion();

    

    Fraccion** mat2 = new Fraccion * [2];
    for (int i = 0; i < 2; ++i)
    {
        mat2[i] = new Fraccion[2];
    }

    mat2[0][0] = fracccion1;
    mat2[0][1] = fracccion2;
    mat2[1][0] = fracccion3;
    mat2[1][1] = fracccion4;
    
    MatFrac matriz(mat1,mat2);
    matriz.suma();
}

