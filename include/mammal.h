#include <string>
#include "animal.h"

using namespace std;


class Mammal: public Animal {
    protected:
        string hair_color; //Atributo inerente a classe Mamifero


    public:
        Mammal(); //Construtor padrão da classe Passaro
        ~Mammal(); //Destrutor da classe Passaro

};
