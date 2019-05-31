#include "animal.h"


class Bird: public Animal {
    protected:
        double nozzle_size_cm; //Atributo inerente a classe Passaro
        double wingspan; //Atributo inerente a classe Passaro

    public:
        Bird(); //Construtor padrão da classe Passaro
        ~Bird(); //Destrutor da classe Passaro
};
