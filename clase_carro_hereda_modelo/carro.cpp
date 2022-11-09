#include <string>
#include <iostream>
#include "carro.h"

carro::carro(){
    color = "";
    marca = "";
    numeroPuertas=0;
    tipoMotor="";
    numeroPasajeros = 0;
    numeroEjes=0;
}
carro::carro(std::string color, std::string marca, int numeroPuertas,std::string tipoMotor, int numeroPasajeros, int numeroEjes){
    color = color;
    marca = marca;
    modelo::numeroPuertas = numeroPuertas;
    modelo::tipoMotor = tipoMotor;
    modelo::numeroPasajeros = numeroPasajeros; 
    modelo::numeroEjes = numeroEjes;
}

void carro::acelerar(){
std::cout<< "Voy echo la mocha" << std::endl;
 }
void carro::frenar(){
    std::cout<< "Aguas que voy a chocar" << std::endl;

  }