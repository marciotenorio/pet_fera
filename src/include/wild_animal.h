#include <string>

using namespace std;


class WildAnimal {
    protected:
        string ibama_authorization;

    public:
        WildAnimal(string c_ibama_authorization);
        ~WildAnimal();
};
