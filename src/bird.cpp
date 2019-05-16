#include "bird.h"

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
    baptism_name,
    veterinary,
    handler
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


