#include "wild_animal.h"

WildAnimal(
    string ibama_authorization
):NativeAnimal(
    uf_origin,
    authorization
):ExoticAnimal(
    country_origin
){
    this->ibama_authorization = ibama_authorization;
}

//~WildAnimal();

string get_ibama_authorization(){
    return ibama_authorization;
}

void set_ibama_authorization(string ibama_authorization){
    this->ibama_authorization = ibama_authorization;
}

//How to implement this
friend istream &operator>>(istream &input, WildAnimal &wild_animal){
    cout<< "Insira os dados do animal silvestre: "<<endl;
    input >> static_cast<NativeAnimal &, ExoticAnimal &>()
}
friend ostream &operator<<(ostream &output, const WildAnimal &wild_animal);
