#include <string>
#include "wild_animal.h"

using namespace std;


class ExoticAnimal: public WildAnimal { // Classe Animal Exótico herda os atributos da classe Animal Selvagem
    protected:
        string country_origin;  // Atributo protegido da classe Animal Exótico

    public:
        ExoticAnimal(); // Construtor padrão da classe Animais Exóticos 
        ~ExoticAnimal(); // Destrutor da classe Animais Exóticos
};
