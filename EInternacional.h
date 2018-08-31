#ifndef EINTERNACIONAL_H
#define EINTERNACIONAL_H

#include "CEmpresarial.h"
#include "Clientes.h"

#include <string>
using namespace std;

class EInternacional: public CEmpresarial {
    private:
        string paisOrigen;
        int numSucurs;

    public:
        EInternacional();
        EInternacional(string,int,int,int,int,double);
        ~EInternacional();

        //getters
        string getPaisOrigen();
        int getNumSucurs();

        //setters
        void setPaisOrigen(string);
        void setNumSucurs(int);
};
#endif