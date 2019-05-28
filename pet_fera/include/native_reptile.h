#include "native_animal.h"
#include "reptile.h"


class NativeReptile: public NativeAnimal, public Reptile { // Classe Réptil Nativo herda os atributos da classe Animal Nativo e da classe Réptil
    public:
        NativeReptile(); // Construtor padrão da classe Réptil Nativo
        ~NativeReptile(); // Destrutor da classe Réptil Nativo
};
