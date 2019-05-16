#ifndef __VETERINARY_H
#define __VETERINARY_H

#include <iostream>
#include <string>
#include "employee.h"

using namespace std;


class Veterinary: public Employee {
    private:
        string crmv;

    public:
        Veterinary();
        Veterinary(
            int id,
            string name,
            string cpf,
            short age,
            string blood_type,
            char rh_factor,
            string specialty,
            string crmv
        );
        // ~Veterinary();
        string get_crmv();
        void set_crmv(string crmv);
        friend istream &operator>>(istream &input,  Veterinary &veterinary);
        friend ostream &operator<<(ostream &output, const Veterinary &veterinary);
};

#endif
