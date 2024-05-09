//
// Created by zamor on 12/03/2024.
//
#ifndef COCHE_H
#define COCHE_H

#include <string>
#include <iostream>

class Coche {
public:
    //Constructor Implicito
    Coche();

    //Constructor por Copia
    Coche(const Coche &rhs);

    //Constructor con parametros
    Coche(const std::string &marca, const std::string &modelo, const std::string &duenio, int anioDeFabricacion, int kilometraje);

    //Destructor
    ~Coche() = default;

    //Operador "="
    Coche &operator= (const Coche &rhs);

private:
    std::string marca;
    std::string modelo;
    std::string duenio;
    int anioDeFabricacion;
    int kilometraje;
};

#endif // COCHE_H

