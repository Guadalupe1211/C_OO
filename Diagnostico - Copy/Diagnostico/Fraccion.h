#pragma once
class Fraccion
{
private:
	int numerador;
	int denominador;

public:
	Fraccion();
	Fraccion(int, int);
	Fraccion suma(Fraccion,Fraccion);
	void imprimirFraccion();
	Fraccion multiplicacion(Fraccion,Fraccion);

};

