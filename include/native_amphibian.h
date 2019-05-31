#ifndef __NATIVE_AMPHIBIAN_H
#define __NATIVE_AMPHIBIAN_H

#include "native_animal.h"
#include "amphibian.h"


class NativeAmphibian: public NativeAnimal, public Amphibian { // Classe Anfíbio nativo herda os atributos da classe Animal Nativo e da classe Anfíbio
    public:
        NativeAmphibian();
        string format_csv();
        friend istream &operator>>(istream &input, NativeAmphibian &native_amphibian);
        friend ostream &operator<<(ostream &output, const NativeAmphibian &native_amphibian);
};

#endif