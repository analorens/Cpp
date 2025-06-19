#include <iostream>
#include <cmath>
using namespace std;

class CirculoSimples{
    private:
    float r;
    float x,y;
    //metodos privados
    float area(){
        return 3.14 * std::pow(r,2);
    }
    float circunferencia(){
        return 2*(3.14 * r);
    }
    float distancia(CirculoSimples& outro){
        float dx = x - outro.x;
        float dy = y - outro.y; 
        return sqrt(pow(dx,2) + pow(dy,2));
    }

    public:
    //construtores
    CirculoSimples(float r, float x, float y){
        this-> r = r;
        this->x = x;
        this->y = y;
    }
    //construtor padrao 
    CirculoSimples(){
        r =0.0;
        x =0.0;
        y =0.0;
    }
    //metodos publicos
    void setdefineRaio(float r){
        this-> r = r;
    }
    void setAumentaRaio(float porcentagem){
        r = r + (r * porcentagem)/ 100;
    }
    void setXY(float x, float y){
        this -> x = x;
        this -> y =y;
    }
    //exibicao
    void valorRaio(){
        cout<<"O valor do raio eh: "<< r <<endl;
    }
    void valorCentro(){
        cout<<"Centro do circulo: ("<< x << "," << y << ")"<<endl;

    }
    void areaCirculo(){
        cout<<"A area do circulo: "<< area() <<endl;
    }
};

int main(void){

CirculoSimples principal(3.0, 2.0, 2.0);
CirculoSimples outro(6.0, 8.0,8.0);

//teste para o valor do raio
principal.valorRaio();
outro.valorRaio();
//teste para o valor do centro
principal.valorCentro();
outro.valorCentro();
//teste para da area do circulo 
principal.areaCirculo();
outro.areaCirculo();

cout<<"Alterando o raio do circulo principal para 10.."<<endl;
principal.setdefineRaio(10.0);
principal.valorRaio();

cout<<"Aumentando o raio do circulo secundario em 50%"<< endl;
outro.setAumentaRaio(50.0);
outro.valorRaio();
return 0;
}