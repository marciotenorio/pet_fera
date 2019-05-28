#include <iostream>
#include <fstream>
#include <typeinfo>
#include "petfera.h"
#include "veterinary.h"
#include "handler.h"

using namespace std;


template <class T>
class CsvEmployeeManager {
    private:
        T object;

    public:
        CsvEmployeeManager(T object) {
            this->object = object;
        }

        void display_result() {
            cout << "ID: " << object.get_id() << endl;
            cout << "Nome: " << object.get_name() << endl;
            cout << "CPF: " << object.get_cpf() << endl;
            cout << "Idade: " << object.get_age() << endl;
            cout << "Tipo sanguíneo: " << object.get_blood_type() << endl;
            cout << "Fator RH: " << object.get_rh_factor() << endl;
            cout << "Especialidade: " << object.get_specialty() << endl;
        }

        // T read() {
        //
        // }

        void write() {
            fstream file;
            file.open("data/employees.csv", ios::out | ios::app);
            file << object.format_csv();
        }
};


int main(int argc, char const *argv[]) {
    Veterinary veterinary(
      2,
      "Daniel Oscar",
      "123.456.789-10",
      30,
      "O",
      '+',
      "Felinos",
      "CRMV-GO 0406"
    );

    Handler handler(
      1,
      "Manaia Filho",
      "893.009.112-89",
      50,
      "AB",
      '-',
      "Cães",
      2
    );

    CsvEmployeeManager<Veterinary> veterinaryCsv(veterinary);
    CsvEmployeeManager<Handler> handlerCsv(handler);

    cout << "Veterinary display:" << endl;
    veterinaryCsv.display_result();
    veterinaryCsv.write();

    cout << endl << "Handler display:" << endl;
    handlerCsv.display_result();
    handlerCsv.write();
    // menu();

    return 0;
}
