#include "native_animal.h"

NativeAnimal::NativeAnimal(
    string uf_origin,
    string authorization
):WildAnimal(
    ibama_authorization
){
    this->uf_origin = uf_origin;
    this->authorization = authorization;
}

string NativeAnimal::get_uf_origin(){
    return uf_origin;
}

void NativeAnimal::set_uf_origin(string uf_origin){
    this->uf_origin = uf_origin;
}

string NativeAnimal::get_authorization(){
    return authorization;
}

void NativeAnimal::set_authorization(string authorization){
    this->authorization = authorization;
}

istream &operator>>(istream &input, NativeAnimal &native_animal){
    cout<< "Insira os dados do animal nativo: " <<endl;
    input >> static_cast<WildAnimal &>(native_animal);

    cout<< "UF de origem: ";
    input.ignore();
    getline(input, native_animal.uf_origin);

    cout<< "Autorização: ";
    input.ignore();
    getline(input, native_animal.authorization);

    return input;
}

ostream &operator<<(ostream &output, const NativeAnimal &native_animal){
    output << static_cast<const WildAnimal&>(native_animal);
    output << "UF de origem: " << native_animal.uf_origin << endl;
    output << "Autorização: " << native_animal.authorization << endl;

    return output;
}