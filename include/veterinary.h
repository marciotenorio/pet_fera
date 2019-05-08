#include <string>
#include "employee.h"

using namespace std;


class Veterinary: public Employee {
    private:
        string crmv;

    public:
        Veterinary();
        ~Veterinary();
};
