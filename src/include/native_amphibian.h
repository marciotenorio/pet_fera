#include "native_animal.h"
#include "amphibian.h"


class NativeAmphibian: public NativeAnimal, public Amphibian {
    public:
        NativeAmphibian();
        ~NativeAmphibian();
};
