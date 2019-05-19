#include <string>
#include "wild_animal.h"

using namespace std;


class ExoticAnimal: public WildAnimal { 
    protected:
        string country_origin;

    public:
        ExoticAnimal(string country_origin);
        ~ExoticAnimal();
        string get_country_origin();
        void set_country_origin(string country_origin);
        friend istream &operator>>(istream &input, ExoticAnimal &exotic_animal);
        friend ostream &operator<<(ostream &output, const ExoticAnimal &exotic_animal);
};
