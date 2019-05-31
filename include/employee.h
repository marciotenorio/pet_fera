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

        Employee();
        Employee(
            int id,
            string name,
            string cpf,
            short age,
            string blood_type,
            char rh_factor,
            string specialty
        );
        // ~Employee();

    public:
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
        friend ostream &operator<<(ostream &output, const Employee &employee);
};

#endif
