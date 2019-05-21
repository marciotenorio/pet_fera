#include "native_animal.h"
#include "bird.h"


class NativeBird: public NativeAnimal, public Bird {
    public:
        NativeBird();
        ~NativeBird();
        friend istream &operator>>(istream &input, NativeBird &native_bird);
        friend ostream &operator<<(ostream &output, const NativeBird &native_bird);
};
