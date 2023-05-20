#include "operaNumeros.h"

operaNumeros::operaNumeros()
{
	a = 1;
	b = 2;
}

operaNumeros::operaNumeros(int valor1, int valor2)
{
	a = valor1;
	b = valor2;
}

int operaNumeros::suma()
{
	return a+b;
}

int operaNumeros::resta()
{
	return a-b;
}

int operaNumeros::multiplicacion()
{
	return a*b;
}

