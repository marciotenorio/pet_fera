#ifndef __NATIVE_ANIMAL_H
#define __NATIVE_ANIMAL_H

#include <string>
#include "wild_animal.h"

using namespace std;


class NativeAnimal: public WildAnimal { // Classe Animal nativo herda os atributos da classe Animal Selvagem
    protected:
    	//Atributos da classe Animal Nativo
        string uf_origin;
        string authorization;

    public:
        NativeAnimal(string uf_origin, string authorization);
        string get_uf_origin();
        void set_uf_origin(string uf_origin);
        string get_authorization();
        void set_authorization(string authorization);
        string get_type();
        friend istream &operator>>(istream &input, NativeAnimal &native_animal);
        friend ostream &operator<<(ostream &output, const NativeAnimal &native_animal);        
};

#endif