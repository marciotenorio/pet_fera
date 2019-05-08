#include "exotic_animal.h"
#include "reptile.h"


class ExoticReptile: public ExoticAnimal, public Reptile {
    public:
        ExoticReptile();
        ~ExoticReptile();
};
