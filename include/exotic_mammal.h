#include "exotic_animal.h"
#include "mammal.h"


class ExoticMammal: public ExoticAnimal, public Mammal {
    public:
        ExoticMammal();
        ~ExoticMammal();
        friend istream &operator>>(istream &input, ExoticMammal &exotic_mammal);
        friend ostream &operator<<(ostream &output, const ExoticMammal &exotic_mammal);       
};
