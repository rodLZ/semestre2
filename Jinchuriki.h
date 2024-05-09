//
// Created by zamor on 11/04/2024.
//

#ifndef CLIONPROJECTS_JINCHURIKI_H
#define CLIONPROJECTS_JINCHURIKI_H
#include <iostream>
#include <string>
#include "Persona.h"
#include "Ninja.h"
#include "Sannin.h"
#include "Hokage.h"

class Jinchuriki : public Hokage{
public:
    //Constructor Implicito
    Jinchuriki();

    //Constructor por Copia
    Jinchuriki(const Jinchuriki &rhs);

    //Constructor con parametros
    Jinchuriki(const std::string &nombre, const std::string &altura, const std::string &genero, int peso, int edad, std::string &clan, const std::string &NaturalesaChacra, int CantidadChacra,  std::string &invocaciones, std::string &tecnicaunica, std::string &alumno, std::string aldea, int cantidadjutsus, std::string kekkeiGenkai, std::string nombrebestia, std::string colasqtiene, std::string animal);

    //Destructor
    ~Jinchuriki() = default;

    //Operador "="
    Jinchuriki &operator= (const Jinchuriki &rhs);

    std::string getNombrebestia() const;
    void setNombrebestia(std::string nombrebestia);
    std::string getColasqtiene() const;
    void setColasqtiene(std::string colasqtiene);
    std::string getAnimal() const;
    void setAnimal(std::string animal);

private:
    std::string nombrebestia;
    std::string colasqtiene;
    std::string animal;
};

#endif //CLIONPROJECTS_JINCHURIKI_H
