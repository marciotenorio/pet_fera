#include "native_mammal.h"

NativeMammal::NativeMammal(

):NativeAnimal(
    uf_origin,
    authorization,
    type
):Mammal(
    hair_color
){}

istream &operator>>(istream &input, NativeMammal &native_mammal){
    input >> static_cast<NativeAnimal &>(native_mammal);
    input >> static_cast<Mammal &>(native_mammal);

    return input;
}
ostream &operator<<(ostream &output, const NativeMammal &native_mammal){
    output >> static_cast<const NativeAnimal &>(native_mammal);
    output >> static_cast<const Mammal &>(native_mammal);

    return output;
}