#include "petfera.h"

#include "handler.h"
#include "veterinary.h"
#include "employee.h"

#include "exotic_amphibian.h"
#include "exotic_bird.h"
#include "exotic_mammal.h"
#include "exotic_reptile.h"

#include "native_amphibian.h"
#include "native_bird.h"
#include "native_mammal.h"
#include "native_reptile.h"

#include <map>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

#define CREATE_ANIMAL 1
#define DELETE_ANIMAL 2
#define UPDATE_ANIMAL 3
#define READ_ANIMAL 4
#define READ_ANIMAL_BY_CLASS 5
#define READ_ANIMAL_BY_RESPONSIBILITY 6
#define CREATE_VETERINARY 7
#define CREATE_HANDLER 8
#define EXIT 0

//Containers map com todos os dados
map<int, Veterinary> veterinarians;
map<string, Veterinary> veterinarians_by_cpf;
map<int, Handler> handlers;
map<string, Handler> handlers_by_cpf;

map<int, ExoticAmphibian> exotic_amphibians;
map<int, ExoticBird> exotic_birds;
map<int, ExoticMammal> exotic_mammals;
map<int, ExoticReptile> exotic_reptiles;

map<int, NativeAmphibian> native_amphibians;
map<int, NativeBird> native_birds;
map<int, NativeMammal> native_mammals;
map<int, NativeReptile> native_reptiles;

//Cria, recebe, mostra e insere em um container map
//um objeto Handler (tratador).
void create_handler() {
    Handler handler;
    cin >> handler;
    cout << handler << endl;

    handlers.insert(pair<int, Handler>(handler.get_id(), handler));

    call_menu();
}

//Cria, recebe, mostra e insere em um container map
//um objeto Veterinary (veterinário).
void create_veterinary() {
    Veterinary veterinary;
    cin >> veterinary;
    cout << veterinary << endl;

    veterinarians.insert(pair<int, Veterinary>(veterinary.get_id(), veterinary));

    call_menu();
}

//Cria, recebe, mostra e insere em um container map
//um objeto ExoticAmphibian (anfibio exótico).
void create_exotic_amphibian(){
    ExoticAmphibian exotic_amphibian;
    cin >> exotic_amphibian;
    //cout << exotic_amphibian << endl;

    exotic_amphibians.insert(pair<int, ExoticAmphibian>(exotic_amphibian.get_id(), exotic_amphibian));

    call_menu();
}

//Cria, recebe, mostra e insere em um container map
//um objeto ExoticBird (avé exótica).
void create_exotic_bird(){
    ExoticBird exotic_bird;
    cin >> exotic_bird;
    cout << exotic_bird << endl;

    exotic_birds.insert(pair<int, ExoticBird>(exotic_bird.get_id(), exotic_bird));

    call_menu();
}

//Cria, recebe, mostra e insere em um container map
//um objeto ExoticMammal (mamífero exótico).
void create_exotic_mammal(){
    ExoticMammal exotic_mammal;
    cin >> exotic_mammal;
    cout << exotic_mammal << endl;

    exotic_mammals.insert(pair<int, ExoticMammal>(exotic_mammal.get_id(), exotic_mammal));

    call_menu();
}

//Cria, recebe, mostra e insere em um container map
//um objeto ExoticReptile (réptil exótico).
void create_exotic_reptile(){
    ExoticReptile exotic_reptile;
    cin >> exotic_reptile;
    cout << exotic_reptile << endl;

    exotic_reptiles.insert(pair<int, ExoticReptile>(exotic_reptile.get_id(), exotic_reptile));

    call_menu();
}

//Cria, recebe, mostra e insere em um container map
//um objeto NativeAmphibian (anfíbio nativo).
void create_native_amphibian(){
    NativeAmphibian native_amphibian;
    cin >> native_amphibian;
    cout << native_amphibian << endl;

    native_amphibians.insert(pair<int, NativeAmphibian>(native_amphibian.get_id(), native_amphibian));

    call_menu();
}

