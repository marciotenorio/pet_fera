#include "amphibian.h"

Amphibian::Amphibian(
    int total_seedlings,
    time_t last_molt
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
    this->total_seedlings = total_seedlings;
    this->last_molt = last_molt;
}

int Amphibian::get_total_seedlings(){
    return total_seedlings;
}

void Amphibian::set_total_seedlings(int total_seedlings){
    this->total_seedlings = total_seedlings;
}

time_t Amphibian::get_last_molt(){
    return last_molt;
}

void Amphibian::set_last_molt(time_t last_molt){
    this->last_molt = last_molt;
}

istream &operator>>(istream &input, Amphibian &amphibian){
    cout<<"Insira os dados do anfibio: "<<endl;
    input>>animal;

    cout<<"Total de mudas: ";
    input>>amphibian.total_seedlings;

    cout<<"Data da ultima muda: ";
    input>>amphibian.last_molt;

    return input;
}

ostream &operator<<(ostream &output, Amphibian &amphibian){
    output << "<class Amphibian: " << amphibian.baptismal_name << ">" <<endl;
    output << animal;
    output << "Total de mudas: " << amphibian.total_seedlings <<endl;
    output << "Data da ultima muda: " << amphibian.last_molt <<endl;

    return output;
}