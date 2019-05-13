#include "exotic_animal.h"
#include "amphibian.h"


class ExoticAmphibian: public ExoticAnimal, public Amphibian {
    public:
        ExoticAmphibian();
        ~ExoticAmphibian();
};
