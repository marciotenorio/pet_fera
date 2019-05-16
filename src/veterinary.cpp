#include <iostream>
#include <string>
#include "employee.h"
#include "veterinary.h"

using namespace std;


Veterinary::Veterinary() : Employee() {
    crmv = "";
}

Veterinary::Veterinary(
    int id,
    string name,
    string cpf,
    short age,
    string blood_type,
    char rh_factor,
    string specialty,
    string crmv
) : Employee(id, name, cpf, age, blood_type, rh_factor, specialty) {
    this->crmv = crmv;
}

// Veterinary::~Veterinary() {}

string Veterinary::get_crmv() {
    return crmv;
}

void Veterinary::set_crmv(string crmv) {
    this->crmv = crmv;
}

istream &operator>>(istream &input,  Veterinary &veterinary) {
    cout << "Insira os dados do veterinário:" << endl;
    input >> static_cast<Employee &>(veterinary);

    cout << "Código CRMV: ";
    input >> veterinary.crmv;

    return input;
}

ostream &operator<<(ostream &output, const Veterinary &veterinary) {
    output << "<class Veterinary: " << veterinary.name << ">" << endl;
    output << static_cast<const Employee &>(veterinary);
    output << "Código CRMV: " << veterinary.crmv << endl;

    return output;
}
