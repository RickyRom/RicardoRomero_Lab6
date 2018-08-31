#include "Clientes.h"
#include "CIndividual.h"

#include <string>
using namespace std;

CIndividual::CIndividual() {

}

CIndividual::CIndividual(int pnumid, string pgradestud, int pidentificador, int pnumidenti, 
double pfondomonet): Clientes(pnumidenti,pfondomonet) {
    numID = pnumid;
    gradEstud = pgradestud;
    identificador = pidentificador;
}

CIndividual::~CIndividual() {

}

//getters
int CIndividual::getNumID() {
    return numID; 
}

string CIndividual::getGradEstud() {
    return gradEstud;
}

int CIndividual::getIdentificador() {
    return identificador;
}

//setters
void CIndividual::setNumID(int ni) {
    numID = ni;
}

void CIndividual::setGradEstud(string ge) {
    gradEstud = ge;
}

void CIndividual::setIdentificador(int iden) {
    identificador = iden;
}
