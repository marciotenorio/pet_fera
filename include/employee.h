#ifndef __EMPLOYEE_H
#define __EMPLOYEE_H

#include <string>

using namespace std;


class Employee {
    protected:
        int id;
        string name;
        string cpf;
        short int age;
        string blood_type;
        char rh_factor;
        string specialty;

      // public:
      //     void setup(int first, int second) {
      //         width = first;
      //         height = second;
      //     }
      //
      //     virtual int area() {
      //         return 0;
      //     }
      //     virtual int area() = 0;
};

#endif
