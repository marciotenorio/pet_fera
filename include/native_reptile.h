#ifndef __NATIVE_REPTILE_H
#define __NATIVE_REPTILE_H

#include "native_animal.h"
#include "reptile.h"


class NativeReptile: public NativeAnimal, public Reptile { // Classe Réptil Nativo herda os atributos da classe Animal Nativo e da classe Réptil
    public:
        NativeReptile();
        string format_csv();
        friend istream &operator>>(istream &input, NativeReptile &native_reptile);
        friend ostream &operator<<(ostream &output, const NativeReptile &native_reptile);
};

#endif