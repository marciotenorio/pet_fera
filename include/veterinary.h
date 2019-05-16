#include "employee.h"
#include <iostream>

using namespace std;

class Veterinary: public Employee {
    private:
        string crmv;

    public:
        void sing_in();
        bool remove();
        Veterinary();
        ~Veterinary();
};
