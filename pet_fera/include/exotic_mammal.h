#include "exotic_animal.h"
#include "mammal.h"


class ExoticMammal: public ExoticAnimal, public Mammal { // Classe Mamífero Exótico herda os atributos da classe Animal Exótico
    public:
        ExoticMammal(); // Construtor padrão da classe Mamífero Exótico
        ~ExoticMammal(); // Destrutor da classe Mamífero Exótico
};
