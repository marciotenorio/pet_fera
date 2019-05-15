#include "include/animal.h"

Animal::Animal(int c_id, string c_class_, string c_scientific_name,  
               char c_gender, double c_size, string c_diet, 
               string c_baptismal_name, Veterinary c_veterinary,
               Handler c_handler)
{
    id = c_id; 
    class_ = c_class_; 
    scientific_name = c_scientific_name;
    gender = c_gender;
    size = c_size;
    diet = c_diet;
    baptismal_name = c_baptismal_name;
    veterinary = c_veterinary;
    handler = c_handler;
}