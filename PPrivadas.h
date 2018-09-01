#ifndef PPRIVADAS_H
#define PPRIVADAS_H

#include "Plantas.h"

#include <string>
using namespace std;

class PPrivadas: public Plantas {
    private:
        string nombreb;
    
    public:
        PPrivadas();
        PPrivadas(string,string,int,string,double,double,double,int);
        ~PPrivadas();

        //getters
        string getNombreb();

        //setters
        void setNombreb(string);
};
#endif