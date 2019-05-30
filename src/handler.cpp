#include <iostream>
#include <string>
#include "employee.h"
#include "handler.h"

using namespace std;


Handler::Handler() : Employee() {
    security_level = 0;
}

Handler::Handler(
    int id,
    string name,
    string cpf,
    short age,
    string blood_type,
    char rh_factor,
    string specialty,
    short security_level
) : Employee(id, name, cpf, age, blood_type, rh_factor, specialty) {
    this->security_level = security_level;
}

// Handler::~Handler() {}

short Handler::get_security_level() {
    return security_level;
}

void Handler::set_security_level(short security_level) {
    this->security_level = security_level;
}

string Handler::format_csv() {
    return to_string(id) + ";"
           + "Tratador" + ";"
           + name + ";"
           + cpf + ";"
           + to_string(age) + ";"
           + blood_type + ";"
           + to_string(rh_factor) + ";"
           + specialty + ";"
           + ";"
           + to_string(security_level) + ";\n";
}

istream &operator>>(istream &input,  Handler &handler) {
    cout << "Insira os dados do tratador:" << endl;
    input >> static_cast<Employee &>(handler);

    cout << "Nível de Segurança: ";
    input >> handler.security_level;

    return input;
}

ostream &operator<<(ostream &output, const Handler &handler) {
    output << "<class Handler: " << handler.name << ">" << endl;
    output << static_cast<const Employee &>(handler);
    output << "Nível de Segurança: " << handler.security_level << endl;

    return output;
}
