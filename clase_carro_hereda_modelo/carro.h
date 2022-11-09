#include <string>
#include <iostream>
#include "modelo.cpp"

class carro: public modelo{
  private:
  std::string color;
  std::string marca;

  public:  
  carro();
  carro(std::string color, std::string marca, int numeroPuertas,std::string tipoMotor, int numeroPasajeros, int numeroEjes);
  void acelerar();
  void frenar();
};