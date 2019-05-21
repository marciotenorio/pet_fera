#include "native_reptile.h"

NativeReptile::NativeReptile(

):NativeAnimal(
    uf_origin,
    authorization,
    type
):Reptile(
    venomous,
    venom_type
){}

istream &operator>>(istream &input, NativeReptile &native_reptile){
    input >> static_cast<NativeAnimal &>(native_reptile);
    input >> static_cast<Reptile &>(native_reptile);

    return input;
}
ostream &operator<<(ostream &output, const NativeReptile &native_reptile){
    output >> static_cast<const NativeAnimal &>(native_reptile);
    output >> static_cast<const Reptile &>(native_reptile);

    return output;
}