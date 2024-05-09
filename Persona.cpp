//
// Created by zamor on 09/04/2024.
//
#include <iostream>
#include <string>
#include "Persona.h"

Persona :: Persona(){
    nombre = "";
    altura = "";
    genero = "";
    peso = 0;
    edad = 0;
}
Persona ::Persona(const std::string &nombre, const std::string &altura, const std::string &genero, int peso, int edad){
    this->nombre = nombre;
    this->altura = altura;
    this->genero = genero;
    this->peso = peso;
    this->edad = edad;
}
Persona::Persona(const Persona &rhs){
    this->nombre = rhs.nombre;
    this->altura = rhs.altura;
    this->genero = rhs.genero;
    this->peso = rhs.peso;
    this->edad = rhs.edad;
}

int Persona::getEdad() const {
    return edad;
}
void Persona::setEdad(int edad){
    this->edad = edad;
}
int Persona::getPeso() const {
    return peso;
}
void Persona::setPeso(int peso){
    this->peso = peso;
}
std::string Persona::getAltura() const {
    return altura;
}
void Persona::setAltura(std::string altura) {
    this->altura = altura;
}
std::string Persona::getNombre() const {
    return nombre;
}
void Persona::setNombre(std::string nombre) {
    this->nombre = nombre;
}
std::string Persona::getGenero() const {
    return genero;
}
void Persona::setGenero(std::string genero) {
    this->genero = genero;
}
