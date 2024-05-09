//
// Created by zamor on 09/04/2024.
//

#ifndef UNTITLED1_ENTEROS_H
#define UNTITLED1_ENTEROS_H

class Enteros {
public:
    // Constructores
    Enteros();
    Enteros(const Enteros &rhs);
    Enteros(int valor);

    // Destructor
    ~Enteros() = default;

    // Operadores de asignación
    Enteros &operator=(const Enteros &rhs);
    Enteros &operator=(int valor);

    // Operadores aritméticos
    Enteros &operator+(const Enteros &rhs);
    Enteros &operator+(int valor);

    Enteros &operator-(const Enteros &rhs);
    Enteros &operator-(int valor);

    Enteros &operator*(const Enteros &rhs);
    Enteros &operator*(int valor);

    Enteros &operator/(const Enteros &rhs);
    Enteros &operator/(int valor);

    Enteros &operator%(const Enteros &rhs);
    Enteros &operator%(int valor);

    // Operadores de comparación
    bool operator<(const Enteros &rhs) const;
    bool operator<(int valor) const;

    bool operator>(const Enteros &rhs) const;
    bool operator>(int valor) const;

    bool operator==(const Enteros &rhs) const;
    bool operator==(int valor) const;

    bool operator<=(const Enteros &rhs) const;
    bool operator<=(int valor) const;

    bool operator>=(const Enteros &rhs) const;
    bool operator>=(int valor) const;

    bool operator!=(const Enteros &rhs) const;
    bool operator!=(int valor) const;

    // Getter y Setter
    int getValor() const;
    void setValor(int valor);

private:
    int valor;
};

#endif //UNTITLED1_ENTEROS_H
