#include <string>
#include "animal.h"

using namespace std;


class Mammal: public Animal {
    protected:
        string hair_color;

        Mammal(string hair_color);
        Mammal();
    public:
        string get_hair_color();
        void set_hair_color(string hair_color);
        friend istream &operator>>(istream &input, Mammal &mammal);
        friend ostream &operator<<(ostream &output, const Mammal &mammal);
};
