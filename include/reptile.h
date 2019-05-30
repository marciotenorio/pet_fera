#include <string>
#include "animal.h"

using namespace std;


class Reptile: public Animal { // Classe Réptil herda os atributos da classe Animal
    protected:
        bool venomous; //Atributo inerente a classe Réptil
        string venom_type; //Atributo inerente a classe Réptil

    public:
        Reptile(); //Construtor da classe Réptil
        ~Reptile(); //Destrutor da classe Réptil
};
