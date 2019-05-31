#ifndef __ANIMAL_H
#define __ANIMAL_H

#include <string>

using namespace std;


class Animal { /* Atributos protegidos da classe Animal */
    protected:
        int id;
        string class_;
        string scientific_name;
        char gender;
        double size;
        string diet;
        string baptismal_name;
        int veterinary_id;
        int handler_id;
        
        Animal(); /* Construtor Padrão */
        Animal(
            int id,
            string class_, 
            string scientific_name,  
            char gender, 
            double size,
            string diet, 
            string baptismal_name, 
            int veterinary_id,
            int handler_id);
        //~Animal();
    public:
        /* Métodos 'get' e 'set'  */

        int get_id();
        void set_id(int id);
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
        int get_veterinary_id();
        void set_veterinary_id(int veterinary_id);
        int get_handler_id();
        void set_handler_id(int handler_id);
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
