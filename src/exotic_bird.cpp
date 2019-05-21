#include "exotic_bird.h"

ExoticBird::ExoticBird(

):ExoticAnimal(
	country_origin,
	type
):Bird(
	nozzle_size_cm,
	wingspan
){}

istream &operator>>(istream &input, ExoticBird &exotic_bird){
	input >> static_cast<ExoticAnimal &>(exotic_bird);
	input >> static_cast<Bird &>(exotic_bird);

	return input;
}
ostream &operator<<(ostream &output, const ExoticBird &exotic_bird){
	output << static_cast<ExoticAnimal &>(exotic_bird);
	output << static_cast<Bird &>(exotic_bird);

	return output;
}