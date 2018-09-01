#include "Plantas.h"
#include "PPublicas.h"
#include "PMixtas.h"

#include <vector>

PMixtas::PMixtas() {

}

PMixtas::PMixtas(vector<Clientes*> pclients, int pmaxclientes, string pnombreaseguradora, 
string pnombre, int panofund, string ppaisubic, double pingresos, double pegresos, double pganancianeta, 
int pfuncionamiento): PPublicas(pmaxclientes,pnombreaseguradora,pnombre,panofund,ppaisubic,pingresos,
pegresos,pganancianeta,pfuncionamiento) {
    clients = pclients;
}

PMixtas::~PMixtas() {

}

//getters
vector<Clientes*> PMixtas::getVecClientes() {
    return clients;
}

//setters
void PMixtas::setVecClientes(vector<Clientes*> pclients) {
    clients = pclients;
}