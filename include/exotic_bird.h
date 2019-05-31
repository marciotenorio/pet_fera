#include "exotic_animal.h"
#include "bird.h"


class ExoticBird: public ExoticAnimal, public Bird { // Classe Pássado Exótico herda os atributos da classe Animal Exótico
    public:
        ExoticBird(); // Construtor padrão da classe Pássaro Exótico 
        ~ExoticBird(); //Construtor padrão da classe Pássaro Exótico
};
