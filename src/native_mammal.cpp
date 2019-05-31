#include "native_mammal.h"

NativeMammal::NativeMammal(

):NativeAnimal(
    uf_origin,
    authorization
),Mammal(
    hair_color
){}

string NativeMammal::format_csv(){
    return to_string(id) + ";"
           + class_ + ";"
           + scientific_name + ";"
           + to_string(gender) + ";"
           + to_string(size) + ";"
           + diet + ";"
           + baptismal_name + ";"
           + to_string(veterinary_id) + ";"
           + to_string(handler_id) + ";"
           + hair_color + ";"
           + uf_origin + ";"
           + authorization + ";"
           + "\n";
}

istream &operator>>(istream &input, NativeMammal &native_mammal){
    input >> static_cast<NativeAnimal &>(native_mammal);
    input >> static_cast<Mammal &>(native_mammal);

    return input;
}
ostream &operator<<(ostream &output, const NativeMammal &native_mammal){
    output << static_cast<const NativeAnimal &>(native_mammal);
    output << static_cast<const Mammal &>(native_mammal);

    return output;
}