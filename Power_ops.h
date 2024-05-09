//
// Created by zamor on 16/04/2024.
//

#ifndef CLIONPROJECTS_POWER_OPS_H
#define CLIONPROJECTS_POWER_OPS_H

#include <iostream>
#include <string>
class Power_ops {
public:
    //Constructor Implicito
    Power_ops();

    //Constructor por Copia
    Power_ops(const Power_ops &rhs);

    //Constructor con parametros
    Power_ops(const std::string &aumentoPoder, const std::string &senkai, const std::string &habilidadNUeva);

    //Destructor
    ~Power_ops() = default;

    //Operador "="
    Power_ops &operator= (const Power_ops &rhs);

    std::string getAumentoPoder() const;
    void setAumentoPoder(std::string aumentoPoder);
    std::string getSenkai() const;
    void setSenkai(std::string senkai);
    std::string getHabilidadNUeva() const;
    void setHabilidadNUeva(std::string habilidadNUeva);

private:
    std::string aumentoPoder;
    std::string senkai;
    std::string habilidadNUeva;
};

#endif //CLIONPROJECTS_POWER_OPS_H
