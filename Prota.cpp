//
// Created by zamor on 16/04/2024.
//
#include <string>
#include "Persona.h"
#include "Power_ops.h"
#include "Guionaso.h"
#include "Prota.h"

Prota::Prota(): Persona(), Power_ops(), Guionaso(){

}
Prota::Prota(const std::string &aumentoExesivo, const std::string &recuendosDesblo, const std::string &openin, const std::string &aumentoPoder, const std::string &senkai, const std::string &habilidadNUeva, const std::string &nombre, const std::string &altura, const std::string &genero, int peso, int edad): Persona(nombre, altura, genero, peso, edad), Guionaso(aumentoExesivo, recuendosDesblo, openin), Power_ops(aumentoPoder, senkai, habilidadNUeva){

}
Prota::Prota(const Prota &rhs):Persona(rhs), Power_ops(rhs), Guionaso(rhs){
}

