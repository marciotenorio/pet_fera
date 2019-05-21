#include "native_bird.h"

NativeBird::NativeBird(

):NativeAnimal(
    uf_origin,
    authorization,
    type
):Bird(
    nozzle_size_cm,
    wingspan
){}

istream &operator>>(istream &input, NativeBird &native_bird){
    input >> static_cast<NativeAnimal &>(native_bird);
    input >> static_cast<Bird &>(native_bird);

    return input;
}
ostream &operator<<(ostream &output, const NativeBird &native_bird){
    output >> static_cast<const NativeAnimal &>(native_bird);
    output >> static_cast<const Bird &>(native_bird);

    return output;
}