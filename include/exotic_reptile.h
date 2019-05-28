#include "exotic_animal.h"
#include "reptile.h"


class ExoticReptile: public ExoticAnimal, public Reptile {
    public:
        ExoticReptile();
        string format_csv();
        friend istream &operator>>(istream &input, ExoticReptile &exotic_reptile);
        friend ostream &operator<<(ostream &output, const ExoticReptile &exotic_reptile);
};
