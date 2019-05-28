#include <ctime>
#include "animal.h"


class Amphibian: public Animal {
    protected:
        int total_seedlings;
        string last_molt;
        
        Amphibian(int total_seedlings, string last_molt);
        Amphibian();

    public:
        int get_total_seedlings();
        void set_total_seedlings(int total_seedlings);
        string get_last_molt();
        void set_last_molt(string last_molt);
        friend istream &operator>>(istream &input, Amphibian &amphibian);
        friend ostream &operator<<(ostream &output, const Amphibian &amphibian);
};
