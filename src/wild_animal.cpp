#include "wild_animal.h"

WildAnimal::WildAnimal(){
    ibama_authorization = "";
}

WildAnimal::WildAnimal(string ibama_authorization)
{
    this->ibama_authorization = ibama_authorization;
}

//~WildAnimal();

string WildAnimal::get_ibama_authorization(){
    return ibama_authorization;
}

void WildAnimal::set_ibama_authorization(string ibama_authorization){
    this->ibama_authorization = ibama_authorization;
}

//How to implement this
istream &operator>>(istream &input, WildAnimal &wild_animal){
    cout<< "Insira a autorização do IBAMA: "<<endl;
    input.ignore();
    getline(input, wild_animal.ibama_authorization);

    return input;
}
ostream &operator<<(ostream &output, const WildAnimal &wild_animal){
    output << "Autorização do IBAMA: ";
    output << wild_animal.ibama_authorization << endl;

    return output;
}
