#ifndef PLANTAS_H
#define PLANTAS_H

#include <string>
using namespace std;

class Plantas {
    private:
        string nombre;
        int anoFund;
        string paisUbic;
        double ingresos;
        double egresos;
        double gananciaNeta;
        int funcionamiento;
    
    public:
        Plantas();
        Plantas(string,int,string,double,double,double,int);
        ~Plantas();

        //getters
        string getNombre();
        int getAnoFund();
        string getPaisUbic();
        double getIngresos();
        double getEgresos();
        double getGananciaNeta();
        int getFuncionamiento();

        //setters
        void setNombre(string);
        void setAnoFund(int);
        void setPaisUbic(string);
        void setIngresos(double);
        void setEgresos(double);
        void setGananciaNeta(double);
        void setFuncionamiento(int);
};
#endif