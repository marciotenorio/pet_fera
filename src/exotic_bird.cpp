#include "exotic_bird.h"

ExoticBird::ExoticBird(

):ExoticAnimal(
	country_origin
),Bird(
	nozzle_size_cm,
	wingspan
){}

string ExoticBird::format_csv(){
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
           + country_origin + ";"
           + ibama_authorization + ";"
           + "\n";
}

istream &operator>>(istream &input, ExoticBird &exotic_bird){
	input >> static_cast<ExoticAnimal &>(exotic_bird);
	input >> static_cast<Bird &>(exotic_bird);

	return input;
}
ostream &operator<<(ostream &output, const ExoticBird &exotic_bird){
	output << static_cast<const ExoticAnimal &>(exotic_bird);
	output << static_cast<const Bird &>(exotic_bird);

	return output;
}