#include "exotic_animal.h"
#include "mammal.h"


class ExoticMammal: public ExoticAnimal, public Mammal {
    public:
        ExoticMammal();
        ~ExoticMammal();
};
