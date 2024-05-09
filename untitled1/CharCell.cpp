//
// Created by zamor on 09/04/2024.
//
#include "CharCell.h"

//Constructor Implicito
CharCell::CharCell() {
    valor = 0;
}

//Constructor por Copia
CharCell::CharCell(const CharCell &rhs) {
    valor = rhs.valor;
}

//Constructor por Parametros
CharCell::CharCell(char valor) : valor(valor) {
    this -> valor = valor;
}

CharCell &CharCell::operator=(const CharCell &rhs) {
    if (this != &rhs){
        valor = rhs.valor;
    }
    return *this;
}

CharCell &CharCell::operator=(char rhs) {
    if (this->valor != rhs) {
        valor = rhs;
    }
    return *this;
}

CharCell &CharCell::operator+(const CharCell &rhs) {
    valor = valor + rhs.valor;
    return *this;
}

CharCell &CharCell::operator+(char rhs) {
    valor = valor + rhs;
    return *this;
}

CharCell &CharCell::operator-(const CharCell &rhs) {
    valor = valor - rhs.valor;
    return *this;
}

CharCell &CharCell::operator-(char rhs) {
    valor = valor - rhs;
    return *this;
}



CharCell &CharCell::operator==(const CharCell &rhs) {
    valor = valor == rhs.valor;
    return *this;
}

CharCell &CharCell::operator==(char rhs) {
    valor = valor == rhs;
    return *this;
}

CharCell &CharCell::operator!=(const CharCell &rhs) {
    valor = valor != rhs.valor;
    return *this;
}

CharCell &CharCell::operator!=(char rhs) {
    valor = valor != rhs;
    return *this;
}


char CharCell::getValor() const {
    return valor;
}

void CharCell::setValor(char nValor) {
    valor = nValor;
}