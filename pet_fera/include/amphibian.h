#include <ctime>
#include "animal.h"


class Amphibian: public Animal {
    protected:
        int total_seedlings; //Atributos inerentes a classe anfibios
        time_t last_molt; //Atributos inerentes a classe anfibios

    public:
        Amphibian(); //Construtor padrão da classe anfibios
        ~Amphibian(); //Destrutor da classe anfibios
};
