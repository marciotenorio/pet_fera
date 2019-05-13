#include "exotic_animal.h"
#include "bird.h"


class ExoticBird: public ExoticAnimal, public Bird {
    public:
        ExoticBird();
        ~ExoticBird();
};
