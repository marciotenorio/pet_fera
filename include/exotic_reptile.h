#include "exotic_animal.h"
#include "reptile.h"


class ExoticReptile: public ExoticAnimal, public Reptile {
    public:
        ExoticReptile();
        ~ExoticReptile();
        friend istream &operator>>(istream &input, ExoticMammal &exotic_mammal);
        friend ostream &operator<<(ostream &output, const ExoticMammal &exotic_mammal);
};
