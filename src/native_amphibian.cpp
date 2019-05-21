#include "native_amphibian.h"

NativeAmphibian::NativeAmphibian(

):NativeAnimal(
    uf_origin,
    authorization,
    type
):Amphibian(
    total_seedlings,
    last_molt
){}

istream &operator>>(istream &input, NativeAmphibian &native_amphibian){
    input >> static_cast<NativeAnimal &>(native_amphibian);
    input >> static_cast<Amphibian &>(native_amphibian);

    return input;
}
ostream &operator<<(ostream &output, const NativeAmphibian &native_amphibian){
    output >> static_cast<const NativeAnimal &>(native_amphibian);
    output >> static_cast<const Amphibian &>(native_amphibian);

    return output;
}