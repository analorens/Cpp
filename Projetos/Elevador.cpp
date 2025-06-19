#include <iostream>
using namespace std;

class Elevador{
    //private por default
    int andar_atual=0;
    int total_andares;
    int capacidade;
    int total_pessoas=0;

    public: 
    // construtores
    Elevador(int andar_atual, int total_andares, int capacidade, int total_pessoas){
        this->andar_atual = andar_atual;
        this->total_andares = total_andares;
        this->capacidade = capacidade;
        this->total_pessoas = total_pessoas;
    }
    Elevador(){
        andar_atual = 0;
        total_andares = 0;
        capacidade = 0;
        total_pessoas = 0;
    }
    //metodos
    void inicializa(int capacidade, int total_andares){
       this->capacidade = capacidade;
        this->total_andares = total_andares;
        this->andar_atual = 0;
        this->total_pessoas = 0; 
    }
    void entra(){
        if(total_pessoas != capacidade){
            total_pessoas++;
        }
        else{
            cout<<"Elevador cheio!"<<endl;
        }
    }
    void sai(){
        if(total_pessoas != 0){
            total_pessoas--;
        }
    }
    void sobe(){
        if(andar_atual !=total_andares){
            andar_atual++;
        }
        else{
            cout<< "O ultimo andar ja foi alcancado!"<<endl;
        }
    }
    void desce(){
        if(andar_atual !=0){
            andar_atual--;
        }
    }

    //get's
    int getandar_atual(){
        return andar_atual;
    }
    int gettotal_andares(){
        return total_andares;
    }
    int getcapacidade(){
        return capacidade;
    }
    int gettotal_pessoas(){
        return total_pessoas;
    }   
};