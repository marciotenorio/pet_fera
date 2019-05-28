#include "exotic_reptile.h"

ExoticReptile::ExoticReptile(

):ExoticAnimal(
    country_origin
),Reptile(
    venomous,
    venom_type
){}

string ExoticReptile::format_csv(){
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
           + country_origin + ";"
           + ibama_authorization + ";"
           + "\n";
}

istream &operator>>(istream &input, ExoticReptile &exotic_reptile){
    input >> static_cast<ExoticAnimal &>(exotic_reptile);
    input >> static_cast<Reptile &>(exotic_reptile);

    return input;
}
ostream &operator<<(ostream &output, const ExoticReptile &exotic_reptile){
    output << static_cast<const ExoticAnimal &>(exotic_reptile);
    output << static_cast<const Reptile &>(exotic_reptile);

    return output;
}