#ifndef CEMPRESARIAL_H
#define CEMPRESARIAL_H

#include "Clientes.h"

using namespace std;

class CEmpresarial: public Clientes {
    private:
        int nivelPop;
        int numTelef;

    public:
        CEmpresarial();
        CEmpresarial(int,int,int,double);
        ~CEmpresarial();

        //getters
        int getNivelPop();
        int getNumTelef();

        //setters
        void setNivelPop(int);
        void setNumTelef(int);
};
#endif