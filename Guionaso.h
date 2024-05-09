//
// Created by zamor on 16/04/2024.
//

#ifndef CLIONPROJECTS_GUIONASO_H
#define CLIONPROJECTS_GUIONASO_H

#include <iostream>
#include <string>
class Guionaso {
public:
    //Constructor Implicito
    Guionaso();

    //Constructor por Copia
    Guionaso(const Guionaso &rhs);

    //Constructor con parametros
    Guionaso(const std::string &aumentoExesivo, const std::string &recuendosDesblo, const std::string &openin);

    //Destructor
    ~Guionaso() = default;

    //Operador "="
    Guionaso &operator= (const Guionaso &rhs);

    std::string getAumentoExesivo() const;
    void setAumentoExesivo(std::string aumentoExesivo);
    std::string getRecuendosDesblo() const;
    void setRecuendosDesblo(std::string recuendosDesblo);
    std::string getOpenin() const;
    void setOpenin(std::string openin);

private:
    std::string aumentoExesivo;
    std::string recuendosDesblo;
    std::string openin;
};

#endif //CLIONPROJECTS_GUIONASO_H
