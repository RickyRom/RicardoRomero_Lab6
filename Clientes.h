#ifndef CLIENTES_H
#define CLIENTES_H

using namespace std;

class Clientes {
    private:
        int numIdenti;
        double fondoMonet;

    public:
        Clientes();
        Clientes(int, double);
        ~Clientes();

        //getters
        int getNumIdenti();
        double getFondoMonet();

        //setters
        void setNumIdenti(int);
        void setFondoMonet(double);
};
#endif