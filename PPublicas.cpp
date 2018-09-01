#include "Plantas.h"
#include "PPublicas.h"

#include <string>
using namespace std;

PPublicas::PPublicas() {

}

PPublicas::PPublicas(int pmaxclientes, string pnombreaseguradora, string pnombre, int panofund, 
string ppaisubic, double pingresos, double pegresos, double pganancianeta, int pfuncionamiento): 
Plantas(pnombre,panofund,ppaisubic,pingresos,pegresos,pganancianeta,pfuncionamiento) {
    maxClientes = pmaxclientes;
    nombreAseguradora = pnombreaseguradora;
}

Plantas::~Plantas() {

}

//getters
int PPublicas::getMaxClientes() {
    return maxClientes;
}

string PPublicas::getNombreAseguradora() {
    return nombreAseguradora;
}

//setters
void PPublicas::setMaxClientes(int mc) {
    maxClientes = mc;
}

void PPublicas::setNombreAseguradora(string na) {
    nombreAseguradora = na;
}

