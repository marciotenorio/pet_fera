#include "animal.h"


class Bird: public Animal {
    protected:
        double nozzle_size_cm;
        double wingspan;

    public:
        Bird();
        ~Bird();
};
