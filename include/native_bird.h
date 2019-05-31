#ifndef __NATIVE_BIRD_H
#define __NATIVE_BIRD_H

#include "native_animal.h"
#include "bird.h"


class NativeBird: public NativeAnimal, public Bird { // Classe Pássaro Nativo herda os atributos da classe Animal Nativo e da classe Pássaro
    public:
        NativeBird();
        string format_csv();
        friend istream &operator>>(istream &input, NativeBird &native_bird);
        friend ostream &operator<<(ostream &output, const NativeBird &native_bird);
};

#endif