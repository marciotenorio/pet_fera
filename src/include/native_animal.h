#include <string>
#include "wild_animal.h"

using namespace std;


class NativeAnimal: public WildAnimal {
    protected:
        string uf_origin;
        string authorization;

    public:
        NativeAnimal(string c_uf_origin, string c_authorization);
        ~NativeAnimal();
};
