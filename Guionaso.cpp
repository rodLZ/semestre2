//
// Created by zamor on 16/04/2024.
//
#include <iostream>
#include <string>
#include "Guionaso.h"

Guionaso :: Guionaso(){
    aumentoExesivo = "";
    recuendosDesblo = "";
    openin = "";

}
Guionaso ::Guionaso(const std::string &aumentoExesivo, const std::string &recuendosDesblo, const std::string &openin){
    this->aumentoExesivo = aumentoExesivo;
    this->recuendosDesblo = recuendosDesblo;
    this->openin = openin;

}
Guionaso::Guionaso(const Guionaso &rhs){
    this->aumentoExesivo = rhs.aumentoExesivo;
    this->recuendosDesblo = rhs.recuendosDesblo;
    this->openin = rhs.openin;

}

std::string Guionaso::getAumentoExesivo() const {
    return aumentoExesivo;
}
void Guionaso::setAumentoExesivo(std::string aumentoExesivo) {
    this->aumentoExesivo = aumentoExesivo;
}
std::string Guionaso::getRecuendosDesblo() const {
    return recuendosDesblo;
}
void Guionaso::setRecuendosDesblo(std::string recuendosDesblo) {
    this->recuendosDesblo = recuendosDesblo;
}
std::string Guionaso::getOpenin() const {
    return openin;
}
void Guionaso::setOpenin(std::string openin) {
    this->openin = openin;
}
