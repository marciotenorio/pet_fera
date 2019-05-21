#include "native_animal.h"
#include "amphibian.h"


class NativeAmphibian: public NativeAnimal, public Amphibian {
    public:
        NativeAmphibian();
        ~NativeAmphibian();
        friend istream &operator>>(istream &input, NativeAmphibian &native_amphibian);
        friend ostream &operator<<(ostream &output, const NativeAmphibian &native_amphibian);
};
