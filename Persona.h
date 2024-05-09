//
// Created by zamor on 09/04/2024.
//

#ifndef CLIONPROJECTS_PERSONA_H
#define CLIONPROJECTS_PERSONA_H

#include <iostream>
#include <string>
class Persona {
public:
    //Constructor Implicito
    Persona();

    //Constructor por Copia
    Persona(const Persona &rhs);

    //Constructor con parametros
    Persona(const std::string &nombre, const std::string &altura, const std::string &genero, int peso, int edad);

    //Destructor
    ~Persona() = default;

    //Operador "="
    Persona &operator= (const Persona &rhs);

    int getEdad() const;
    void setEdad(int edad);
    int getPeso() const;
    void setPeso(int peso);
    std::string getNombre() const;
    void setNombre(std::string nombre);
    std::string getAltura() const;
    void setAltura(std::string altura);
    std::string getGenero() const;
    void setGenero(std::string genero);

private:
    std::string nombre;
    std::string altura;
    std::string genero;
    int peso;
    int edad;
};

#endif //CLIONPROJECTS_PERSONA_H
