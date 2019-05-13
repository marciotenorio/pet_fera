#include "employee.h"
#include <iostream>

using namespace std;

typedef struct S_data
{
    string **all_data;
}S_data;

S_data get_data(S_data a);

class Veterinary: public Employee {
    private:
        string crmv;

    public:
        void sing_in();
        int remove();
        Veterinary();
        ~Veterinary();
};
