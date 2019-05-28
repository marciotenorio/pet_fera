#include "native_amphibian.h"

NativeAmphibian::NativeAmphibian(

):NativeAnimal(
    uf_origin,
    authorization
),Amphibian(
    total_seedlings,
    last_molt
){}

string NativeAmphibian::format_csv(){
    return to_string(id) + ";"
           + class_ + ";"
           + scientific_name + ";"
           + to_string(gender) + ";"
           + to_string(size) + ";"
           + diet + ";"
           + baptismal_name + ";"
           + to_string(veterinary_id) + ";"
           + to_string(handler_id) + ";"
           + to_string(total_seedlings) + ";"
           + last_molt + ";"
           + uf_origin + ";"
           + authorization + ";"
           + "\n";
}

istream &operator>>(istream &input, NativeAmphibian &native_amphibian){
    input >> static_cast<NativeAnimal &>(native_amphibian);
    input >> static_cast<Amphibian &>(native_amphibian);

    return input;
}
ostream &operator<<(ostream &output, const NativeAmphibian &native_amphibian){
    output << static_cast<const NativeAnimal &>(native_amphibian);
    output << static_cast<const Amphibian &>(native_amphibian);

    return output;
}