#include "animal.h"
#include <iostream>

Animal::Animal(int id, string class_,
    string scientific_name,  
    char gender,
    double size, 
    string diet, 
    string baptismal_name, 
    Veterinary veterinary,
    Handler handler
){
    this->id = id; 
    this->class_ = class_; 
    this->scientific_name = scientific_name;
    this->gender = gender;
    this->size = size;
    this->diet = diet;
    this->baptismal_name = baptismal_name;
    this->veterinary = veterinary;
    this->handler = handler;
}

//Animal::~Animal(){}

int Animal::get_id(){
    return id;
}

void Animal::set_id(int id){
    this->id = id;
}

string Animal::get_class_(){
    return class_;
}

void Animal::set_class_(string class_){
    this->class_ = class_;
}

string Animal::get_scientific_name(){
    return scientific_name;
}

void Animal::set_scientific_name(string scientific_name){
    this->scientific_name = scientific_name;
}

char Animal::get_gender(){
    return gender;
}

void Animal::set_gender(char gender){
    this->gender = gender;
}

double Animal::get_size(){
    return size;
}

void Animal::set_size(double size){
    this->size = size;
}

string Animal::get_diet(){
    return diet;
}

void Animal::set_diet(string diet){
    this->diet = diet;
}

string Animal::get_baptismal_name(){
    return baptism_name;
}

void Animal::set_baptismal_name(string baptism_name){
    this->baptism_name = baptism_name;
}

Veterinary Animal::get_veterinary(){
    return veterinary;
}

void Animal::set_veterinary(Veterinary veterinary){
    this->veterinary = veterinary;
}

Handler Animal::get_handler(){
    return handler;
}

void Animal::set_handler(Handler handler){
    this->handler = handler;
} 

istream &operator>>(istream &input, Animal &animal){
    cout<<"ID: ";
    input>>animal.id;

    cout<<"Classe: ";
    input.ignore();
    getline(input, animal.class_);

    cout<<"Nome cientifico: ";
    input.ignore();
    getline(input, animal.scientific_name);

    cout<<"Genero: ";
    input.ignore();
    getline(input, animal.gender);

    cout<<"Tamanho: ";
    input>>animal.size;

    cout<<"Dieta: ";
    input.ignore();
    getline(input, animal.diet);

    cout<<"Nome de batismo: ";
    input.ignore();
    getline(input, animal.baptismal_name);

    cout<<"Dados do veterinario: ";
    input>>animal.veterinary;

    cout<<"Dados do tratador: ";
    input>>animal.handler;

    return input;
}

friend ostream &operator<<(ostream &output, const Animal &animal){
    output << "ID: " <<animal.id<<endl;
    output << "Classe: " <<animal.class_<<endl;
    output << "Nome cientifico: " <<animal.scientific_name<<endl;
    output << "Genero: " <<animal.gender<<endl;
    output << "Tamanho: " <<animal.size<<endl;
    output << "Dieta: " <<animal.diet<<endl;
    output << "Nome de batismo: " <<animal.baptismal_name<<endl;
    output << "Dados do veterinario: " << animal.veterinary<<endl;
    output << "Dados do tratador: " << animal.handler<<endl;;

    return output;
}

