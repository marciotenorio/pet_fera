#ifndef __ANIMAL_H
#define __ANIMAL_H

#include <string>
#include "veterinary.h" 
#include "handler.h"

using namespace std;


class Animal { // Atributos protegidos da classe Animal
    protected:
        int id;
        string class_;
        string scientific_name;
        char gender;
        double size;
        string diet;
        string baptismal_name;
        Veterinary veterinary;
        Handler handler;

    public:
        Animal(); //Construtor padrão da classe Animal
        Animal(int p_id, string p_class_, string p_baptismal_name); // Construtor Cópia da classe Animal
        ~Animal(); // Destrutor da classe Animal
};

#endif
