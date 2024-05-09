//
// Created by zamor on 09/04/2024.
//
#include <iostream>
#include <string>
#include "Persona.h"
#include "Ninja.h"

Ninja::Ninja(): Persona(){
    clan = "";
    NaturalesaChacra = "";
    CantidadChacra = 0;
}
Ninja::Ninja(const std::string &nombre, const std::string &altura, const std::string &genero, int peso, int edad, std::string &clan, const std::string &NaturalesaChacra, int CantidadChacra): Persona(nombre, altura, genero, peso, edad){
    this->clan = clan;
    this->NaturalesaChacra = NaturalesaChacra;
    this->CantidadChacra = CantidadChacra;
}
Ninja::Ninja(const Ninja &rhs):Persona(rhs){
    this->clan = rhs.clan;
    this->NaturalesaChacra = rhs.NaturalesaChacra;
    this->CantidadChacra = rhs.CantidadChacra;
}

int Ninja::getCantidadChacra() const {
    return CantidadChacra;
}
void Ninja::setCantidadChacra(int CantidadChacra){
    this->CantidadChacra = CantidadChacra;
}
std::string Ninja::getclan() const {
    return clan;
}
void Ninja::setclan(std::string clan){
    this->clan = clan;
}
std::string Ninja::getNaturalesaChacra() const {
    return NaturalesaChacra;
}
void Ninja::setNaturalesaChacra(std::string NaturalesaChacra) {
    this->NaturalesaChacra = NaturalesaChacra;
}
