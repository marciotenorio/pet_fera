#include "native_animal.h"
#include "mammal.h"


class NativeMammal: public NativeAnimal, public Mammal {
    public:
        NativeMammal();
        ~NativeMammal();
        friend istream &operator>>(istream &input, NativeMammal &native_mammal);
        friend ostream &operator<<(ostream &output, const NativeMammal &native_mammal);
};
