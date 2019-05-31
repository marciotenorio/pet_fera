#include "amphibian.h"
#include <iostream>

Amphibian::Amphibian():Animal(){ /* Herda dos atributos da classe Animal */
    total_seedlings = 0;
    last_molt = "";
}

Amphibian::Amphibian(
    int total_seedlings,
    string last_molt
):Animal(
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
    this->total_seedlings = total_seedlings;
    this->last_molt = last_molt;
}

int Amphibian::get_total_seedlings(){
    return total_seedlings;
}

void Amphibian::set_total_seedlings(int total_seedlings){
    this->total_seedlings = total_seedlings;
}

string Amphibian::get_last_molt(){
    return last_molt;
}

void Amphibian::set_last_molt(string last_molt){
    this->last_molt = last_molt;
}

istream &operator>>(istream &input, Amphibian &amphibian){
    cout<<"Insira os dados do anfibio: "<<endl;
    input>> static_cast<Animal &>(amphibian);

    cout<<"Total de mudas: ";
    input>>amphibian.total_seedlings;

    cout<<"Data da ultima muda: ";
    input.ignore();
    getline(input, amphibian.last_molt);

    return input;
}

ostream &operator<<(ostream &output,const Amphibian &amphibian){
    output << "<class Amphibian: " << amphibian.baptismal_name << ">" <<endl;
    output << static_cast<const Animal &>(amphibian);
    output << "Total de mudas: " << amphibian.total_seedlings <<endl;
    output << "Data da ultima muda: " << amphibian.last_molt <<endl;

    return output;
}