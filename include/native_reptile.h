#include "native_animal.h"
#include "reptile.h"


class NativeReptile: public NativeAnimal, public Reptile {
    public:
        NativeReptile();
        ~NativeReptile();
};
