//
// Created by zamor on 09/04/2024.
//
#include "Enteros.h"

// Constructor por defecto
Enteros::Enteros() : valor(0) {}

// Constructor por copia
Enteros::Enteros(const Enteros &rhs) : valor(rhs.valor) {}

// Constructor por valor
Enteros::Enteros(int valor) : valor(valor) {}

// Operador de asignación por copia
Enteros &Enteros::operator=(const Enteros &rhs) {
    if (this != &rhs) {
        valor = rhs.valor;
    }
    return *this;
}

// Operador de asignación por valor
Enteros &Enteros::operator=(int valor) {
    this->valor = valor;
    return *this;
}

// Operador de suma
Enteros &Enteros::operator+(const Enteros &rhs) {
    valor += rhs.valor;
    return *this;
}

Enteros &Enteros::operator+(int valor) {
    this->valor += valor;
    return *this;
}

// Operador de resta
Enteros &Enteros::operator-(const Enteros &rhs) {
    valor -= rhs.valor;
    return *this;
}

Enteros &Enteros::operator-(int valor) {
    this->valor -= valor;
    return *this;
}

// Operador de multiplicación
Enteros &Enteros::operator*(const Enteros &rhs) {
    valor *= rhs.valor;
    return *this;
}

Enteros &Enteros::operator*(int valor) {
    this->valor *= valor;
    return *this;
}

// Operador de división
Enteros &Enteros::operator/(const Enteros &rhs) {
    if (rhs.valor != 0) {
        valor /= rhs.valor;
    }
    return *this;
}

Enteros &Enteros::operator/(int valor) {
    if (valor != 0) {
        this->valor /= valor;
    }
    return *this;
}

// Operador de módulo
Enteros &Enteros::operator%(const Enteros &rhs) {
    if (rhs.valor != 0) {
        valor %= rhs.valor;
    }
    return *this;
}

Enteros &Enteros::operator%(int valor) {
    if (valor != 0) {
        this->valor %= valor;
    }
    return *this;
}

// Operadores de comparación
bool Enteros::operator<(const Enteros &rhs) const {
    return valor < rhs.valor;
}

bool Enteros::operator<(int valor) const {
    return this->valor < valor;
}

bool Enteros::operator>(const Enteros &rhs) const {
    return valor > rhs.valor;
}

bool Enteros::operator>(int valor) const {
    return this->valor > valor;
}

bool Enteros::operator==(const Enteros &rhs) const {
    return valor == rhs.valor;
}

bool Enteros::operator==(int valor) const {
    return this->valor == valor;
}

bool Enteros::operator<=(const Enteros &rhs) const {
    return valor <= rhs.valor;
}

bool Enteros::operator<=(int valor) const {
    return this->valor <= valor;
}

bool Enteros::operator>=(const Enteros &rhs) const {
    return valor >= rhs.valor;
}

bool Enteros::operator>=(int valor) const {
    return this->valor >= valor;
}

bool Enteros::operator!=(const Enteros &rhs) const {
    return valor != rhs.valor;
}

bool Enteros::operator!=(int valor) const {
    return this->valor != valor;
}

// Getter y Setter
int Enteros::getValor() const {
    return valor;
}

void Enteros::setValor(int valor) {
    this->valor = valor;
}
