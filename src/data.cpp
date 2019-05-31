#include "data.h"

int load_data()
{
    fstream FILE_employee("employee.csv");
    fstream FILE_animals("animals.csv");
    string line_data;
    int control = 0;

    /* Load all data in employee.csv in one container 
     * of type "list" what contains the class Veterinary and 
     * Handler.
     * 
     * "control" is a parameter to control which are the class
     * loaded in memory. 
     * 1 = No have "employee.csv", so do not veterinarians and 
     * handlers.
     * 2 = No have "animals.csv", do not no one animals registered.
     */

    istringstream iss_line_data(line_data);
    string data;

    vector<string> info_handler, info_veterinary,
                   info_native_amphibian, info_native_bird,
                   info_native_mammalia, info_native_reptile,
                   info_exotic_amphibian, info_exotic_bird,
                   info_exotic_mammalia, info_exotic_reptile;
                   
    Handler handler;
    Veterinary veterinary;

    ExoticAmphibian exotic_amphibian;
    ExoticBird exotic_bird;
    ExoticMammal exotic_mammal;
    ExoticReptile exotic_reptile;

    NativeAmphibian native_amphibian;
    NativeBird native_bird;
    NativeMammal native_mammal;
    NativeReptile native_reptile;
    
    auto it;

    if( FILE_employee.bad() ){
        control++;
    }
    else
    {
        while(FILE_employee >> line_data)
        {
            /* 
            * Load all data about Handler class in 
            * list<Handler> LIST_HANDLER
            * declare in menu function.
            * 
            * Load all data about Veterinary class in
            * list<Veterinary> LIST_VETERINARY
            * declare in menu function.
            */            

            if( line_data.find("Tratador") != string::npos
                            |
                line_data.find("tratador") != string::npos)
            {

                while( getline(iss_line_data, data, ';'))
                {
                    info_handler.push_back(data);
                }

                auto it = info_handler.begin();

                handler.id = it;
                handler.name = ++it;
                handler.cpf = ++it;
                handler.age = ++it;
                handler.blood_type = ++it;
                handler.rh_factor = ++it;
                handler.specialty = ++it;
                handler.security_level = ++it;

                LIST_HANDLER.push_front(handler);

                info_handler.clear();

            }

            else
            {

                while( getline(iss_line_data, data, ';'))
                {
                    info_veterinary.push_back(data);
                }

                veterinary.set_id(++it);
                veterinary.set_name(++it);
                veterinary.set_cpf(++it);
                veterinary.set_age(++it);
                veterinry.set_blood_type(++it);
                veterinary.set_rh_factor(++it);
                veterinary.set_specialty(++it);
                veterinary.set_crmv(++it);

                LIST_VETERINARY.push_front(veterinary);

                info_veterinary.clear();

            }
            
        }
    }

    if( FILE_animals.bad() ){
        control++;
        return control;
    }
    else
    {
        while(FILE_animals >> line_data)
        {
            /*
            * Select Amphibian class type
            */    
            if( (line_data.find("Anfibio") && line_data.find("Exotico") ) 
                                        !=
                                   string::npos)
            {
                while( getline(iss_line_data, data, ';'))
                {
                    info_exotic_amphibian.push_back(data);
                }
                
                it = info_exotic_amphibian.begin();

                exotic_amphibian.set_id(it);
                exotic_amphibian.set_class_(++it);
                exotic_amphibian.set_scientific_name(++it);
                exotic_amphibian.set_gender(++it);
                exotic_amphibian.set_size(++it);
                exotic_amphibian.set_diet(++it);
                exotic_amphibian.set_baptismal_name(++it);
                exotic_amphibian.set_total_seedlings(++it);
                exotic_amphibian.set_last_molt(++it);
                exotic_amphibian.set_country_origin(++it);


                LIST_EXOTIC_AMPHIBIAN.push_front(exotic_amphibian);

                info_exotic_amphibian.clear();
            }
        }
    }
    

}