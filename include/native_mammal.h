#include "native_animal.h"
#include "mammal.h"


class NativeMammal: public NativeAnimal, public Mammal {
    public:
        NativeMammal();
        ~NativeMammal();
};
