#include "Fraccion.h"
#include <string>
#include <iostream>
#include "Utilities.h"

Fraccion::Fraccion()
{
	numerador = 0;
	denominador = 1;
}

Fraccion::Fraccion(int valnumerador, int valdenominador)
{
	
	if (valnumerador < 0 || valdenominador < 0 )
	{
		std::cout << "Evitar que el numerador y denominador sean negativos" << std::endl;
	}
	else {
		numerador = valnumerador;
		denominador = valdenominador;
	}
}

Fraccion Fraccion::suma(Fraccion a, Fraccion b)
{
	
		int numerador = (a.numerador * b.denominador) + (b.numerador * a.denominador);
		int denominador = a.denominador * b.denominador;
		int gcd = Utilities::GCD(numerador, denominador);
		numerador = Utilities::reduce(numerador, gcd);
		denominador = Utilities::reduce(denominador, gcd);

		return Fraccion(numerador, denominador);
	
}

void Fraccion::imprimirFraccion()
{
	std::cout << "El resultado de la operacion de fracciones es: " << Fraccion::numerador << "/" << Fraccion::denominador << std::endl;
}

Fraccion Fraccion::multiplicacion(Fraccion a, Fraccion b)
{
	Fraccion::numerador = (a.numerador * b.numerador);
	Fraccion::denominador = a.denominador * b.denominador;
	int gcd = Utilities::GCD(numerador, denominador);
	numerador = Utilities::reduce(numerador, gcd);
	denominador = Utilities::reduce(denominador, gcd);

	return Fraccion(numerador, denominador);
}

int Fraccion::getNumerador()
{
	return Fraccion::numerador;
}

int Fraccion::getDenominador()
{
	return Fraccion::denominador;
}


