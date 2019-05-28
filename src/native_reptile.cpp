#include "native_reptile.h"

NativeReptile::NativeReptile(

):NativeAnimal(
    uf_origin,
    authorization
),Reptile(
    venomous,
    venom_type
){}

string NativeReptile::format_csv(){
    return to_string(id) + ";"
           + class_ + ";"
           + scientific_name + ";"
           + to_string(gender) + ";"
           + to_string(size) + ";"
           + diet + ";"
           + baptismal_name + ";"
           + to_string(veterinary_id) + ";"
           + to_string(handler_id) + ";"
           + to_string(venomous) + ";"
           + venom_type + ";"
           + uf_origin + ";"
           + authorization + ";"
           + "\n";
}

istream &operator>>(istream &input, NativeReptile &native_reptile){
    input >> static_cast<NativeAnimal &>(native_reptile);
    input >> static_cast<Reptile &>(native_reptile);

    return input;
}
ostream &operator<<(ostream &output, const NativeReptile &native_reptile){
    output << static_cast<const NativeAnimal &>(native_reptile);
    output << static_cast<const Reptile &>(native_reptile);

    return output;
}