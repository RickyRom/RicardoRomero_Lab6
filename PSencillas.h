#ifndef PSENCILLAS_H
#define PSENCILLAS_H

#include "PPublicas.h"
#include "Clientes.h"
#include <vector>

class PSencillas: public PPublicas {
    private:
        vector<Clientes*> clients;

    public:
        PSencillas();
        PSencillas(vector<Clientes*>,int,string,string,int,string,double,double,double,int);
        ~PSencillas();

        //getters
        vector<Clientes*> getVecClientes();

        //setters
        void setVecClientes(vector<Clientes*>);
};
#endif