#include <iostream>
using namespace std;

class Forma{
    public:
        virtual float calculaArea() = 0;
};

class Retangulo : public Forma {
    private:
        float base;
        float altura;
    public:
        Retangulo(float base, float altura) {
         this->base = base;
         this->altura = altura;
        }
        Retangulo(){
            base = 0.0;
            altura = 0.0;
        }

    float calculaArea() override {
        return base * altura;
    }
};

class Triangulo : public Forma{
    private: 
        float base;
        float altura;
    public:
        Triangulo(float base, float altura){
            this-> base = base;
            this-> altura = altura;
        }
        Triangulo(){
            base = 0.0;
            altura = 0.0;
        }
        float calculaArea() override{
            return (base * altura) / 2;
        }
};

int main(void){

    Forma* formas[2];
    
    formas[0] = new Retangulo(4.0, 2.0);
    formas[1] = new Triangulo(3.0, 6.0);

    for( int i =0; i < 2; i++){
        cout<<"Area da forma "<< i+1<<": "<<formas[i]->calculaArea()<<endl;
    }

for (int i = 0; i < 2; i++) {
    delete formas[i];
}
return 0;
}