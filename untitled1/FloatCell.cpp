#include "FloatCell.h"

//Constructor Implicito
FloatCell::FloatCell() {
    valor = 0;
}

//Constructor por Copia
FloatCell::FloatCell(const FloatCell &rhs) {
    valor = rhs.valor;
}

//Constructor por Parametros
FloatCell::FloatCell(float valor) : valor(valor) {
    this -> valor = valor;
}

FloatCell &FloatCell::operator=(const FloatCell &rhs) {
    if (this != &rhs){
        valor = rhs.valor;
    }
    return *this;
}

FloatCell &FloatCell::operator=(float rhs) {
    if (this->valor != rhs) {
        valor = rhs;
    }
    return *this;
}

FloatCell &FloatCell::operator+(const FloatCell &rhs) {
    valor = valor + rhs.valor;
    return *this;
}

FloatCell &FloatCell::operator+(float rhs) {
    valor = valor + rhs;
    return *this;
}

FloatCell &FloatCell::operator-(const FloatCell &rhs) {
    valor = valor - rhs.valor;
    return *this;
}

FloatCell &FloatCell::operator-(float rhs) {
    valor = valor - rhs;
    return *this;
}

FloatCell &FloatCell::operator*(const FloatCell &rhs) {
    valor = valor * rhs.valor;
    return *this;
}

FloatCell &FloatCell::operator*(float rhs) {
    valor = valor * rhs;
    return *this;
}

FloatCell &FloatCell::operator/(const FloatCell &rhs) {
    valor = valor / rhs.valor;
    return *this;
}

FloatCell &FloatCell::operator/(float rhs) {
    valor = valor / rhs;
    return *this;
}

FloatCell &FloatCell::operator%(const FloatCell &rhs) {
    valor = valor / rhs.valor;
    return *this;
}

FloatCell &FloatCell::operator%(float rhs) {
    valor = valor / rhs;
    return *this;
}

FloatCell &FloatCell::operator<(const FloatCell &rhs) {
    valor = valor < rhs.valor;
    return *this;
}

FloatCell &FloatCell::operator<(float rhs) {
    valor = valor < rhs;
    return *this;
}

FloatCell &FloatCell::operator>(const FloatCell &rhs) {
    valor = valor > rhs.valor;
    return *this;
}

FloatCell &FloatCell::operator>(float rhs) {
    valor = valor > rhs;
    return *this;
}

FloatCell &FloatCell::operator==(const FloatCell &rhs) {
    valor = valor == rhs.valor;
    return *this;
}

FloatCell &FloatCell::operator==(float rhs) {
    valor = valor == rhs;
    return *this;
}

FloatCell &FloatCell::operator<=(const FloatCell &rhs) {
    valor = valor <= rhs.valor;
    return *this;
}

FloatCell &FloatCell::operator<=(float rhs) {
    valor = valor <= rhs;
    return *this;
}

FloatCell &FloatCell::operator>=(const FloatCell &rhs) {
    valor = valor >= rhs.valor;
    return *this;
}

FloatCell &FloatCell::operator>=(float rhs) {
    valor = valor >= rhs;
    return *this;
}

FloatCell &FloatCell::operator!=(const FloatCell &rhs) {
    valor = valor != rhs.valor;
    return *this;
}

FloatCell &FloatCell::operator!=(float rhs) {
    valor = valor != rhs;
    return *this;
}


float FloatCell::getValor() const {
    return valor;
}

void FloatCell::setValor(float nValor) {
    valor = nValor;
}