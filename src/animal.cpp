#include "animal.h"
#include <iostream>

Animal::Animal(){
    id = 0;
    class_ = "";
    scientific_name = "";
    gender = '\0';
    size = 0;
    diet = "";
    baptismal_name = "";
    veterinary_id = 0;
    handler_id = 0;
}

Animal::Animal(
    int id,
    string class_,
    string scientific_name,  
    char gender,
    double size, 
    string diet, 
    string baptismal_name, 
    int veterinary_id,
    int handler_id
){
    this->id = id;
    this->class_ = class_; 
    this->scientific_name = scientific_name;
    this->gender = gender;
    this->size = size;
    this->diet = diet;
    this->baptismal_name = baptismal_name;
    this->veterinary_id = veterinary_id;
    this->handler_id = handler_id;
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
    return baptismal_name;
}

void Animal::set_baptismal_name(string baptism_name){
    this->baptismal_name = baptism_name;
}

int Animal::get_veterinary_id(){
    return veterinary_id;
}

void Animal::set_veterinary_id(int veterinary_id){
    this->veterinary_id = veterinary_id;
}

int Animal::get_handler_id(){
    return handler_id;
}

void Animal::set_handler_id(int handler_id){
    this->handler_id = handler_id;
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

    cout<<"Gênero: ";
    input>>animal.gender;

    cout<<"Tamanho: ";
    input>>animal.size;

    cout<<"Dieta: ";
    input.ignore();
    getline(input, animal.diet);

    cout<<"Nome de batismo: ";
    input.ignore();
    getline(input, animal.baptismal_name);

    cout<<"ID do veterinário responsável: ";
    input>>animal.veterinary_id;

    cout<<"ID do tratador responsável: ";
    input>>animal.handler_id;

    return input;
}

ostream &operator<<(ostream &output, const Animal &animal){
    output << "ID: " << animal.id <<endl;
    output << "Classe: " << animal.class_ <<endl;
    output << "Nome cientifico: " << animal.scientific_name <<endl;
    output << "Genero: " << animal.gender <<endl;
    output << "Tamanho: " << animal.size <<endl;
    output << "Dieta: " << animal.diet <<endl;
    output << "Nome de batismo: " << animal.baptismal_name <<endl;
    output << "ID do veterinário responsável: " << animal.veterinary_id <<endl;
    output << "ID do tratador responsável: " << animal.handler_id <<endl;;

    return output;
}

