#include "bird.h"
#include <iostream>

Bird::Bird():Animal(){
    nozzle_size_cm = 0;
    wingspan = 0;
}

Bird::Bird(
    double nozzle_size_cm,
    double wingspan
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
    this->nozzle_size_cm = nozzle_size_cm;
    this->wingspan = wingspan;
}

double Bird::get_nozzle_size_cm(){
    return nozzle_size_cm;
}

void Bird::set_nozzle_size_cm(double nozzle_size_cm){
    this->nozzle_size_cm = nozzle_size_cm;
}

double Bird::get_wingspan(){
    return wingspan;
}

void Bird::set_wingspan(double wingspan){
    this->wingspan = wingspan;
}

istream &operator>>(istream &input, Bird &bird){
    cout<< "Insira os dados da ave: "<<endl;
    input >> static_cast<Animal &>(bird);

    cout<< "Tamanho do bico (cm): ";
    input >> bird.nozzle_size_cm;

    cout<< "Envergadura: ";
    input >> bird.wingspan;

    return input;
}
ostream &operator<<(ostream &output,const Bird &bird){
    output << "<class Bird: " << bird.baptismal_name << ">" <<endl;
    output << static_cast<const Animal &>(bird);
    output << "Tamanho do bico (cm): " << bird.nozzle_size_cm <<endl;
    output << "Envergadura: " << bird.wingspan <<endl;

    return output;
}

