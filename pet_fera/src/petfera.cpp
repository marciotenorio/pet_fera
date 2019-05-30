#include "petfera.h"
#include "handler.h"
#include "veterinary.h"
#include "employee.h"
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

map<int, Veterinary> veterinarians;
map<string, Veterinary> veterinarians_by_cpf;
map<int, Handler> handlers;
map<string, Handler> handlers_by_cpf;

void create_handler() {
    Handler handler;
    cin >> handler;
    cout << handler << endl;

    call_menu();
}

void create_veterinary() {
    Veterinary veterinary;
    cin >> veterinary;
    cout << veterinary << endl;

    veterinarians.insert(pair<int, Veterinary>(veterinary.get_id(), veterinary));

    call_menu();
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

void search_veterinary_by_id() {
    int value;
    cin >> value;

    if (veterinarians.find(value) == veterinarians.end()) {
        cout << "Não existe um veterinário com esse ID." << endl;
    } else {
        cout << veterinarians.find(value)->first << ": " << veterinarians.find(value)->second << endl;
    }
    call_menu();
}

void search_veterinary_by_cpf() {
    string value;
    cin >> value;

    cout << value << endl;

    if (veterinarians_by_cpf.find(value) == veterinarians_by_cpf.end()) {
        cout << "Não existe um veterinário com esse CPF." << endl;
    } else {
        cout << veterinarians_by_cpf.find(value)->first << ": " << veterinarians_by_cpf.find(value)->second << endl;
    }
    call_menu();
}

void search_handler_by_id() {
    int value;
    cin >> value;
    if (handlers.find(value) == handlers.end()) {
        cout << "Não existe um tratador com esse ID." << endl;
    } else {
        cout << handlers.find(value)->first << ": " << handlers.find(value)->second << endl;
    }
    call_menu();
}

void search_handler_by_cpf() {
    string value;
    cin >> value;

    cout << value << endl;

    if (handlers_by_cpf.find(value) == handlers_by_cpf.end()) {
        cout << "Não existe um tratador com esse CPF." << endl;
    } else {
        cout << handlers_by_cpf.find(value)->first << ": " << handlers_by_cpf.find(value)->second << endl;
    }
    call_menu();
}

void update_veterinary() {
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

    call_menu();
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

    call_menu();
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
