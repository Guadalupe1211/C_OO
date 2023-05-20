// Sumatoria.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<math.h>

float regresaFormula(int n)
{
    return 1 - 1 / (float)(n + 1);
}








//ecuacion sumatoria

float regresaSumatoria(int limiteSuperior)
{
    float valorFinal = 0;
    float acumulador = 0;

    for (int i = 1;i <= limiteSuperior;i++)
    {
        acumulador += (1 / (float)i) - 1 / (float)(i + 1);
    }

    valorFinal = acumulador;
    return valorFinal;

}

float regresaSumatoria1(int limiteSuperior)
{
    float valorFinal = 0;
    float acumulador = 0;

    for (int i = 1;i <= limiteSuperior;i++)
    {
        acumulador +=  ((float)i)*pow(-1,(float)i);
    }

    valorFinal = acumulador;
    return valorFinal;

}
int main()
{
    std::cout << regresaSumatoria(3)<< std::endl;
    std::cout << regresaSumatoria(10) << std::endl;

    std::cout << regresaSumatoria1(4) << std::endl;
    std::cout << regresaSumatoria1(10) << std::endl;
}
