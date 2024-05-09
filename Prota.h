//
// Created by zamor on 16/04/2024.
//

#ifndef CLIONPROJECTS_PROTA_H
#define CLIONPROJECTS_PROTA_H

#include <iostream>
#include <string>
#include "Persona.h"
#include "Power_ops.h"
#include "Guionaso.h"

class Prota: public Persona, public Power_ops, public Guionaso{
public:
    //Constructor Implicito
    Prota();

    //Constructor por Copia
    Prota(const Prota &rhs);

    //Constructor con parametros
    Prota(const std::string &aumentoExesivo, const std::string &recuendosDesblo, const std::string &openin, const std::string &aumentoPoder, const std::string &senkai, const std::string &habilidadNUeva, const std::string &nombre, const std::string &altura, const std::string &genero, int peso, int edad);

    //Destructor
    ~Prota() = default;

    //Operador "="
    Prota &operator= (const Prota &rhs);


private:

};

#endif //CLIONPROJECTS_PROTA_H
