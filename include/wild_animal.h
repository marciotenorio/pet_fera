#ifndef __WILD_ANIMAL_H
#define __WILD_ANIMAL_H

#include <iostream>

using namespace std;


class WildAnimal{
    protected:
        string ibama_authorization; // Atributo protegido da classe Animal Selvagem

    public:
        WildAnimal(string ibama_authorization);
        WildAnimal();
        string get_ibama_authorization();
        void set_ibama_authorization(string ibama_authorization);
        friend istream &operator>>(istream &input, WildAnimal &wild_animal);
        friend ostream &operator<<(ostream &output, const WildAnimal &wild_animal);
};

#endif