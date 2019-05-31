#ifndef __MAMMAL_H
#define __MAMMAL_H

#include <string>
#include "animal.h"

using namespace std;


class Mammal: public Animal { /* A classe Mamífero herda os atributos da classe Animal */
    protected:
        string hair_color; //Atributo inerente a classe Mamifero
        Mammal(string hair_color);
        Mammal(); /* Construtor Padrão */
    public:
        string get_hair_color();
        void set_hair_color(string hair_color);
        friend istream &operator>>(istream &input, Mammal &mammal);
        friend ostream &operator<<(ostream &output, const Mammal &mammal);
};

#endif