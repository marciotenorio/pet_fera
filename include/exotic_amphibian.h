#include "exotic_animal.h"
#include "amphibian.h"


class ExoticAmphibian: public ExoticAnimal, public Amphibian {
    public:
        ExoticAmphibian(); // Construtor padrão da classe Anfíbios Exóticos
        ~ExoticAmphibian(); // Destrutor da classe Anfíbios Exóticos
};
