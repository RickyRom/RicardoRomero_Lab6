#ifndef CINDIVIDUAL_H
#define CINDIVIDUAL_H

#include "Clientes.h"

#include <string>
using namespace std;

class CIndividual: public Clientes {
    private:
        int numID;
        string gradEstud;
        int identificador;

    public:
        CIndividual();
        CIndividual(int,string,int,int,double);
        ~CIndividual();        

        //getters
        int getNumID();
        string getGradEstud();
        int getIdentificador();

        //setters
        void setNumID(int);
        void setGradEstud(string);
        void setIdentificador(int);
        
};
#endif