#ifndef UNTITLED1_CHARCELL_H
#define UNTITLED1_CHARCELL_H

class CharCell {
public:
    //Constructor Implicito
    CharCell();

    //Constructor por Copia
    CharCell(const CharCell &rhs);

    //Constructor por paso de parametros
    CharCell(char valor);

    //Destructor
    ~CharCell() = default;

    //Operador "="
    CharCell &operator=(const CharCell &rhs);
    CharCell &operator=(char nValor);

    //Operador "+"
    CharCell &operator+(const CharCell &rhs);
    CharCell &operator+(char nValor);

    //Operador "-"
    CharCell &operator-(const CharCell &rhs);
    CharCell &operator-(char nValor);

    //operador de valor igual
    CharCell &operator!=(const CharCell &rhs);
    CharCell &operator!=(char nValor);

    CharCell &operator!=(const CharCell &rhs);
    CharCell &operator!=(char nValor);

    char getValor() const;

    void setValor(char nValor);
private:
    char valor;
};

#endif //UNTITLED1_CHARCELL_H
