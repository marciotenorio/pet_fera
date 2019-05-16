#include <string>
#include "animal.h"

using namespace std;


class Reptile: public Animal {
    protected:
        bool venomous;
        string venom_type;

    public:
        Reptile(bool c_venomous, string c_venom_type);
        ~Reptile();
};
