#include <string>
#include "animal.h"

using namespace std;


class Mammal: public Animal {
    protected:
        string hair_color;

    public:
        Mammal(string c_hair_color);
        ~Mammal();
};
