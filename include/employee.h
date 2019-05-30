#ifndef __EMPLOYEE_H
#define __EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;


class Employee {  //classe Funcionário
    // Atributos protegidos da classe Funcionário
    protected:
        int id;
        string name;
        string cpf;
        short age;
        string blood_type;
        char rh_factor;
        string specialty;

        Employee(); // Construtor padrão da classe Funcionário
        Employee(  // Construtor cópia da classe Funcionário
            int id,
            string name,
            string cpf,
            short age,
            string blood_type,
            char rh_factor,
            string specialty
        );
        
    public:
        // Métodos 'gets' e 'sets' dos atributos da classe Funcionário
        int get_id();
        void set_id(int id);
        string get_name();
        void set_name(string name);
        string get_cpf();
        void set_cpf(string cpf);
        short get_age();
        void set_age(short age);
        string get_blood_type();
        void set_blood_type(string blood_type);
        char get_rh_factor();
        void set_rh_factor(char rh_factor);
        string get_specialty();
        void set_specialty(string specialty);
        
        friend istream &operator>>(istream &input,  Employee &employee);
        // Sobrecarga do operador '>>' para definir como entrada dos atributos da classe Funcionário
        friend ostream &operator<<(ostream &output, const Employee &employee);
        // Sobrecarga do operador '>>' para definir como entrada dos atributos da classe Funcionário
        // Uso do operador 'friend' para garantir acesso a atributos e métodos privados de outras classes
};

#endif
