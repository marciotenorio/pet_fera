#include "exotic_animal.h"
#include "reptile.h"


class ExoticReptile: public ExoticAnimal, public Reptile { // Classe Réptil Exótico herda os atributos da classe Animal Exótico
    public:
        ExoticReptile(); // Construtor padrão da classe Réptil Exótico
        ~ExoticReptile(); // Destrutor da classe Réptil Exótico
};
