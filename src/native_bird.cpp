#include "native_bird.h"

NativeBird::NativeBird(

):NativeAnimal(
    uf_origin,
    authorization
),Bird(
    nozzle_size_cm,
    wingspan
){}

string NativeBird::format_csv(){
    return to_string(id) + ";"
           + class_ + ";"
           + scientific_name + ";"
           + to_string(gender) + ";"
           + to_string(size) + ";"
           + diet + ";"
           + baptismal_name + ";"
           + to_string(veterinary_id) + ";"
           + to_string(handler_id) + ";"
           + to_string(nozzle_size_cm) + ";"
           + to_string(wingspan) + ";"
           + uf_origin + ";"
           + authorization + ";"
           + "\n";
}

istream &operator>>(istream &input, NativeBird &native_bird){
    input >> static_cast<NativeAnimal &>(native_bird);
    input >> static_cast<Bird &>(native_bird);

    return input;
}
ostream &operator<<(ostream &output, const NativeBird &native_bird){
    output << static_cast<const NativeAnimal &>(native_bird);
    output << static_cast<const Bird &>(native_bird);

    return output;
}