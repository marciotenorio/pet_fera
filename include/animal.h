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
        Animal(int p_id, string p_class_, string p_baptismal_name);
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
