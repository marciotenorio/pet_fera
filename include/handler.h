#include <string>
#include "employee.h"

using namespace std;


class Handler: public Employee {
    private:
        string security_level;

    public:
        Handler();
        ~Handler();
};
