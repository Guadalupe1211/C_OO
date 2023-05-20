// Numerosimpares.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int limite;
    limite = 0;
    std::cout << "Dame el limite hasta donde quieras multiplicar numeros impares" << std::endl;
    std::cin >> limite;
    int i = 1;
    int resultado = 0;
    for (i=1;i<=10;i++)
    {
        if (limite % 2 != 0)
        {
            resultado = resultado * limite;
        }

    }
    std::cout << "El resultado de los numeros impares multiplicados es " << resultado << std::endl;
    return 0;
    
   
}
