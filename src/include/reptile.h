#include <string>
#include "animal.h"

using namespace std;


class Reptile: public Animal {
    protected:
        bool venomous;
        string venom_type;

    public:
        Reptile();
        ~Reptile();
};
