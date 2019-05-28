#include "native_animal.h"
#include "bird.h"


class NativeBird: public NativeAnimal, public Bird {
    public:
        NativeBird();
        string format_csv();
        friend istream &operator>>(istream &input, NativeBird &native_bird);
        friend ostream &operator<<(ostream &output, const NativeBird &native_bird);
};
