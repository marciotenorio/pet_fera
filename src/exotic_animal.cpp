#include "exotic_animal.h"

ExoticAnimal::ExoticAnimal():WildAnimal(){
    country_origin = "";
}

ExoticAnimal::ExoticAnimal(
    string country_origin
):WildAnimal(
    ibama_authorization
){
    this->country_origin = country_origin;
}

//~ExoticAnimal(){}

string ExoticAnimal::get_country_origin(){
    return country_origin;
}

void ExoticAnimal::set_country_origin(string country_origin){
    this->country_origin = country_origin;
}

istream &operator>>(istream &input, ExoticAnimal &exotic_animal){
    cout<< "Insira os dados do animal exótico: "<< endl;
    input >> static_cast<WildAnimal &>(exotic_animal);

    cout<< "Pais de origem: ";
    input.ignore();
    getline(input, exotic_animal.country_origin);

    return input;
}

ostream &operator<<(ostream &output, const ExoticAnimal &exotic_animal){
    //output << "<class ExoticAnimal: " << exotic_animal.baptismal_name << ">" <<endl;
    output << static_cast<const WildAnimal &>(exotic_animal);

    output << "Pais de origem: " << exotic_animal.country_origin <<endl;

    return output;
}