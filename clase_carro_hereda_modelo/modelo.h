#include <string>
#include <iostream>

class modelo{
    private:


    public:
    int numeroPuertas;
    std::string tipoMotor;
    int numeroPasajeros;
    int numeroEjes;


    void gastoCombusitble();
    void balance();
};