#include <string>

using namespace std;


class WildAnimal: public NativeAnimal, public ExoticAnimal{
    protected:
        string ibama_authorization;

    public:
        WildAnimal(string ibama_authorization);
        ~WildAnimal();
        string get_ibama_authorization();
        void set_ibama_authorization(string ibama_authorization);
        friend istream &operator>>(istream &input, WildAnimal &wild_animal);
        friend ostream &operator<<(ostream &output, const WildAnimal &wild_animal);
};
