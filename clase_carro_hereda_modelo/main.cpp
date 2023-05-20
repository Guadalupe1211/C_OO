#include <string>
#include <iostream>
#include "carro.cpp"




int main(){

carro nissan("Verde","Nissan",4,"Grande",4,4);
nissan.acelerar();
nissan.balance();

std::cout << "Este es el numero de ejes del vehiculo: "<<nissan.numeroEjes << std::endl;

    
    return 0;
}