#ifndef __ANIMAL_H
#define __ANIMAL_H

#include <string>
#include "veterinary.h"
#include "handler.h"

using namespace std;


class Animal {
    protected:
        int id;
        string class_;
        string scientific_name;
        char gender;
        double size;
        string diet;
        string baptismal_name;
        Veterinary veterinary;
        Handler handler;

    public:
        Animal();
        Animal(int c_id, string c_class_, string p_scientific_name,  
               char c_gender, double c_size, string c_diet, 
               string c_baptismal_name, Veterinary c_veterinary
               Handler c_handler);
        ~Animal();

          // void setup(int first, int second) {
          //     width = first;
          //     height = second;
          // }
          //
          // virtual int area() {
          //     return 0;
          // }
          // virtual int area() = 0;
};

#endif
