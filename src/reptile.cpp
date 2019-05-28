#include "reptile.h"
#include <iostream>

Reptile::Reptile():Animal(){
    venomous = false;
    venom_type = "";
}

Reptile::Reptile(
    bool venomous,
    string venom_tye
): Animal(
    id,
    class_,
    scientific_name,
    gender,
    size,
    diet,
    baptismal_name,
    veterinary_id,
    handler_id
){
    this->venomous = venomous;
    this->venom_type = venom_type;
}

bool Reptile::get_venomous(){
    return venomous;
}

void Reptile::set_venomous(bool venomous){
    this->venomous = venomous;
}

string Reptile::get_venom_type(){
    return venom_type;
}

void Reptile::set_venom_type(string venom_type){
    this->venom_type = venom_type;
}

istream &operator>>(istream &input, Reptile &reptile){
    cout<< "Insira os dados do reptil: "<<endl;
    input >> static_cast<Animal &>(reptile);
    
    cout<< "Venenoso: ";
    input >> reptile.venomous;

    cout<< "Tipo de veneno: ";
    input.ignore();
    getline(input, reptile.venom_type);

    return input;
}
ostream &operator<<(ostream &output,const Reptile &reptile){
    output << "<class Reptile: " << reptile.baptismal_name << " >" <<endl;
    output << static_cast<const Animal &>(reptile);
    output << "Venenoso: " << reptile.venomous <<endl;
    output << "Tipo de veneno: " << reptile.venom_type <<endl;

    return output;
    
}