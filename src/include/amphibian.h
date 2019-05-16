#include <ctime>
#include "animal.h"


class Amphibian: public Animal {
    protected:
        int total_seedlings;
        time_t last_molt;

        Amphibian(int c_total_seedlings, time_t c_last_molt);
        //~Amphibian();

    public:
        int get_total_seedlings();;
        void set_total_seedlings(int total_seedlings);
        time_t get_last_molt();
        void set_last_molt(time_t last_mol);
        friend istream &operator>>(istream &input, Amphibian &amphibian);
        friend ostream &operator<<(ostream &output, const Amphibian &amphibian);
};
