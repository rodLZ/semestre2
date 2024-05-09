//
// Created by zamor on 09/04/2024.
//
#include "Booleanos.h"

// Constructor por defecto
Booleanos::Booleanos() : valor(false) {}

// Constructor por copia
Booleanos::Booleanos(const Booleanos &rhs) : valor(rhs.valor) {}

// Constructor por valor
Booleanos::Booleanos(bool valor) : valor(valor) {}

// Operador de asignación por copia
Booleanos &Booleanos::operator=(const Booleanos &rhs) {
    if (this != &rhs) {
        valor = rhs.valor;
    }
    return *this;
}

// Operador de asignación por valor
Booleanos &Booleanos::operator=(bool valor) {
    this->valor = valor;
    return *this;
}

// Operador lógico AND
Booleanos Booleanos::operator&&(const Booleanos &rhs) const {
    return valor && rhs.valor;
}

Booleanos Booleanos::operator&&(bool valor) const {
    return this->valor && valor;
}

// Operador lógico OR
Booleanos Booleanos::operator||(const Booleanos &rhs) const {
    return valor || rhs.valor;
}

Booleanos Booleanos::operator||(bool valor) const {
    return this->valor || valor;
}

// Operador lógico NOT
Booleanos Booleanos::operator!() const {
    return !valor;
}

// Getter y Setter
bool Booleanos::getValor() const {
    return valor;
}

void Booleanos::setValor(bool valor) {
    this->valor = valor;
}

//bool BooolCel::operator>(BoolCell.rhs){
//if(thi->value > rhs.value).
//return true