#include "include/veterinary.h"
#include <fstream>

template <typename Type>
int validation(Type V)
{
    
}


void Veterinary::sing_in()
{
    fstream FILE_validator("employees.csv");

    //Variables to help fill 
    int i_aux;
    short int si_aux;
    string s_aux;
    char c_aux;
    fstream FILE_register;


    if(FILE_validator.bad())
    {
        FILE_register.open("employees.csv");

        cout<<" ----- Criando o cadastro do veterinario ----- "<<endl;
        cout<<" ----- A seguir preencha os campos para completar o cadastro ----- "<<endl<<endl;
        cout<<"ID: ";    
            cin>>i_aux;
        FILE_register<<i_aux;
        FILE_register<<";";

        cin.ignore();

        cout<<"NOME: ";
            cin>>s_aux;
        FILE_register<<s_aux;
        FILE_register<<";";

        cin.ignore();

        cout<<"CPF: ";
            cin>>s_aux;
        FILE_register<<s_aux;
        FILE_register<<";";

        cout<<"Idade: ";
            cin>>si_aux;
        FILE_register<<si_aux;
        FILE_register<<";";

        cin.ignore();

        cout<<"Tipo sanguineo: ";
            cin>>s_aux;
        FILE_register<<s_aux;
        FILE_register<<";";    
 
        cout<<"Fator RH: ";
            cin>>c_aux;
        FILE_register<<c_aux;
        FILE_register<<";";

        cin.ignore();

        cout<<"Especialidade: ";
            cin>>s_aux;
        FILE_register<<s_aux;
        FILE_register<<";";

        cin.ignore();

        cout<<"CRMV: ";
            cin>>s_aux;
        FILE_register<<s_aux<<";\n";
    }
    
    else
    {
        fstream FILE_register("employees.csv", ios::app);

        cout<<" ----- Criando o cadastro do veterinario ----- "<<endl;
        cout<<" ----- A seguir preencha os campos para completar o cadastro ----- "<<endl<<endl;
        cout<<"ID: ";    
            cin>>i_aux;
        FILE_register<<i_aux;
        FILE_register<<";";

        cin.ignore();

        cout<<"NOME: ";
            cin>>s_aux;
        FILE_register<<s_aux;
        FILE_register<<";";

        cin.ignore();

        cout<<"CPF: ";
            cin>>s_aux;
        FILE_register<<s_aux;
        FILE_register<<";";

        cout<<"Idade: ";
            cin>>si_aux;
        FILE_register<<si_aux;
        FILE_register<<";";

        cin.ignore();

        cout<<"Tipo sanguineo: ";
            cin>>s_aux;
        FILE_register<<s_aux;
        FILE_register<<";";    
 
        cout<<"Fator RH: ";
            cin>>c_aux;
        FILE_register<<c_aux;
        FILE_register<<";";

        cin.ignore();

        cout<<"Especialidade: ";
            cin>>s_aux;
        FILE_register<<s_aux;
        FILE_register<<";";

        cin.ignore();

        cout<<"CRMV: ";
            cin>>s_aux;
        FILE_register<<s_aux<<";\n";
    }
}

int Veterinary::remove(int id)
{
    
}
