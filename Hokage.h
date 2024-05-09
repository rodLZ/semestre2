//
// Created by zamor on 11/04/2024.
//

#ifndef CLIONPROJECTS_HOKAGE_H
#define CLIONPROJECTS_HOKAGE_H
#include <iostream>
#include <string>
#include "Persona.h"
#include "Ninja.h"
#include "Sannin.h"

class Hokage : public Sannin{
public:
    //Constructor Implicito
    Hokage();

    //Constructor por Copia
    Hokage(const Hokage &rhs);

    //Constructor con parametros
    Hokage(const std::string &nombre, const std::string &altura, const std::string &genero, int peso, int edad, std::string &clan, const std::string &NaturalesaChacra, int CantidadChacra,  std::string &invocaciones, std::string &tecnicaunica, std::string &alumno, std::string aldea, int cantidadjutsus, std::string kekkeiGenkai);

    //Destructor
    ~Hokage() = default;

    //Operador "="
    Hokage &operator= (const Hokage &rhs);

    std::string getAldea() const;
    void setAldea(std::string aldea);
    int getCantidadjutsus() const;
    void setCantidadjutsus(int cantidadjutsus);
    std::string getKekkeiGenkai() const;
    void setKekkeiGenkai(std::string kekkeiGenkai);

private:
    std::string aldea;
    int cantidadjutsus;
    std::string kekkeiGenkai;
};

#endif //CLIONPROJECTS_HOKAGE_H
