#include <iostream>
using namespace std;

class Relogio{
    //private por default
    int hora;
    int minuto;
    int segundo;

    public:
    //construtores
    Relogio(int hora, int minuto, int segundo){
        this-> hora = hora;
        this-> minuto = minuto;
        this-> segundo = segundo;
    }
    //construtor padrao
    Relogio(){
        hora =0; 
        minuto =0;
        segundo =0;
    }
    void setHora(int hora, int minuto, int segundo){
        this->hora = hora;
        this->minuto = minuto;
        this->segundo = segundo;
    }
    void getHora(int &h, int &m, int &s){
        h = hora;
        m = minuto;
        s = segundo;
        
    }
    //metodo avanca
    void avanca(){
        segundo++;
        if(segundo == 60 ){
            segundo =0;
            minuto++;
        }
        if(minuto == 60){
            minuto =0;
            hora++;
        }
        if(hora == 24){
            hora =0;
        }
    }
};