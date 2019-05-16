#include <string>
#include "animal.h"

using namespace std;


class Reptile: public Animal {
    protected:
        bool venomous;
        string venom_type;

        Reptile(bool c_venomous, string c_venom_type);
        //~Reptile();
    public:
        bool get_venomous();
        void set_venomous(bool venomous);
        string get_venom_type();
        void set_venom_type(string venom_type);
        friend istream &operator>>(istream &input, Reptile &reptile);
        friend ostream &operator<<(ostream &output, const Reptile &reptile);
};
