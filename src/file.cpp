#include "file.h"
#include ""

bool search_animal(){

    fstream FILE_validator("animals.csv");

    if(FILE_validator.bad()){
        cout<< "Arquivo de dados \"animals.csv\" inexistente!!!"<<endl;
        return false;
    }

    string animal_name;
    cout<<"Digite o nome de batismo do animal: ";
        cin>>animal_name;

    else{

        fstream FILE_data("animals.csv");
        string line_data, compare;

        while(FILE_data >> line_data)
        {
            if(line_data.find(animal_name) != string::npos)
            {
                if(line_data.find(""))
            }
        }
        

    } 
}

bool data_memory_animals(){

    fstream FILE_validator("animals.csv");

    if(FILE_validator.bad()){
        cout<< "Arquivo de dados \"animals.csv\" inexistente!!!"<<endl;
        return false;
    }

    fstream FILE_data("animals.csv");
    string line_data;

    while(FILE_data >> line_data){
        
    }

}