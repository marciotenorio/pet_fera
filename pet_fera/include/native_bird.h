#include "native_animal.h"
#include "bird.h"


class NativeBird: public NativeAnimal, public Bird { // Classe Pássaro Nativo herda os atributos da classe Animal Nativo e da classe Pássaro
    public:
        NativeBird(); // Construtor padrão da classe Pássaro Nativo
        ~NativeBird(); // Destrutor da classe Pássaro Nativo
};
