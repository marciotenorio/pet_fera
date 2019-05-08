#include "native_animal.h"
#include "bird.h"


class NativeBird: public NativeAnimal, public Bird {
    public:
        NativeBird();
        ~NativeBird();
};
