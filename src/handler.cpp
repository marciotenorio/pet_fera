#include <iostream>
#include <string>
#include "employee.h"
#include "handler.h"
#include <fstream>
#include "petfera.h"
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

void Handler::write_handler(const Handler &handler){

    ofstream FILE;
    FILE.open("../data/handler.csv", std::ios::app);
    FILE << handler.id;
    FILE << ";";

    FILE << handler.name;
    FILE << ";";

    FILE << handler.cpf;
    FILE << ";";

    FILE << handler.age;
    FILE << ";";

    FILE << handler.blood_type;
    FILE << ";";

    FILE << handler.rh_factor;
    FILE << ";";

    FILE << handler.specialty;
    FILE << ";";

    FILE << handler.security_level;
    FILE << ";";

    FILE << endl;

    FILE.close();

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

