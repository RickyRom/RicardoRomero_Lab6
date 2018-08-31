#include "Clientes.h"

Clientes::Clientes() {

}

Clientes::Clientes(int pnumidenti, double pfondomonet) {
    numIdenti = pnumidenti;
    fondoMonet = pfondomonet;
}

Clientes::~Clientes() {

}

//getters
int Clientes::getNumIdenti() {
    return numIdenti;
}

double Clientes::getFondoMonet() {
    return fondoMonet;
}

//setters
void Clientes::setNumIdenti(int ni) {
    numIdenti = ni;
}

void Clientes::setFondoMonet(double fm) {
    fondoMonet = fm;
}