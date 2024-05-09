//
// Created by zamor on 11/04/2024.
//
#include <string>
#include "Persona.h"
#include "Sannin.h"

Sannin::Sannin(): Ninja(){
    invocaciones = "";
    tecnicaunica = "";
    alumno = "";
}
Sannin::Sannin(const std::string &nombre, const std::string &altura, const std::string &genero, int peso, int edad, std::string &clan, const std::string &NaturalesaChacra, int CantidadChacra, std::string &invocaciones, std::string &tecnicaunica, std::string &alumno): Ninja(nombre, altura, genero, peso, edad, clan, NaturalesaChacra, CantidadChacra){
    this->invocaciones = invocaciones;
    this->tecnicaunica = tecnicaunica;
    this->alumno = alumno;
}
Sannin::Sannin(const Sannin &rhs):Ninja(rhs){
    this->invocaciones = rhs.invocaciones;
    this->tecnicaunica = rhs.tecnicaunica;
    this->alumno = rhs.alumno;
}

std::string  Sannin::getInvocaciones() const {
    return invocaciones;
}
void Sannin::setInvocaciones(std::string  invocaciones){
    this->invocaciones = invocaciones;
}
std::string  Sannin::getTecnicaunica() const {
    return tecnicaunica;
}
void Sannin::setTecnicaunica(std::string  tecnicaunica){
    this->tecnicaunica = tecnicaunica;
}
std::string Sannin::getAlumno() const {
    return alumno;
}
void Sannin::setAlumno(std::string alumno) {
    this->alumno = alumno;
}

