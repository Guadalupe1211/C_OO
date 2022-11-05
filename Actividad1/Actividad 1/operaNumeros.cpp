#include "operaNumeros.h"

operaNumeros::operaNumeros()
{
	a = 1;
	b = 2;
}

operaNumeros::operaNumeros(int val1, int val2)
{
	a = val1;
	b = val2;
}


int operaNumeros::resta()
{
	return a-b;
}

int operaNumeros::multiplicion()
{
	return a*b;
}



int operaNumeros::suma()
{
	return a + b;
}
