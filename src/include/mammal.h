#include <string>
#include "animal.h"

using namespace std;


class Mammal: public Animal {
    protected:
        string hair_color;

    public:
        Mammal();
        ~Mammal();
};
