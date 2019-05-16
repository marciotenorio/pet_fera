#include "mammal.h"

Mammal::Mammal(string hair_color)
:Animal(
    id,
    class_,
    scientific_name,
    gender,
    size,
    diet,
    baptismal_name,
    veterinary,
    handler
){
    this->hair_color = hair_color;
}

string Mammal::get_hair_color(){
    return hair_color;
}

void Mammal::set_hair_color(string hair_color){
    this->hair_color = hair_color;
}

istream &operator>>(istream &input, Mammal &mammal){
    cout<< "Insira os dados do mamífero: " <<endl;
    input >> static_cast<Animal &>(mammal);

    cout<< "Cor do pêlo: ";
    input >> mammal.hair_color;

    return input;
}

ostream &operator<<(ostream &output,const Mammal &mammal){
    cout<< "<class Mammal: " << mammal.baptismal_name << ">" <<endl;
    cout<< static_cast<const Animal &>(mammal);
    cout<< "Cor do pêlo: " << mammal.hair_color <<endl;

    return output;
}