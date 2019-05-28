#include "native_animal.h"
#include "amphibian.h"


class NativeAmphibian: public NativeAnimal, public Amphibian { // Classe Anfíbio nativo herda os atributos da classe Animal Nativo e da classe Anfíbio
    public:
        NativeAmphibian(); // Construtor padrão da classe Anfíbio Nativo
        ~NativeAmphibian(); // Destrutor da classe Anfíbio Nativo
};
