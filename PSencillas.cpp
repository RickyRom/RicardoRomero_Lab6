#include "Plantas.h"
#include "PPublicas.h"
#include "PSencillas.h"

#include <vector>

PSencillas::PSencillas() {

}

PSencillas::PSencillas(vector<Clientes*> pclients, int pmaxclientes, string pnombreaseguradora, 
string pnombre, int panofund, string ppaisubic, double pingresos, double pegresos, double pganancianeta, 
int pfuncionamiento): PPublicas(pmaxclientes,pnombreaseguradora,pnombre,panofund,ppaisubic,pingresos,
pegresos,pganancianeta,pfuncionamiento) {
    clients = pclients;
}

PSencillas::~PSencillas() {

}

//getters
vector<Clientes*> PSencillas::getVecClientes() {
    return clients;
}

//setters
void PSencillas::setVecClientes(vector<Clientes*> pclients) {
    clients = pclients;
}