//
// Created by zamor on 09/04/2024.
//

#ifndef UNTITLED1_BOOLEANOS_H
#define UNTITLED1_BOOLEANOS_H

class Booleanos {
public:
    // Constructores
    Booleanos();
    Booleanos(const Booleanos &rhs);
    Booleanos(bool valor);

    // Destructor
    ~Booleanos() = default;

    // Operadores de asignación
    Booleanos &operator=(const Booleanos &rhs);
    Booleanos &operator=(bool valor);

    // Operadores lógicos
    Booleanos operator&&(const Booleanos &rhs) const;
    Booleanos operator&&(bool valor) const;

    Booleanos operator||(const Booleanos &rhs) const;
    Booleanos operator||(bool valor) const;

    Booleanos operator!() const;

    // Getter y Setter
    bool getValor() const;
    void setValor(bool valor);

private:
    bool valor;
};

#endif //UNTITLED1_BOOLEANO_H
