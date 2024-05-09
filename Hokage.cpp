//
// Created by zamor on 11/04/2024.
//
#include <string>
#include "Hokage.h"

Hokage::Hokage(): Sannin(){
    aldea = "";
    cantidadjutsus = 0;
    kekkeiGenkai = "";
}
Hokage::Hokage(const std::string &nombre, const std::string &altura, const std::string &genero, int peso, int edad, std::string &clan, const std::string &NaturalesaChacra, int CantidadChacra, std::string &invocaciones, std::string &tecnicaunica, std::string &alumno, std::string aldea, int cantidadjutsus, std::string kekkeiGenkai): Sannin(nombre, altura, genero, peso, edad, clan, NaturalesaChacra, CantidadChacra, invocaciones, tecnicaunica, alumno){
    this->aldea = aldea;
    this->cantidadjutsus = cantidadjutsus;
    this->kekkeiGenkai = kekkeiGenkai;
}
Hokage::Hokage(const Hokage &rhs):Sannin(rhs){
    this->aldea = rhs.aldea;
    this->cantidadjutsus = rhs.cantidadjutsus;
    this->kekkeiGenkai = rhs.kekkeiGenkai;
}

std::string  Hokage::getAldea() const {
    return aldea;
}
void Hokage::setAldea(std::string  aldea){
    this->aldea = aldea;
}
int  Hokage::getCantidadjutsus() const {
    return cantidadjutsus;
}
void Hokage::setCantidadjutsus(int  cantidadjutsus){
    this->cantidadjutsus = cantidadjutsus;
}
std::string Hokage::getKekkeiGenkai() const {
    return kekkeiGenkai;
}
void Hokage::setKekkeiGenkai(std::string kekkeiGenkai) {
    this->kekkeiGenkai = kekkeiGenkai;
}
