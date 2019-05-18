#ifndef __HANDLER_H
#define __HANDLER_H

#include <iostream>
#include <string>
#include "employee.h"
#include "petfera.h"
#include <fstream>

using namespace std;


class Handler: public Employee {
    private:
        short security_level;

    public:
        Handler();
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
        short get_security_level();
        void set_security_level(short security_level);
        friend istream &operator>>(istream &input,  Handler &handler);
        friend ostream &operator<<(ostream &output, const Handler &handler);
        void write_handler(const Handler &handler);
};

#endif
