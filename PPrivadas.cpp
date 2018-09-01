#include "Plantas.h"
#include "PPrivadas.h"

#include <string>
using namespace std;

PPrivadas::PPrivadas() {

}

PPrivadas::PPrivadas(string pnombreb, string pnombre, int panofund, string ppaisubic, 
double pingresos, double pegresos, double pganancianeta, int pfuncionamiento): 
Plantas(pnombre,panofund,ppaisubic,pingresos,pegresos,pganancianeta,pfuncionamiento) {
    nombreb = pnombreb;
}

PPrivadas::~PPrivadas() {

}

//getters
string PPrivadas::getNombreb() {
    return nombreb;
}

//getters
void PPrivadas::setNombreb(string pnomb) {
    nombreb = pnomb;
}