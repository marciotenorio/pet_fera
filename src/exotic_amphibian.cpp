#include "exotic_amphibian.h"

ExoticAmphibian::ExoticAmphibian(

):ExoticAnimal(
    country_origin,
    type
):Amphibian(
    total_seedlings,
    last_molt
){}

istream &operator>>(istream &input, ExoticAmphibian &exotic_amphibian){  
    input >> static_cast<ExoticAnimal &>(exotic_amphibian);    
    input >> static_cast<Amphibian &>(exotic_amphibian);

    return input;
}

ostream &operator<<(ostream &output,const ExoticAmphibian &exotic_amphibian){
    output << static_cast<const ExoticAnimal &>(exotic_amphibian);
    output << static_cast<const Amphibian &>(exotic_amphibian);

    return output;
}