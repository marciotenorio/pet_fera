#include <ctime>
#include "animal.h"


class Amphibian: public Animal {
    protected:
        int total_seedlings;
        time_t last_molt;

    public:
        Amphibian();
        ~Amphibian();
};
