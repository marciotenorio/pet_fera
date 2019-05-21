#include "exotic.mammal.h"

ExoticMammal::ExoticMammal(

):ExoticAnimal(
    country_origin,
    type
):Mammal(
    hair_color
){}

istream &operator>>(istream &input, ExoticMammal &exotic_mammal){
    input >> static_cast<ExoticAnimal &>(exotic_mammal);
    input >> static_cast<Mammal &>(exotic_mammal);

    return input;
}
ostream &operator<<(ostream &output, const ExoticMammal &exotic_mammal){
    output >> static_cast<const ExoticAnimal &>(exotic_mammal);
    output >> static_cast<const Mammal &>(exotic_mammal);

    return output;
}