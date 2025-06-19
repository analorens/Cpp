#include <iostream> 
using namespace std;

class CondicionadorAr{
   
    int potencia;
    int temperaturaAmbiente;
    int temperaturaExterna;

    public:
    //construtores
    CondicionadorAr(int potencia, int temperaturaExterna){
        this-> potencia = potencia;
        this->temperaturaExterna = temperaturaExterna;
    }
    //construtor padrao
    CondicionadorAr(){
        potencia =0;
        temperaturaExterna = 25;
    }
    //metodos definicao 
    void settemperaturaExterna(int graus){
        temperaturaExterna = graus;
    }
    int gettemperaturaExterna(){
        return temperaturaExterna;
    }
    void setPotencia(int nivel){
        if(nivel >= 0 && nivel <= 10){
            potencia = nivel;
        }
        
    }
    float getNovaTemp(){
        float redutor = (potencia * 1.8);
        temperaturaAmbiente = temperaturaExterna - redutor;

        if(temperaturaAmbiente < temperaturaExterna - 18.0){
            temperaturaAmbiente = temperaturaExterna - 18.0;
        }
        return temperaturaAmbiente;
    }


};

int main(void){
    CondicionadorAr c1;
    CondicionadorAr c2;

    c1.settemperaturaExterna(22);
    c2.settemperaturaExterna(35);

    c1.setPotencia(5);
    c2.setPotencia(10);

    cout<< "Nova temperatura: "<<c1.getNovaTemp()<< " graus"<<endl;;
    cout<< "Nova temperatura do segundo: "<<c2.getNovaTemp()<< " graus"<<endl;

return 0;
}