//
// Created by zamor on 21/03/2024.
//

#ifndef UNTITLED1_FLOATCELL_H
#define UNTITLED1_FLOATCELL_H


class FloatCell {
public:
    //Constructor Implicito
    FloatCell();

    //Constructor por Copia
    FloatCell(const FloatCell &rhs);

    //Constructor por paso de parametros
    FloatCell(float valor);

    //Destructor
    ~FloatCell() = default;

    //Operador "="
    FloatCell &operator=(const FloatCell &rhs);
    FloatCell &operator=(float nValor);

    //Operador "+"
    FloatCell &operator+(const FloatCell &rhs);
    FloatCell &operator+(float nValor);

    //Operador "-"
    FloatCell &operator-(const FloatCell &rhs);
    FloatCell &operator-(float nValor);

    //Operador "*"
    FloatCell &operator*(const FloatCell &rhs);
    FloatCell &operator*(float nValor);

    //Operador "/"
    FloatCell &operator/(const FloatCell &rhs);
    FloatCell &operator/(float nValor);

    //Operador "%"
    FloatCell &operator%(const FloatCell &rhs);
    FloatCell &operator%(float nValor);

    //operador de menor que
    FloatCell &operator<(const FloatCell &rhs);
    FloatCell &operator<(float nValor);

    //operador de mayor que
    FloatCell &operator>(const FloatCell &rhs);
    FloatCell &operator>(float nValor);

    //operador de valor igual
    FloatCell &operator==(const FloatCell &rhs);
    FloatCell &operator==(float nValor);

    //operador de igual o menor que
    FloatCell &operator<=(const FloatCell &rhs);
    FloatCell &operator<=(float nValor);

    //operador de igual o menor que
    FloatCell &operator>=(const FloatCell &rhs);
    FloatCell &operator>=(float nValor);

    //operador de negacion
    FloatCell &operator!=(const FloatCell &rhs);
    FloatCell &operator!=(float nValor);
    float getValor() const;

    void setValor(float nValor);
private:
    float valor;
};


#endif //UNTITLED1_FLOATCELL_H
