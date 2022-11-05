// Actividad 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include"operaNumeros.h"
#include <iostream>

int main()
{
    operaNumeros miVariable;
    operaNumeros miVariable2(2, 3);
    operaNumeros mivariable3(4, 5);
    operaNumeros mivariable4(3, 1);
    operaNumeros mivariable5(4, 5);

    int unValor = 6;
    int unValor2 = 7;


    std::cout << miVariable.suma() << std::endl;
    std::cout << miVariable2.suma() << std::endl;
    std::cout << " " << mivariable3.suma() << std::endl;

    
    std::cout << " " << mivariable4.resta() << std::endl;
    std::cout << " " << mivariable5.multiplicion() << std::endl;


    int numsuma1;
    int numsuma2;
    
    std::cout << "Ingresa el primer número" << std::endl;
    std::cout << "Ingresa el segundo número" << std::endl;
    
    
    int multiplicacion;



    //std::cout << " " << miVariable.suma(unValor,unValor2);

    //resta con las variables de instancia
    //multiplicacion con las variables de instancia

    //suma, resta y multiplicacion 
    
    //esto estuvo mal

    //miVariable;

    //leer numero


    //dime la opcion

    //muestra resultado
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
