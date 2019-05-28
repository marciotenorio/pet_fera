#ifndef __VETERINARY_H
#define __VETERINARY_H

#include <iostream>
#include <string>
#include "employee.h"

using namespace std;


class Veterinary: public Employee { // Classe Veterinário herda os atributos da classe Funcionário
    private:
        string crmv; // Atributo privado da classe Veterinário

    public:
        Veterinary(); // Construtor padrão da classe Veterinário
        Veterinary(   // Construtor Cópia da classe Veterinário
            int id,
            string name,
            string cpf,
            short age,
            string blood_type,
            char rh_factor,
            string specialty,
            string crmv
        );
        // Métodos 'gets' e 'sets' da classe Veterinário
        string get_crmv();
        void set_crmv(string crmv);
        string format_csv(); // string criada com o formato 'Comma-separated values'

        friend istream &operator>>(istream &input,  Veterinary &veterinary);
        // Sobrecarga do operador '>>' para definir como entrada dos atributos da classe Veterinário
        friend ostream &operator<<(ostream &output, const Veterinary &veterinary);
        // Sobrecarga do operador '<<' para a definir como saída os atributos da classe Veterinário
         // Uso do operador 'friend' para garantir acesso a atributos e métodos privados de outras classes
};

#endif
