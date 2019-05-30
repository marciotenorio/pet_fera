#ifndef __NATIVE_MAMMAL_H
#define __NATIVE_MAMMAL_H

#include "native_animal.h"
#include "mammal.h"


class NativeMammal: public NativeAnimal, public Mammal {
    public:
        NativeMammal();
        string format_csv();
        friend istream &operator>>(istream &input, NativeMammal &native_mammal);
        friend ostream &operator<<(ostream &output, const NativeMammal &native_mammal);
};

#endif