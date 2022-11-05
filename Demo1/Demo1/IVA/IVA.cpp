
#include <iostream>

int main()
{
    float precio = 0;
    float iva = 0;
    float resultado = 0;
    std::cout << "dame precio " << std::endl;
    std::cin >> precio;


    std::cout << "dame IVA " << std::endl;
    std::cin >> iva;

    resultado = precio * iva;

    resultado += precio;


    std::cout << "Hello World!\n";
}

