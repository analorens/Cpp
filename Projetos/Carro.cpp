#include <iostream>
#include <string>
using namespace std;

class Carro{
    int combustivel;
    int distancia;

    public:
    //Construtores 
    Carro(int combustivel, int distancia){
        this-> combustivel = combustivel;
        this-> distancia = distancia;
    }
    //construtor padrao
    Carro(){
        combustivel =0;
        distancia =0;
    }
    //metodos 
    void setAbastecerCombustivel(int quant){
        if ((combustivel + quant) <= 50){
            combustivel+= quant;
        }
    }
    void setMoverCarro(int km){
        float litros = km /15.0;
        if(litros <= combustivel){
            combustivel -= litros;
            distancia+= km;
        }
        else{
            cout<<"O combustivel eh insuficiente para percorrer essa distancia! "<<endl;
        }
    }
    //para exibir
    float getcombustivelRestante(){ 
        return combustivel;
    }
    int getdistanciaTotal(){
        return distancia;
    }

};

int main(void){

    Carro c1;
    Carro c2;

    c1.setAbastecerCombustivel(20);
    c2.setAbastecerCombustivel(30);

    c1.setMoverCarro(200);
    c2.setMoverCarro(400);

    cout<<"Distancia total percorrida pelo carro 1: "<<c1.getdistanciaTotal()<<"km."<<endl;;
    cout<<"Distancia total peccorida pelo carro 2: "<<c2.getdistanciaTotal()<<"km."<<endl;

    cout<<"Combustivel restante do carro 1: "<<c1.getcombustivelRestante()<<"l"<<endl;
    cout<<"Combustivel restante do carro 2: "<<c2.getcombustivelRestante()<<"l"<<endl;

return 0;
}