#include "include/veterinary.h"
#include <fstream>
#include <vector>

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
        FILE_register<<i_aux<<";";

        cin.ignore();

        cout<<"NOME: ";
            cin>>s_aux;
        FILE_register<<s_aux<<";";

        cin.ignore();

        cout<<"CPF: ";
            cin>>s_aux;
        FILE_register<<s_aux<<";";

        cout<<"Idade: ";
            cin>>si_aux;
        FILE_register<<si_aux<<";";

        cin.ignore();

        cout<<"Tipo sanguineo: ";
            cin>>s_aux;
        FILE_register<<s_aux<<";";
 
        cout<<"Fator RH: ";
            cin>>c_aux;
        FILE_register<<c_aux<<";";

        cin.ignore();

        cout<<"Especialidade: ";
            cin>>s_aux;
        FILE_register<<s_aux<<";";

        cin.ignore();

        cout<<"CRMV: ";
            cin>>s_aux;
        FILE_register<<s_aux<<";\n";

        return 0;
    }
    
    else
    {
        fstream FILE_register("employees.csv", ios::app);

        cout<<" ----- Criando o cadastro do veterinario ----- "<<endl;
        cout<<" ----- A seguir preencha os campos para completar o cadastro ----- "<<endl<<endl;
        cout<<"ID: ";    
            cin>>i_aux;
        FILE_register<<i_aux<<";";

        cin.ignore();

        cout<<"NOME: ";
            cin>>s_aux;
        FILE_register<<s_aux<<";";

        cin.ignore();

        cout<<"CPF: ";
            cin>>s_aux;
        FILE_register<<s_aux<<";";

        cout<<"Idade: ";
            cin>>si_aux;
        FILE_register<<si_aux<<";";

        cin.ignore();

        cout<<"Tipo sanguineo: ";
            cin>>s_aux;
        FILE_register<<s_aux<<";";    
 
        cout<<"Fator RH: ";
            cin>>c_aux;
        FILE_register<<c_aux<<";";

        cin.ignore();

        cout<<"Especialidade: ";
            cin>>s_aux;
        FILE_register<<s_aux<<";";

        cin.ignore();

        cout<<"CRMV: ";
            cin>>s_aux;
        FILE_register<<s_aux<<";\n";
    }
}

bool Veterinary::remove()
{
    cout<<"Digite o ID do veterinario a ser removido: ";
    string id;
        cin>>id;
    //Checking if "employees.csv exists"
    fstream validator("employees.csv");
    if(validator.bad())
        return false;

    //Checking if "id" exists
    bool id_exists = false, control=true;
    ifstream FILE_data("employees.csv");
    string search_line;
    int line_id = 0, size_file=0;

    while(FILE_data != EOF)
    {
        getline(FILE_data, search_line);
        if(search_line.find(id) != string::npos)
        {
            id_exists = true;
            line_id = size_file;   
        }
        size_file++;
    }
    
    if(!id_exists)
        return false;

    //Remove definitively
    string all_data[size_file]

    for(int i = 0; i <= size_file ; i++)
    {
        getline(FILE_data, all_data[i]);
    }

    ofstream FILE_replace("employees.csv", ios::trunc);
    for(int i = 0; i <= size_file; i++)
    {
        if(i == line_id){}

        else
            FILE_replace<<all_data[i];
    }

    return true;
    
    


}
