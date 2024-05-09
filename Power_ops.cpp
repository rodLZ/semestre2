//
// Created by zamor on 16/04/2024.
//
#include <iostream>
#include <string>
#include "Power_ops.h"

Power_ops :: Power_ops(){
    aumentoPoder = "";
    senkai = "";
    habilidadNUeva = "";

}
Power_ops ::Power_ops(const std::string &aumentoPoder, const std::string &senkai, const std::string &habilidadNUeva){
    this->aumentoPoder = aumentoPoder;
    this->senkai = senkai;
    this->habilidadNUeva = habilidadNUeva;

}
Power_ops::Power_ops(const Power_ops &rhs){
    this->aumentoPoder = rhs.aumentoPoder;
    this->senkai = rhs.senkai;
    this->habilidadNUeva = rhs.habilidadNUeva;

}

std::string Power_ops::getAumentoPoder() const {
    return aumentoPoder;
}
void Power_ops::setAumentoPoder(std::string aumentoPoder) {
    this->aumentoPoder = aumentoPoder;
}
std::string Power_ops::getSenkai() const {
    return senkai;
}
void Power_ops::setSenkai(std::string senkai) {
    this->senkai = senkai;
}
std::string Power_ops::getHabilidadNUeva() const {
    return habilidadNUeva;
}
void Power_ops::setHabilidadNUeva(std::string habilidadNUeva) {
    this->habilidadNUeva = habilidadNUeva;
}
