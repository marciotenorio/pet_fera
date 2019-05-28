#include <string>
#include "wild_animal.h"

using namespace std;


class NativeAnimal: public WildAnimal { // Classe Animal nativo herda os atributos da classe Animal Selvagem
    protected:
    	//Atributos da classe Animal Nativo
        string uf_origin;
        string authorization;

    public:
        NativeAnimal(); // Construtor padrão da classe Anfíbio Nativo
        ~NativeAnimal(); // Destrutor da classe Anfíbio Nativo
};
