#include "Clientes.h"
#include "CEmpresarial.h"
#include "ENacional.h"

ENacional::ENacional() {

}

ENacional::ENacional(int prtn, int pnivelpop, int pnumtelef, int pnumidenti, double pfondomonet): 
CEmpresarial(pnivelpop,pnumtelef,pnumidenti,pfondomonet) {
    rtn = prtn;
} 

ENacional::~ENacional() {

}

//getters
int ENacional::getRTN() {
    return rtn;
}

//setters
void ENacional::setRTN(int RTN) {
    rtn = RTN;
}

