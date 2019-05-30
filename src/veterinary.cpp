#include <iostream>
#include <string>
#include "employee.h"
#include "veterinary.h"

using namespace std;


Veterinary::Veterinary() : Employee() { /* O método construtor da classe Veterinpario herda os atributos da classe Funcionário */
    crmv = ""; /* Adicionamos o atributo específico da classe Veterinário */
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

string Veterinary::get_crmv() { /* Carregamos o valor do atributo com o método 'get' */
    return crmv;
}

void Veterinary::set_crmv(string crmv) { /* Em seguida, atribuimos ao atributo do construtor com o método 'set' */
    this->crmv = crmv;
}

string Veterinary::format_csv() { /* Construimos a string no formado csv, separando por ';' cada atributo da classe Veterinário */
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

istream &operator>>(istream &input,  Veterinary &veterinary) { /* Usamos o operador sobrecarregado '>>' para inserior os dados no construtor cópia da classe Veterinário */
    cout << "Insira os dados do veterinário:" << endl;
    input >> static_cast<Employee &>(veterinary);
    /* Usamos a conversão estática(static_cast) para convertemos nosso construtor do tipo Funcionário no tipo Veterinário, bem como
    tem uma função que pende mais para boa organização e manutenção do código. */                                              
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
