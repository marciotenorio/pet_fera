#include "petfera.h"
#include "handler.h"
#include "veterinary.h"

#define CREATE_ANIMAL 1
#define DELETE_ANIMAL 2
#define UPDATE_ANIMAL 3
#define READ_ANIMAL 4
#define READ_ANIMAL_BY_CLASS 5
#define READ_ANIMAL_BY_RESPONSIBILITY 6
#define CREATE_VETERINARY 7
#define CREATE_HANDLER 8
#define EXIT 0


void create_handler() {
    Handler handler;
    cin >> handler;
    cout << handler << endl;
    handler.write_in_csv();
    call_menu();
}

void create_veterinary() {
    Veterinary veterinary;
    cin >> veterinary;
    cout << veterinary << endl;
    veterinary.write_in_csv();
    call_menu();
}

void menu() {
    unsigned int OPTION;

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
        case EXIT:
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
