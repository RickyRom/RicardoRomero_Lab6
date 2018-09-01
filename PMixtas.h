#ifndef PMIXTAS_H
#define PMIXTAS_H

#include "PPublicas.h"
#include "Clientes.h"
#include <vector>

class PMixtas: public PPublicas {
    private:
        vector<Clientes*> clients;

    public:
        PMixtas();
        PMixtas(vector<Clientes*>,int,string,string,int,string,double,double,double,int);
        ~PMixtas();

        //getters
        vector<Clientes*> getVecClientes();

        //setters
        void setVecClientes(vector<Clientes*>);
};
#endif