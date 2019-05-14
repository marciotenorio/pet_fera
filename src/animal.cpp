

#include "include/animal.h"
#include <fstream>

Animal::inserct_animal()
{
  FILE_register.open("animal.csv");
  string index;
  cout<<"Type the animal's id: "<<endl;
  id = getline(id;stdin);
  strcpy(index,id);
  strcpy(index,';');

  cout<<"Type the animal's class: "<<endl;
  class_ = getline(class_;stdin);
  strcpy(index,class_);
  strcpy(index,';');

  cout<<"Type the animal's scientific name: "<<endl;
  scientific_name = getline(scientific_name;stdin);
  strcpy(index,scientific_name);
  strcpy(index,';');

  cout<<"Type the animal's gender: "<<endl;
  cin>>gender;
  strcpy(index,gender);
  strcpy(index,';');

  cout<<"Type the animal's size: "<<endl;
  cin>>size;
  strcpy(index,size);
  strcpy(index,';');

  cout<<"Type the animal's diet: "<<endl;
  diet = getline(diet, stdin);
  strcpy(index,diet);
  strcpy(index,';');

  cout<<"Type the animal's baptismal name: "<<endl;
  baptismal_name = getline(baptismal_name, stdin);
  strcpy(index,baptismal_name);
  strcpy(index,';');


  /*cout<<"Type the animal's veterinary name: "<<endl;
  Veterinary::setName() = getline(???, stdin);
  strcpy(index,name);
  strcpy(index,';');
  */
  FILE_register<<index;

}