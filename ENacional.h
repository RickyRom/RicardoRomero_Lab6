#ifndef ENACIONAL_H
#define ENACIONAL_H

#include "CEmpresarial.h"

using namespace std;

class ENacional: public CEmpresarial {
    private:
        int rtn;

    public:
        ENacional();
        ENacional(int,int,int,int,double);
        ~ENacional();

        //getters
        int getRTN();
        //setters
        void setRTN(int);
};
#endif