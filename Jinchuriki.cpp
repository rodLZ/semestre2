//
// Created by zamor on 11/04/2024.
//
#include <string>
#include "Jinchuriki.h"

Jinchuriki::Jinchuriki(): Hokage(){
    nombrebestia = "";
    colasqtiene = "";
    animal = "";
}
Jinchuriki::Jinchuriki(const std::string &nombre, const std::string &altura, const std::string &genero, int peso, int edad, std::string &clan, const std::string &NaturalesaChacra, int CantidadChacra, std::string &invocaciones, std::string &tecnicaunica, std::string &alumno, std::string aldea, int cantidadjutsus, std::string kekkeiGenkai, std::string nombrebestia, std::string colasqtiene, std::string animal): Hokage(nombre, altura, genero, peso, edad, clan, NaturalesaChacra, CantidadChacra, invocaciones, tecnicaunica, alumno, aldea, cantidadjutsus, kekkeiGenkai){
    this->nombrebestia = nombrebestia;
    this->colasqtiene = colasqtiene;
    this->animal = animal;
}
Jinchuriki::Jinchuriki(const Jinchuriki &rhs):Hokage(rhs){
    this->nombrebestia = rhs.nombrebestia;
    this->colasqtiene = rhs.colasqtiene;
    this->animal = rhs.animal;
}

std::string  Jinchuriki::getNombrebestia() const {
    return nombrebestia;
}
void Jinchuriki::setNombrebestia(std::string  nombrebestia){
    this->nombrebestia = nombrebestia;
}
std::string  Jinchuriki::getColasqtiene() const {
    return colasqtiene;
}
void Jinchuriki::setColasqtiene(std::string colasqtiene){
    this->colasqtiene = colasqtiene;
}
std::string Jinchuriki::getAnimal() const {
    return animal;
}
void Jinchuriki::setAnimal(std::string animal) {
    this->animal = animal;
}
