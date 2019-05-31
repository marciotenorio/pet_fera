#ifndef __EXOTIC_MAMMAL_H
#define __EXOTIC_MAMMAL_H

#include "exotic_animal.h"
#include "mammal.h"


class ExoticMammal: public ExoticAnimal, public Mammal { // Classe Mamífero Exótico herda os atributos da classe Animal Exótico
    public:
        ExoticMammal();
        string format_csv();
        friend istream &operator>>(istream &input, ExoticMammal &exotic_mammal);
        friend ostream &operator<<(ostream &output, const ExoticMammal &exotic_mammal);       
};

#endif