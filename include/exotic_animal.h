#ifndef __EXOTIC_ANIMAL_H
#define __EXOTIC_ANIMAL_H

#include "wild_animal.h"

using namespace std;


class ExoticAnimal: public WildAnimal {  /* Animal exótico herda os atributos da classe Animal selvagem*/
    protected:
        string country_origin;
    public:
        ExoticAnimal(string country_origin);
        ExoticAnimal();
        string get_country_origin();
        void set_country_origin(string country_origin);
        friend istream &operator>>(istream &input, ExoticAnimal &exotic_animal);
        friend ostream &operator<<(ostream &output, const ExoticAnimal &exotic_animal);
};

#endif