#include "Plantas.h"

#include <string>
using namespace std;

Plantas::Plantas() {

}

Plantas::Plantas(string pnombre, int panofund, string ppaisubic, double pingresos, double pegresos, 
double pganancianeta, int pfuncionamiento) {
    nombre = pnombre;
    anoFund = panofund;
    paisUbic = ppaisubic;
    ingresos = pingresos;
    egresos = pegresos;
    gananciaNeta = pganancianeta;
    funcionamiento = pfuncionamiento;
}

Plantas::~Plantas() {

}

//getters
string Plantas::getNombre() {
    return nombre;
}

int Plantas::getAnoFund() {
    return anoFund;
}

string Plantas::getPaisUbic() {
    return paisUbic;
}

double Plantas::getIngresos() {
    return ingresos;
}

double Plantas::getEgresos() {
    return egresos;
}

double Plantas::getGananciaNeta() {
    return gananciaNeta;
}

int Plantas::getFuncionamiento() {
    return funcionamiento;
}

//setters
void Plantas::setNombre(string nomb) {
    nombre = nomb;
}

void Plantas::setAnoFund(int af) {
    anoFund = af;
}

void Plantas::setPaisUbic(string pu) {
    paisUbic = pu;
}

void Plantas::setIngresos(double ingre) {
    ingresos = ingre;
}

void Plantas::setEgresos(double egre) {
    egresos = egre;
}

void Plantas::setGananciaNeta(double gn) {
    gananciaNeta = gn;
}

void Plantas::setFuncionamiento(int fun) {
    funcionamiento = fun;
}