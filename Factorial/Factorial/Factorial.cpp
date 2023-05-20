// Factorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

////Ciclo recursivo
int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);

}


int main()
{
    int n;
    n = 0;
    std::cout << "Porfavor dame el numero del cual quieres saber el factorial: " << std::endl;
    std::cin >> n;
    int resultado = n;
    int valorInicial = n;

    //Ciclo for
   
    for (n;n > 1;n--)
    {
        resultado = resultado *(n - 1); 
    }
    
    std::cout << "El factorial de " << valorInicial << " es " << resultado << std::endl;
    
    

    //Ciclo while
    n;
    n = 0;
    std::cout << "Porfavor dame el numero del cual quieres saber el factorial: " << std::endl;
    std::cin >> n;
    resultado = n;
    valorInicial = n;

    while (n > 1) 
    {
        resultado *= n-1;
        n--;
    }
    std::cout << "El factorial de " << valorInicial << " es " << resultado << std::endl;
    
    std::cout << "El factorial de 5 es: " << factorial(5) << std::endl;



                
}

