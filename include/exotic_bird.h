#include "exotic_animal.h"
#include "bird.h"


class ExoticBird: public ExoticAnimal, public Bird {
    public:
        ExoticBird();
        ~ExoticBird();
        friend istream &operator>>(istream &input, ExoticBird &exotic_bird);
        friend ostream &operator<<(ostream &output, const ExoticBird &exotic_bird);
        
};
