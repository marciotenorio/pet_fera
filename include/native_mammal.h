#include "native_animal.h"
#include "mammal.h"


class NativeMammal: public NativeAnimal, public Mammal { // Classe Mamífero Nativo herda os atributos da classe Animal Nativo e da classe Mamífero
    public:
        NativeMammal(); // Construtor padrão da classe Mamífero Nativo
        ~NativeMammal(); // Destrutor da classe Mamífero Nativo
};
