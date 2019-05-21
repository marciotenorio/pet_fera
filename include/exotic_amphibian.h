#include "exotic_animal.h"
#include "amphibian.h"


class ExoticAmphibian: public ExoticAnimal, public Amphibian {
    public:
        ExoticAmphibian();
        ~ExoticAmphibian();
        friend istream &operator>>(istream &input, ExoticAmphibian &exotic_amphibian);
        friend ostream &operator<<(ostream &output, const ExoticAmphibian &exotic_amphibian);
};
