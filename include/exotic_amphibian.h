#ifndef __EXOTIC_AMPHIBIAN_H
#define __EXOTIC_AMPHIBIAN_H

#include "exotic_animal.h"
#include "amphibian.h"


class ExoticAmphibian: public ExoticAnimal, public Amphibian { /* Anfíbio exótico herda os atributos da classe anfíbio*/
    public:
        ExoticAmphibian();
        string format_csv();
        //int get_id();
        friend istream &operator>>(istream &input, ExoticAmphibian &exotic_amphibian);
        friend ostream &operator<<(ostream &output, const ExoticAmphibian &exotic_amphibian);
};

#endif