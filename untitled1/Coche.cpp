#include "Coche.h"
#include <iostream>
#include <string>

//Constructor Implicito
Coche::Coche(){
    marca = "Unknown";
    modelo = "Unknown";
    duenio = "Unknown";
    anioDeFabricacion = 0;
    kilometraje = 0;
}

//Constructor por Copia
Coche::Coche(const Coche &rhs) {
    marca = rhs.marca;
    modelo = rhs.modelo;
    duenio = rhs.duenio;
    anioDeFabricacion = rhs.anioDeFabricacion;
    kilometraje = rhs.kilometraje;
}

//Constructor con parametros
Coche::Coche(const std::string &marca, const std::string &modelo, const std::string &duenio, int anioDeFabricacion, int kilometraje)
        : marca(marca), modelo(modelo), duenio(duenio), anioDeFabricacion(anioDeFabricacion), kilometraje(kilometraje) {
    this -> marca = marca;
    this -> modelo = modelo;
    this -> duenio = duenio;
    this -> anioDeFabricacion = anioDeFabricacion;
    this -> kilometraje = kilometraje;
}

//Sobrecarga de Operadores "="
Coche &Coche::operator=(const Coche &rhs) {
    this -> marca = rhs.marca;
    this -> modelo = rhs.modelo;
    this -> duenio = rhs.duenio;
    this -> anioDeFabricacion = rhs.anioDeFabricacion;
    this -> kilometraje = rhs.kilometraje;
}