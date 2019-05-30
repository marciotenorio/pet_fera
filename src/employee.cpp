#include <string>
#include "employee.h"

using namespace std;


Employee::Employee() { // Criação do construtor padrão
    id = 0;
    name = "";
    cpf = "";
    age = 0;
    blood_type = '\0';
    rh_factor = '\0';
    specialty = "";
}

Employee::Employee( // Criação do construtor cópia
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
    /*Como no construtor cópia temos os atributos com o mesmo nomes dos atributos da classe 'Funcionário', isso nos permite usar
    o ponteiro 'this', que é passado como um argumento oculto para todas as chamadas de função de membro não estático e está disponível 
    como uma variável local dentro do corpo de todas as funções não estáticas. Esse ponteiro é um ponteiro constante que contém o 
    endereço de memória do objeto atual.
    */

}

// Implementação dos métodos 'gets' e 'sets' da classe funcionário

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
    /* Uso do operador sobrecarregado '>>' para inserir valores aos atributos da classe Funcionário */
    cout << "ID: ";
    input >> employee.id;

    cout << "Nome: ";
    input.ignore();
    getline(input, employee.name); /* (1) O dado esperado é uma string, então usamos getline() para receber essa informação e atribuir a classe funcionário.nome */

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
    getline(input, employee.specialty); // (1) 

    return input; 
}

ostream &operator<<(ostream &output, const Employee &employee) {
    /* Com os valores já preenchidos pelo usuário, usamos o operador sobrecarregado '<<' para salvar na memória 
    os dados coletados do usuário do escopo anterior*/
    output << "ID: " << employee.id << endl;
    output << "Nome: " << employee.name << endl;
    output << "CPF: " << employee.cpf << endl;
    output << "Idade: " << employee.age << endl;
    output << "Tipo sanguíneo: " << employee.blood_type << endl;
    output << "Fator RH: " << employee.rh_factor << endl;
    output << "Especialidade: " << employee.specialty << endl;

    return output;
}
