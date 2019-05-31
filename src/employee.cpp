#include <string>
#include "employee.h"

using namespace std;


Employee::Employee() {
    id = 0;
    name = "";
    cpf = "";
    age = 0;
    blood_type = '\0';
    rh_factor = '\0';
    specialty = "";
}

Employee::Employee(
    int id,
    string name,
    string cpf,
    short age,
    string blood_type,
    char rh_factor,
    string specialty
) {
    this->id = id;
    this->name = name;
    this->cpf = cpf;
    this->age = age;
    this->blood_type = blood_type;
    this->rh_factor = rh_factor;
    this->specialty = specialty;
}

// Employee::~Employee() {}

int Employee::get_id() {
    return id;
}

void Employee::set_id(int id) {
    this->id = id;
}

string Employee::get_name() {
    return name;
}

void Employee::set_name(string name) {
    this->name = name;
}

string Employee::get_cpf() {
    return cpf;
}

void Employee::set_cpf(string cpf) {
    this->cpf = cpf;
}

short Employee::get_age() {
    return age;
}

void Employee::set_age(short age) {
    this->age = age;
}

string Employee::get_blood_type() {
    return blood_type;
}

void Employee::set_blood_type(string blood_type) {
    this->blood_type = blood_type;
}

char Employee::get_rh_factor() {
    return rh_factor;
}

void Employee::set_rh_factor(char rh_factor) {
    this->rh_factor = rh_factor;
}

string Employee::get_specialty() {
    return specialty;
}

void Employee::set_specialty(string specialty) {
    this->specialty = specialty;
}

istream &operator>>(istream &input,  Employee &employee) {
    cout << "ID: ";
    input >> employee.id;

    cout << "Nome: ";
    input.ignore();
    getline(input, employee.name);

    cout << "CPF: ";
    input >> employee.cpf;

    cout << "Idade: ";
    input >> employee.age;

    cout << "Tipo sanguíneo: ";
    input >> employee.blood_type;

    cout << "Fator RH: ";
    input >> employee.rh_factor;

    cout << "Especialidade: ";
    input.ignore();
    getline(input, employee.specialty);

    return input;
}

ostream &operator<<(ostream &output, const Employee &employee) {
    output << "ID: " << employee.id << endl;
    output << "Nome: " << employee.name << endl;
    output << "CPF: " << employee.cpf << endl;
    output << "Idade: " << employee.age << endl;
    output << "Tipo sanguíneo: " << employee.blood_type << endl;
    output << "Fator RH: " << employee.rh_factor << endl;
    output << "Especialidade: " << employee.specialty << endl;

    return output;
}
