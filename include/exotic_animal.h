#include <string>
#include "wild_animal.h"

using namespace std;


class ExoticAnimal: public WildAnimal {
    protected:
        string country_origin;

    public:
        ExoticAnimal();
        ~ExoticAnimal();
};
