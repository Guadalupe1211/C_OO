// Actividad2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "operaNumeros.h"
#include "numeroImpar.h"
#include <iostream>

int main()
{
     //#1.- Inicializacion de variable con clase operaNumeros
   // /*operaNumeros numeros_a_b;
   // operaNumeros numeros(6, 5);
   //

   // std::cout << "La suma de a + b es igual a:  " << numeros_a_b.suma() << std::endl;
   // std::cout << "La suma de los numeros 6 + 5 es igual a:  " << numeros.suma() << std::endl;

   // std::cout << "La resta de a + b es igual a:  " << numeros_a_b.resta() << std::endl;
   // std::cout << "La resta de los numeros 6 + 5 es igual a:  " << numeros.resta() << std::endl;

   // std::cout << "La multiplicacion de a + b es igual a:  " << numeros_a_b.multiplicacion() << std::endl;
   // std::cout << "La multiplicacion de los numeros 6 + 5 es igual a:  " << numeros.multiplicacion() << std::endl;*/
    
    int numero1;
    int numero2;

    std::cout << "Ingresa el primer numero " << std::endl;
    std::cin >> numero1;
    std::cout << "Ingresa el segundo numero " << std::endl;
    std::cin >> numero2;

    operaNumeros operacion1(numero1, numero2);

    std::cout << "La suma de los dos numeros previamente dados es: " << operacion1.suma() << std::endl;
    std::cout << "La resta de los dos numeros previamente dados es: " << operacion1.resta() << std::endl;
    std::cout << "La multiplicaci*/on de los dos numeros previamente dados es: " << operacion1.multiplicacion() << std::endl;



    int menu = 0;
    std::cout << "--------------Menu--------------" << std::endl;

    std::cout << "1 - Suma" << std::endl;
    std::cout << "2 - Resta" << std::endl;
    std::cout << "3 - Multiplicacion" << std::endl;
    std::cin >> menu;








    

   
}
