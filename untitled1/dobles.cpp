//
// Created by zamor on 09/04/2024.
//
#include "Dobles.h"
#include <cmath>

// Constructor por defecto
Dobles::Dobles() : valor(0.0) {}

// Constructor por copia
Dobles::Dobles(const Dobles &rhs) : valor(rhs.valor) {}

// Constructor por valor
Dobles::Dobles(double valor) : valor(valor) {}

// Operador de asignación por copia
Dobles &Dobles::operator=(const Dobles &rhs) {
    if (this != &rhs) {
        valor = rhs.valor;
    }
    return *this;
}

// Operador de asignación por valor
Dobles &Dobles::operator=(double valor) {
    this->valor = valor;
    return *this;
}

// Operador de suma
Dobles &Dobles::operator+(const Dobles &rhs) {
    Dobles resultado;
    resultado.valor = valor + rhs.valor;
    return resultado;
}

// Operador de resta
Dobles &Dobles::operator-(const Dobles &rhs) {
    valor -= rhs.valor;
    return *this;
}

Dobles &Dobles::operator-(double valor) {
    this->valor -= valor;
    return *this;
}

// Operador de multiplicación
Dobles &Dobles::operator*(const Dobles &rhs) {
    valor *= rhs.valor;
    return *this;
}

Dobles &Dobles::operator*(double valor) {
    this->valor *= valor;
    return *this;
}

// Operador de división
Dobles &Dobles::operator/(const Dobles &rhs) {
    if (rhs.valor != 0.0) {
        valor /= rhs.valor;
    }
    return *this;
}

Dobles &Dobles::operator/(double valor) {
    if (valor != 0.0) {
        this->valor /= valor;
    }
    return *this;
}

// Operadores de comparación
bool Dobles::operator<(const Dobles &rhs) const {
    return valor < rhs.valor;
}

bool Dobles::operator<(double valor) const {
    return this->valor < valor;
}

bool Dobles::operator>(const Dobles &rhs) const {
    return valor > rhs.valor;
}

bool Dobles::operator>(double valor) const {
    return this->valor > valor;
}

bool Dobles::operator==(const Dobles &rhs) const {
    return valor == rhs.valor;
}

bool Dobles::operator==(double valor) const {
    return this->valor == valor;
}

bool Dobles::operator<=(const Dobles &rhs) const {
    return valor <= rhs.valor;
}

bool Dobles::operator<=(double valor) const {
    return this->valor <= valor;
}

bool Dobles::operator>=(const Dobles &rhs) const {
    return valor >= rhs.valor;
}

bool Dobles::operator>=(double valor) const {
    return this->valor >= valor;
}

bool Dobles::operator!=(const Dobles &rhs) const {
    return valor != rhs.valor;
}

bool Dobles::operator!=(double valor) const {
    return this->valor != valor;
}


// Getter y Setter
double Dobles::getValor() const {
    return valor;
}

void Dobles::setValor(double valor) {
    this->valor = valor;
}
