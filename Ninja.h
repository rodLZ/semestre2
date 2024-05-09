//
// Created by zamor on 09/04/2024.
//

#ifndef CLIONPROJECTS_NINJA_H
#define CLIONPROJECTS_NINJA_H

#include <iostream>
#include <string>
#include "Persona.h"

class Ninja : public Persona{
public:
    //Constructor Implicito
    Ninja();

    //Constructor por Copia
    Ninja(const Ninja &rhs);

    //Constructor con parametros
    Ninja(const std::string &nombre, const std::string &altura, const std::string &genero, int peso, int edad, std::string &clan, const std::string &NaturalesaChacra, int CantidadChacra);

    //Destructor
    ~Ninja() = default;

    //Operador "="
    Ninja &operator= (const Ninja &rhs);

    int getCantidadChacra() const;
    void setCantidadChacra(int CantidadChacra);
    std::string getclan() const;
    void setclan(std::string clan);
    std::string getNaturalesaChacra() const;
    void setNaturalesaChacra(std::string NaturalesaChacra);

private:
    std::string clan;
    std::string NaturalesaChacra;
    int CantidadChacra;
};

#endif //CLIONPROJECTS_NINJA_H
