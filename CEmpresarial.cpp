#include "Clientes.h"
#include "CEmpresarial.h"

CEmpresarial::CEmpresarial() {

}

CEmpresarial::CEmpresarial(int pnivelpop, int pnumtelef, int pnumidenti, double pfondomonet): 
Clientes(pnumidenti, pfondomonet) {
    nivelPop = pnivelpop;
    numTelef = pnumtelef;
}

CEmpresarial::~CEmpresarial() {

}

//getters
int CEmpresarial::getNivelPop() {
    return nivelPop;
}

int CEmpresarial::getNumTelef() {
    return numTelef;
}

//setters
void CEmpresarial::setNivelPop(int np) {
    nivelPop = np;
}

void CEmpresarial::setNumTelef(int nt) {
    numTelef = nt;
}