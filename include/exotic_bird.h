#ifndef __EXOTIC_BIRD_
#define __EXOTIC_BIRD_

#include "exotic_animal.h"
#include "bird.h"


class ExoticBird: public ExoticAnimal, public Bird { // Classe Pássado Exótico herda os atributos da classe Animal Exótico
    public:
        ExoticBird();
        string format_csv();
        friend istream &operator>>(istream &input, ExoticBird &exotic_bird);
        friend ostream &operator<<(ostream &output, const ExoticBird &exotic_bird);
        
};

#endif