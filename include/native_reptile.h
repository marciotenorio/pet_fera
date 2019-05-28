#include "native_animal.h"
#include "reptile.h"


class NativeReptile: public NativeAnimal, public Reptile {
    public:
        NativeReptile();
        string format_csv();
        friend istream &operator>>(istream &input, NativeReptile &native_reptile);
        friend ostream &operator<<(ostream &output, const NativeReptile &native_reptile);
};
