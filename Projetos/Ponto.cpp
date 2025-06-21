#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Ponto{
    private: 
        float x;
         float y;
    
    public:

    Ponto(float x, float y){
        this->x = x;
        this->y =y;
    }
    Ponto(){
        x = 0.0;
        y = 0.0;
    }

    void setposicao(float x, float y){
        this->x=x;
        this->y=y;
    }
    float getx(){
        return x;
    }
    float gety(){
        return y;
    }
    float calculaDistancia(Ponto& outro){
        return sqrt(pow(x- outro.x,2) + pow(y- outro.y,2));
    }
};

class Circulo : public Ponto{ // herança
    private: 
        float raio;
    public:
    Circulo(): Ponto(){
        raio = 0.0;
    }
    Circulo(float x, float y, float raio) : Ponto (x,y){
        this-> raio = raio;
    }
    void setRaio(float raio){
        this->raio = raio;
    }
    float getRaio(){
        return raio;
    }
    float calculaArea(){
        return 3.14 * raio * raio;
    }
    float calculaCircunferencia(){
        return 2 * 3.14 * raio;
    }

};

class Roda : public Circulo{
    private: 
    string material;
    int aro;
    string fabricante;

    public: 
    Roda(): Circulo(){
        material = "";
        aro = 0;
        fabricante = "";
    }
    Roda(string material, int aro, string fabricante) : Circulo(){
        this->material = material;
        this->aro = aro;
        this->fabricante = fabricante;
    }
    void setMaterial(string material){
        this-> material = material;
    }
    string getMaterial(){
        return material;
    }
    void setAro(int aro){
        this-> aro = aro;
    }
    int getAro(){
        return aro;
    }
    void setFabricante(string fabricante){
        this-> fabricante = fabricante;
    }
    string getFabricante(){
        return fabricante;
    }
};

class Esfera : public Circulo{
    public:
        Esfera() : Circulo(){};
            Esfera (float x, float y, float raio) : Circulo (x,y,raio){};
        float calculaVolume(){
            float raio = getRaio();
            return (4.0/3.0) * 3.14 * pow(raio,3);
        }
};

int main(void){

    Ponto p1, outro;
    Circulo c1;
    Roda r1; 
    Esfera e1;

    //teste ponto
    p1.setposicao(2.0,3.0);
    outro.setposicao(4.0,6.0);
    cout<<"Distancia entre p1 e p2: "<<p1.calculaDistancia(outro)<<endl;

    //teste circulo: 
    c1.setRaio(4.0);
    cout<< "Area do circulo :"<< c1.calculaArea()<< endl;

    //teste roda
    r1.setMaterial("aco");
    cout<<"Material da roda: "<<r1.getMaterial()<<endl;
    r1.setAro(15);
    cout<< "Aro: "<<r1.getAro()<<endl;
    r1.setFabricante("Cristiano Neves");
    cout<< "Fabcricante: "<< r1.getFabricante()<<endl;

    //teste esfera
    e1.setRaio(4.0);
    cout<<"Volume da esfera: "<<e1.calculaVolume()<<endl;

return 0;
}