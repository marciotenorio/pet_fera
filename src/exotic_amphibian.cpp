#include "exotic_amphibian.h"

ExoticAmphibian::ExoticAmphibian(

):ExoticAnimal(
    country_origin
),Amphibian(
    total_seedlings,
    last_molt
){}


string ExoticAmphibian::format_csv(){
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
           + country_origin + ";"
           + ibama_authorization + ";"
           + "\n";
}

//int ExoticAmphibian::get_id(){
//    return id;
//}

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