//Cria, recebe, mostra e insere em um container map
//um objeto NativeBird (ave nativa).
void create_native_bird(){
    NativeBird native_bird;
    cin >> native_bird;
    cout << native_bird << endl;

    native_birds.insert(pair<int, NativeBird>(native_bird.get_id(), native_bird));

    call_menu();
}

//Cria, recebe, mostra e insere em um container map
//um objeto NativeMammal (mamífero nativo).
void create_native_mammal(){
    NativeMammal native_mammal;
    cin >> native_mammal;
    cout << native_mammal << endl;

    native_mammals.insert(pair<int, NativeMammal>(native_mammal.get_id(), native_mammal));

    call_menu();
}

//Cria, recebe, mostra e insere em um container map
//um objeto NativeReptile (réptil nativo).
void create_native_reptile(){
    NativeReptile native_reptile;
    cin >> native_reptile;
    cout << native_reptile << endl;

    native_reptiles.insert(pair<int, NativeReptile>(native_reptile.get_id(), native_reptile));

    call_menu();
}

//Carrega os animais nos containers maps designados para cada classe
void load_animals() {
    ifstream infile("data/animals.csv");
    string line;
    char split_char = ';';

    while (getline(infile, line)) {
        cout << line << endl;
        istringstream split(line);
        vector<string> columns;
        for (string each; getline(split, each, split_char); columns.push_back(each));
        if (columns[1].compare("Veterinário") == 0) {
            Veterinary veterinary(
                stoi(columns[0]),
                columns[2],
                columns[3],
                stoi(columns[4]),
                columns[5],
                columns[6][0],
                columns[7],
                columns[8]
            );
            veterinarians.insert(pair<int, Veterinary>(stoi(columns[0]), veterinary));
            veterinarians_by_cpf.insert(pair<string, Veterinary>(columns[3], veterinary));
        } else if (columns[1].compare("Tratador") == 0) {
            Handler handler(
                stoi(columns[0]),
                columns[2],
                columns[3],
                stoi(columns[4]),
                columns[5],
                columns[6][0],
                columns[7],
                stoi(columns[9])
            );
            handlers.insert(pair<int, Handler>(stoi(columns[0]), handler));
            handlers_by_cpf.insert(pair<string, Handler>(columns[3], handler));
        }
    }
    infile.close();

    // cout << "Veterinários" << endl;
    // for (map<int,Veterinary>::iterator it=veterinarians.begin(); it!=veterinarians.end(); ++it)
    //   cout << it->first << " => " << it->second << '\n';
    //
    // cout << "Tratadores" << endl;
    // for (map<int,Handler>::iterator it=handlers.begin(); it!=handlers.end(); ++it)
    //   cout << it->first << " => " << it->second << '\n';
}

void load_employees() {
    ifstream infile("data/employees.csv");
    string line;
    char split_char = ';';

    while (getline(infile, line)) {
        cout << line << endl;
        istringstream split(line);
        vector<string> columns;
        for (string each; getline(split, each, split_char); columns.push_back(each));
        if (columns[1].compare("Veterinário") == 0) {
            Veterinary veterinary(
                stoi(columns[0]),
                columns[2],
                columns[3],
                stoi(columns[4]),
                columns[5],
                columns[6][0],
                columns[7],
                columns[8]
            );
            veterinarians.insert(pair<int, Veterinary>(stoi(columns[0]), veterinary));
            veterinarians_by_cpf.insert(pair<string, Veterinary>(columns[3], veterinary));
        } else if (columns[1].compare("Tratador") == 0) { /* */
            Handler handler(
                stoi(columns[0]),
                columns[2],
                columns[3],
                stoi(columns[4]),
                columns[5],
                columns[6][0],
                columns[7],
                stoi(columns[9])
            );
            handlers.insert(pair<int, Handler>(stoi(columns[0]), handler));
            handlers_by_cpf.insert(pair<string, Handler>(columns[3], handler));
        }
    }
    infile.close();

    // cout << "Veterinários" << endl;
    // for (map<int,Veterinary>::iterator it=veterinarians.begin(); it!=veterinarians.end(); ++it)
    //   cout << it->first << " => " << it->second << '\n';
    //
    // cout << "Tratadores" << endl;
    // for (map<int,Handler>::iterator it=handlers.begin(); it!=handlers.end(); ++it)
    //   cout << it->first << " => " << it->second << '\n';
}

