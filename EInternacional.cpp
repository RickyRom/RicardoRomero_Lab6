#include "Clientes.h"
#include "CEmpresarial.h"
#include "EInternacional.h"

#include <string>
using namespace std;

EInternacional::EInternacional() {

}

EInternacional::EInternacional(string ppaisorigen, int pnumsucurs, int pnivelpop, 
int pnumtelef, int pnumidenti, double pfondomonet): 
CEmpresarial(pnivelpop,pnumtelef,pnumidenti,pfondomonet){
    paisOrigen = ppaisorigen;
    numSucurs = pnumsucurs;
}

EInternacional::~EInternacional() {

}

//getters
string EInternacional::getPaisOrigen() {
    return paisOrigen;
}

int EInternacional::getNumSucurs() {
    return numSucurs;
}

//setters

void EInternacional::setPaisOrigen(string po) {
    paisOrigen = po;
}

void EInternacional::setNumSucurs(int ns) {
    numSucurs = ns;
}