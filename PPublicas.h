#ifndef PPUBLICAS_H
#define PPUBLICAS_H

#include "Plantas.h"

#include <string>
using namespace std;

class PPublicas: public Plantas {
    private:
        int maxClientes;
        string nombreAseguradora;
    
    public:
        PPublicas();
        PPublicas(int,string,string,int,string,double,double,double,int);
        ~PPublicas();

        //getters
        int getMaxClientes();
        string getNombreAseguradora();

        //setters
        void setMaxClientes(int);
        void setNombreAseguradora(string);
};
#endif