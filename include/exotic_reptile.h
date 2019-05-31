#ifndef __EXOTIC_REPTILE_H
#define __EXOTIC_REPTILE_H

#include "exotic_animal.h"
#include "reptile.h"


class ExoticReptile: public ExoticAnimal, public Reptile { // Classe Réptil Exótico herda os atributos da classe Animal Exótico
    public:
        ExoticReptile(); /* Construtor padrão */
        string format_csv();
        friend istream &operator>>(istream &input, ExoticReptile &exotic_reptile);
        friend ostream &operator<<(ostream &output, const ExoticReptile &exotic_reptile);
};

#endif