#include <string>
#include "wild_animal.h"

using namespace std;


class NativeAnimal: public WildAnimal {
    protected:
        string uf_origin;
        string authorization;

    public:
        NativeAnimal(string uf_origin, string authorization);
        ~NativeAnimal();
        string get_uf_origin();
        void set_uf_origin(string uf_origin);
        string get_authorization();
        void set_authorization(string authorization);
        friend istream &operator>>(istream &input, NativeAnimal &native_animal);
        friend ostream &operator<<(ostream &output, const NativeAnimal &native_animal);        
};
