#include <iostream>
#include <string>
#include "employee.h"
#include "veterinary.h"
#include <fstream>
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

string Veterinary::format_csv() {
    // string result;
    // result = id + string(";")
    //     + string("Veterinário") + ";"
    //     + name + ";"
    //     + cpf + ";"
    //     + age + ";"
    //     + blood_type + ";"
    //     + rh_factor + ";"
    //     + specialty + ";"
    //     + crmv + ";"
    //     + string("") + ";"
    //     + "\n";
    return to_string(id) + ";"
           + "Veterinário" + ";"
           + name + ";"
           + cpf + ";"
           + to_string(age) + ";"
           + blood_type + ";"
           + to_string(rh_factor) + ";"
           + specialty + ";"
           + crmv + ";"
           + ";\n";
}

void Veterinary::write_in_csv() {
    fstream fout;

    fout.open("data/employees.csv", ios::out | ios::app);

    fout << id << ";"
         << "Veterinário" << ";"
         << name << ";"
         << cpf << ";"
         << age << ";"
         << blood_type << ";"
         << rh_factor << ";"
         << specialty << ";"
         << crmv << ";"
         << "" << ";"
         << "\n";
    // ofstream FILE;
    // FILE.open("../data/veterinary.csv", std::ios::app);
    //
    // FILE << id;
    // FILE << ";";
    //
    // FILE << name;
    // FILE << ";";
    //
    // FILE << cpf;
    // FILE << ";";
    //
    // FILE << age;
    // FILE << ";";
    //
    // FILE << blood_type;
    // FILE << ";";
    //
    // FILE << rh_factor;
    // FILE << ";";
    //
    // FILE << specialty;
    // FILE << ";";
    //
    // FILE << crmv;
    // FILE << ";";
    //
    // FILE << endl;
    //
    // FILE.flush();
    // FILE.close();

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
