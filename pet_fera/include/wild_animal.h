#include <string>

using namespace std;


class WildAnimal {
    protected:
        string ibama_authorization; // Atributo protegido da classe Animal Selvagem

    public:
        WildAnimal(); // Construtor padrão da classe Animal Selvagem
        ~WildAnimal(); // Destrutor da classe Animal Selvagem
};
