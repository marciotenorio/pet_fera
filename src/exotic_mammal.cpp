#include "exotic_mammal.h"

ExoticMammal::ExoticMammal(

):ExoticAnimal(
    country_origin
),Mammal(
    hair_color
){}

string ExoticMammal::format_csv(){
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
           + country_origin + ";"
           + ibama_authorization + ";"
           + "\n";
}

istream &operator>>(istream &input, ExoticMammal &exotic_mammal){
    input >> static_cast<ExoticAnimal &>(exotic_mammal);
    input >> static_cast<Mammal &>(exotic_mammal);

    return input;
}
ostream &operator<<(ostream &output, const ExoticMammal &exotic_mammal){
    output << static_cast<const ExoticAnimal &>(exotic_mammal);
    output << static_cast<const Mammal &>(exotic_mammal);

    return output;
}