void search_veterinary_by_id() {  /* Função responsável por procurar pelo veterinário, dado o ID */
    int value;
    cin >> value;

    if (veterinarians.find(value) == veterinarians.end()) {
        cout << "Não existe um veterinário com esse ID." << endl;
    } else {
        cout << veterinarians.find(value)->first << ": " << veterinarians.find(value)->second << endl;
    }
    call_menu(); /* Após execução, retorno ao menu principal */
}

void search_veterinary_by_cpf() {  /* Função responsável por procurar pelo veterinário, dado o CPF */
    string value;
    cin >> value;

    cout << value << endl;

    if (veterinarians_by_cpf.find(value) == veterinarians_by_cpf.end()) {
        cout << "Não existe um veterinário com esse CPF." << endl;
    } else {
        cout << veterinarians_by_cpf.find(value)->first << ": " << veterinarians_by_cpf.find(value)->second << endl;
    }
    call_menu(); /* Após execução, retorno ao menu principal */
}

void search_handler_by_id() { /* Função responsável por procurar pelo tratador, dado o ID */
    int value;
    cin >> value;
    if (handlers.find(value) == handlers.end()) {
        cout << "Não existe um tratador com esse ID." << endl;
    } else {
        cout << handlers.find(value)->first << ": " << handlers.find(value)->second << endl;
    }
    call_menu(); /* Após execução, retorno ao menu principal */
}

void search_handler_by_cpf() { /* Função responsável por procurar pelo tratador, dado o CPF */
    string value;
    cin >> value;

    cout << value << endl;

    if (handlers_by_cpf.find(value) == handlers_by_cpf.end()) {
        cout << "Não existe um tratador com esse CPF." << endl;
    } else {
        cout << handlers_by_cpf.find(value)->first << ": " << handlers_by_cpf.find(value)->second << endl;
    }
    call_menu(); /* Após execução, retorno ao menu principal */
}

void update_veterinary() { /* Função responsável por atualizar os dados de um veterinário */
    cout << "Digite o ID do veterinário que deseja alterar:" << endl;
    int value;
    cin >> value;

    if (veterinarians.find(value) == veterinarians.end()) {
        cout << "Não existe um veterinário com esse ID." << endl;
    } else {
        Veterinary veterinary;
        cin >> veterinary;

        veterinarians.find(value)->second = veterinary;
        cout << "Veterinário com CPF: " << veterinary.get_cpf() << " atualizado com sucesso!" << endl;
    }

    call_menu(); /* Após execução, retorno ao menu principal */
}

void list_employees() {
    cout << "| FUNCIONÁRIOS |" << endl;
    cout << "" << endl;

    cout << "Veterinários" << endl;
    for (map<int,Veterinary>::iterator it=veterinarians.begin(); it!=veterinarians.end(); ++it)
      cout << it->first << " => " << it->second << '\n';

    cout << "Tratadores" << endl;
    for (map<int,Handler>::iterator it=handlers.begin(); it!=handlers.end(); ++it)
      cout << it->first << " => " << it->second << '\n';

    call_menu(); /* Após execução, retorno ao menu principal */
}

void save_data() {
  ofstream file;
  file.open("data/employees.csv");

  for (map<int,Veterinary>::iterator it=veterinarians.begin(); it!=veterinarians.end(); ++it)
    file << it->second.format_csv();

  for (map<int,Handler>::iterator it=handlers.begin(); it!=handlers.end(); ++it)
    file << it->second.format_csv();

  // file << "Writing this to a file.\n";
  file.close();
}

