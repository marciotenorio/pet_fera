#ifndef __HANDLER_H
#define __HANDLER_H

#include <iostream>
#include <string>
#include "employee.h"

using namespace std;


class Handler: public Employee { // Classe Tratador herda os atributos da classe Funcionário
    private:
        short security_level;

    public:
        Handler(); /* Construtor padrão */
        Handler(
            int id,
            string name,
            string cpf,
            short age,
            string blood_type,
            char rh_factor,
            string specialty,
            short security_level
        );
        // ~Handler();
        /* Atributos da classe Tratador adicionados ao construtor */
        short get_security_level();
        void set_security_level(short security_level);
        string format_csv();
        friend istream &operator>>(istream &input,  Handler &handler);
        friend ostream &operator<<(ostream &output, const Handler &handler);
};

#endif
