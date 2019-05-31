#ifndef __REPTILE_H
#define __REPTILE_H

#include <string>
#include "animal.h"

using namespace std;


class Reptile: public Animal { // Classe Réptil herda os atributos da classe Animal
    protected:
        bool venomous; //Atributo inerente a classe Réptil
        string venom_type; //Atributo inerente a classe Réptil

        Reptile(bool venomous, string venom_type);
        Reptile();
    public:
        bool get_venomous();
        void set_venomous(bool venomous);
        string get_venom_type();
        void set_venom_type(string venom_type);
        friend istream &operator>>(istream &input, Reptile &reptile);
        friend ostream &operator<<(ostream &output, const Reptile &reptile);
};

#endif