void menu() {
    unsigned int OPTION;
    load_employees();
    system("clear");
    cout << "|    Sistema PETFERA   |" << endl;
    cout << "ESCOLHA UMA DAS OPÇÕES" << endl;
    cout << "1 - CADASTRAR UM ANIMAL" << endl;
    cout << "2 - REMOVER UM ANIMAL" << endl;
    cout << "3 - ALTERAR DADOS DE UM ANIMAL" << endl;
    cout << "4 - CONSULTAR DADOS DE UM ANIMAL" << endl;
    cout << "5 - CONSULTAR DADOS DE UMA CLASSE DE ANIMAIS" << endl;
    cout << "6 - CONSULTAR ANIMAIS SOB RESPONSABILIDADE (VETERINÁRIO OU TRATADOR)" << endl;
    cout << "7 - CADASTRAR VETERINÁRIO" << endl;
    cout << "8 - CADASTRAR TRATADOR" << endl;
    cout << "9 - BUSCAR VETERINÁRIO POR ID" << endl;
    cout << "10 - BUSCAR VETERINÁRIO POR CPF" << endl;
    cout << "11 - BUSCAR TRATADOR POR ID" << endl;
    cout << "12 - BUSCAR TRATADOR POR CPF" << endl;
    cout << "13 - EDITAR VETERINÁRIO" << endl;
    cout << "14 - LISTAR FUNCIONÁRIOS" << endl;
    cout << "0 - SAIR" << endl;
    cin >> OPTION;
    switch (OPTION) {
        case CREATE_ANIMAL:
            cout << "1 - CADASTRAR UM ANIMAL" << endl;
            create_exotic_amphibian();
            break;
        case DELETE_ANIMAL:
            cout << "2 - REMOVER UM ANIMAL" << endl;
            break;
        case UPDATE_ANIMAL:
            cout << "3 - ALTERAR DADOS DE UM ANIMAL" << endl;
            break;
        case READ_ANIMAL:
            cout << "4 - CONSULTAR DADOS DE UM ANIMAL" << endl;
            break;
        case READ_ANIMAL_BY_CLASS:
            cout << "5 - CONSULTAR DADOS DE UMA CLASSE DE ANIMAIS" << endl;
            break;
        case READ_ANIMAL_BY_RESPONSIBILITY:
            cout << "6 - CONSULTAR ANIMAIS SOB RESPONSABILIDADE (VETERINÁRIO OU TRATADOR)" << endl;
            break;
        case CREATE_VETERINARY:
            cout << "7 - CADASTRAR VETERINÁRIO" << endl;
            create_veterinary();
            break;
        case CREATE_HANDLER:
            cout << "8 - CADASTRAR TRATADOR" << endl;
            create_handler();
            break;
        case 9:
            cout << "9 - BUSCAR VETERINÁRIO POR ID" << endl;
            search_veterinary_by_id();
            break;
        case 10:
            cout << "10 - BUSCAR VETERINÁRIO POR CPF" << endl;
            search_veterinary_by_cpf();
            break;
        case 11:
            cout << "11 - BUSCAR TRATADOR POR ID" << endl;
            search_handler_by_id();
            break;
        case 12:
            cout << "12 - BUSCAR TRATADOR POR CPF" << endl;
            search_handler_by_cpf();
            break;
        case 13:
            cout << "13 - EDITAR VETERINÁRIO" << endl;
            update_veterinary();
            break;
        case 14:
            cout << "14 - LISTAR FUNCIONÁRIOS" << endl;
            list_employees();
            break;
        case EXIT:
            save_data();
            exit(EXIT_SUCCESS);
            break;
        default:
            exit(EXIT_FAILURE);
    }
}

void call_menu() {
    while('\n' != getchar());
    printf("Pressione enter para continuar...");
    getchar();
    menu();
}
