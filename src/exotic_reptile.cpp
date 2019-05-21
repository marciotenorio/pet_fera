#include "exotic_reptile.h"

ExoticReptile::ExoticReptile(

):ExoticAnimal(
    country_origin,
    type
):Reptile(
    venomous,
    venom_type
){}

istream &operator>>(istream &input, ExoticReptile &exotic_reptile){
    input >> static_cast<ExoticAnimal &>(exotic_reptile);
    input >> static_cast<Reptile &>(exotic_reptile);

    return input;
}
ostream &operator<<(ostream &output, const ExoticReptile &exotic_reptile){
    output >> static_cast<const ExoticAnimal &>(exotic_reptile);
    output >> static_cast<const Reptile &>(exotic_reptile);

    return output;
}