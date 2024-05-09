//
// Created by zamor on 11/04/2024.
//

#ifndef CLIONPROJECTS_SANNIN_H
#define CLIONPROJECTS_SANNIN_H

#include <iostream>
#include <string>
#include "Persona.h"
#include "Ninja.h"

class Sannin : public Ninja{
public:
    //Constructor Implicito
    Sannin();

    //Constructor por Copia
    Sannin(const Sannin &rhs);

    //Constructor con parametros
    Sannin(const std::string &nombre, const std::string &altura, const std::string &genero, int peso, int edad, std::string &clan, const std::string &NaturalesaChacra, int CantidadChacra,  std::string &invocaciones, std::string &tecnicaunica, std::string &alumno);

    //Destructor
    ~Sannin() = default;

    //Operador "="
    Sannin &operator= (const Sannin &rhs);

    std::string getInvocaciones() const;
    void setInvocaciones(std::string invocaciones);
    std::string getTecnicaunica() const;
    void setTecnicaunica(std::string tecnicaunica);
    std::string getAlumno() const;
    void setAlumno(std::string alumno);

private:
    std::string invocaciones;
    std::string tecnicaunica;
    std::string alumno;
};

#endif //CLIONPROJECTS_SANNIN_H
