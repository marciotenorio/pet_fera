#ifndef __ANIMAL_H
#define __ANIMAL_H

#include <string>
#include "veterinary.h"
#include "handler.h"

using namespace std;


class Animal {
    protected:
        int id;
        string employee_name;
        string class_;
        string scientific_name;
        char gender;
        double size;
        string diet;
        string baptismal_name;
        Veterinary veterinary;
        Handler handler;
        
        Animal();
        Animal(
            int id,
            string employee_name;
            string class_, 
            string scientific_name,  
            char gender, 
            double size,
            string diet, 
            string baptismal_name, 
            Veterinary veterinary
            Handler handler);
        //~Animal();
    public:

        int get_id();
        void set_id(int id);
        string get_employee_name();
        void set_employee_name(string employee_name);
        string get_class_();
        void set_class_(string class_);
        string get_scientific_name();
        void set_scientific_name(string scientific_name);
        char get_gender();
        void set_gender(char gender);
        double get_size();
        void set_size(double size);
        string get_diet();
        void set_diet(string diet);
        string get_baptismal_name();
        void set_baptismal_name(string baptism_name);
        Veterinary get_veterinary();
        void set_veterinary(Veterinary veterinary);
        Handler get_handler();
        void set_handler(Handler handler);
        friend istream &operator>>(istream &input, Animal &animal);
        friend ostream &operator<<(ostream &output, const Animal &animal);

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
