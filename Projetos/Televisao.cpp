#include <iostream>
using namespace std;

class Televisao{
    private:
    int controleVolume;
    int controleCanal;

    public:
    //contrutor
    Televisao(int controleVolume, int controleCanal){
        this-> controleVolume = controleVolume;
        this-> controleCanal = controleCanal;
    }
    //contrutor padrao
    Televisao(){
        controleVolume = 10;
        controleCanal = 1;
    }

    void aumentaVolume(){
        if(controleVolume > 0 && controleVolume <100){
            controleVolume++;
        }
    }
    void diminuiVolume(){
        if(controleVolume > 0 && controleVolume < 100){
            controleVolume--;
        }
    }
    void aumentaCanal(){
        if(controleCanal > 0){ // pois n existe canal negativo 
        controleCanal++;
        }
    }
    void diminuiCanal(){
        if(controleCanal > 0){
            controleCanal--;
        }
    }
    void trocaCanal(int canalIndicado){
        if(controleCanal != canalIndicado && canalIndicado != 0){
            controleCanal = canalIndicado;
        }
    }
    //exibicao
    void mostraVolume(){
        cout<< "Volume atual: "<< controleVolume<< endl;
    }
    void mostraCanal(){
        cout<< "Canal atual: "<< controleCanal<<endl;
    }
};

int main(void){
    Televisao tv;

    tv.mostraCanal();
    tv.mostraVolume();

    cout<< "Aumentando o canal 3 vezes..."<< endl;
    tv.aumentaCanal();
    tv.aumentaCanal();
    tv.aumentaCanal();
    tv.mostraCanal();

    cout<< "Aumentando volume 2 vezes..."<< endl;
    tv.aumentaVolume();
    tv.aumentaVolume();
    tv.mostraVolume();

    cout << "Diminuindo volume 3 vezes..."<< endl;
    tv.diminuiVolume();
    tv.diminuiVolume();
    tv.diminuiVolume();
    tv.mostraVolume();

    cout<< "Trocando de canal manualmente: "<<endl;
    tv.trocaCanal(50);
    tv.mostraCanal();

return 0;
}