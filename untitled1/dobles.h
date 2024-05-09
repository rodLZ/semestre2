//
// Created by zamor on 09/04/2024.
//

#ifndef UNTITLED1_DOBLES_H
#define UNTITLED1_DOBLES_H

class Dobles {
public:
    // Constructores
    Dobles();
    Dobles(const Dobles &rhs);
    Dobles(double valor);

    // Destructor
    ~Dobles() = default;

    // Operadores de asignación
    Dobles &operator=(const Dobles &rhs);
    Dobles &operator=(double valor);

    // Operadores aritméticos
    Dobles & operator+(const Dobles &rhs);
    Dobles &operator+(double valor);

    Dobles &operator-(const Dobles &rhs);
    Dobles &operator-(double valor);

    Dobles &operator*(const Dobles &rhs);
    Dobles &operator*(double valor);

    Dobles &operator/(const Dobles &rhs);
    Dobles &operator/(double valor);

    // Operadores de comparación
    bool operator<(const Dobles &rhs) const;
    bool operator<(double valor) const;

    bool operator>(const Dobles &rhs) const;
    bool operator>(double valor) const;

    bool operator==(const Dobles &rhs) const;
    bool operator==(double valor) const;

    bool operator<=(const Dobles &rhs) const;
    bool operator<=(double valor) const;

    bool operator>=(const Dobles &rhs) const;
    bool operator>=(double valor) const;

    bool operator!=(const Dobles &rhs) const;
    bool operator!=(double valor) const;

    // Getter y Setter
    double getValor() const;
    void setValor(double valor);

private:
    double valor;
};

#endif //UNTITLED1_DOBLES_H
