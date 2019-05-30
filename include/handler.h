#ifndef __HANDLER_H
#define __HANDLER_H

#include <iostream>
#include <string>
#include "employee.h"

using namespace std;


class Handler: public Employee { // Classe Tratador herda os atributos da classe Funcionário
    private:
        short security_level; // Atributo privado da classe Tratador

    public:
        Handler(); // Construtor padrão da classe Tratador
        Handler(   // Construtor Cópia da classe Tratador
            int id,
            string name,
            string cpf,
            short age,
            string blood_type,
            char rh_factor,
            string specialty,
            short security_level
        );
        // Métodos 'gets' e 'sets' da classe Tratador
        short get_security_level();  
        void set_security_level(short security_level);
        string format_csv(); // string criada com o formato 'Comma-separated values'
        
        friend istream &operator>>(istream &input,  Handler &handler); 
        // Sobrecarga do operador '>>' para definir como entrada dos atributos da classe Tratador
        friend ostream &operator<<(ostream &output, const Handler &handler);
         // Sobrecarga do operador '<<' para a definir como saída os atributos da classe Tratador
         // Uso do operador 'friend' para garantir acesso a atributos e métodos privados de outras classes
};

#endif
