#include "animal.h"


class Bird: public Animal {
    protected:
        double nozzle_size_cm;
        double wingspan;
        
        Bird(double nozzle_size_cm, double wingspan);
        Bird();
    public:
        double get_nozzle_size_cm();
        void set_nozzle_size_cm(double nozzle_size_cm);
        double get_wingspan();
        void set_wingspan(double wingspan);
        friend istream &operator>>(istream &input, Bird &bird);
        friend ostream &operator<<(ostream &output,const Bird &bird);
};
