#include <iostream>
#include <string>
using namespace std;

class Veiculo{
    private:
        double peso;
        int velocidadeMaxima;
        double preco;

    public:
    Veiculo(double peso, int velocidadeMaxima, double preco){
        this-> peso = peso;
        this-> velocidadeMaxima = velocidadeMaxima;
        this-> preco = preco;
    }
    Veiculo(){
        peso = 0.0;
        velocidadeMaxima = 0;
        preco = 0.0;
    }

    void setPeso(double peso){
        this->peso = peso;
    }
    double getPeso(){
        return peso;
    }
    void setVelocidadeMaxima(int velocidadeMaxima){
        this->velocidadeMaxima = velocidadeMaxima;
    }
    int getVelocidadeMaxima(){
        return velocidadeMaxima;
    }
    void setPreco(double preco){
        this-> preco = preco;
    }
    double getPreco(){
        return preco;
    }

    void print(){
        cout<<"Peso do veiculo : "<<getPeso()<<endl<<"Velocidade maxima: "<<getVelocidadeMaxima()<<endl<<"Preco: RS "<<getPreco()<<endl;
    }
};

class Motor{
    private:
        int numCilindros;
        int potencia;
    
    public: 
    Motor(int numCilindros, int potencia){
        this-> numCilindros = numCilindros;
        this->potencia = potencia;
    }
    Motor(){
        numCilindros = 0;
        potencia = 0;
    }
    void setNumCilindros(int numCilindros){
        this-> numCilindros = numCilindros;
    }
    int getNumcilindros(){
        return numCilindros;
    }
    void setPotencia(int potencia){
        this-> potencia = potencia;
    }
    int getPotencia(){
        return potencia;
    }
    void print(){
        cout<<"Numero de cilindros: "<<getNumcilindros()<<endl<<"Potencia: "<<getPotencia()<<endl;
    }
};

class CarroPasseio : public Veiculo, public Motor{
    private: 
        string modelo;
        string cor;

    public:
    CarroPasseio(double peso, int velocidadeMaxima,double preco, int numCilindros, int potencia, string modelo, string cor) : Veiculo (peso, velocidadeMaxima, preco), Motor (numCilindros, potencia){
        this-> modelo = modelo;
        this->cor= cor;
    }
    CarroPasseio(): Veiculo(), Motor(){
        modelo = "";
        cor = "";
    }
    void print() {
    Veiculo::print();
    Motor::print();
    cout << "Modelo: " << modelo << endl;
    cout << "Cor: " << cor << endl;
    }

};

class Caminhao: public Veiculo, public Motor{
    private: 
        int toneladas;
        int alturaMaxima;
        int comprimento;
    public: 
        Caminhao(double peso, int velocidadeMaxima,double preco, int numCilindros, int potencia, int toneladas, int alturaMaxima, int comprimento): Veiculo (peso, velocidadeMaxima, preco), Motor (numCilindros, potencia){
            this->toneladas = toneladas;
            this->alturaMaxima = alturaMaxima;
            this->comprimento = comprimento;
        }
        Caminhao() : Veiculo(), Motor(){
            toneladas = 0;
            alturaMaxima = 0;
            comprimento = 0;
        }
        void setToneladas(int toneladas){
            this->toneladas = toneladas;
        }
        int getToneladas(){
            return toneladas;
        }
        void setAlturaMaxima(int alturaMaxima){
            this-> alturaMaxima = alturaMaxima;
        }
        int getAlturaMaxima(){
            return alturaMaxima;
        }
        void setComprimento(int comprimento){
            this-> comprimento = comprimento;
        }
        int getComprimento(){
            return comprimento;
        }
    void print(){
        cout <<"Toneladas: "<< getToneladas() <<endl<<"Altura Maxima: "<< getAlturaMaxima()<<"m"<<endl<<"Comprimento: "<<getComprimento()<<"m"<<endl;
    }
};

int main(void){

    Veiculo v(1525.0, 181, 855000.00);
    Motor m(8,717);
    CarroPasseio c(1500.0, 150, 55000.00,6,717,"Dodge Charger", "preto");
    Caminhao cc(68790.0, 120, 955000.00,8,717,120, 10, 60);

v.print();
m.print();
c.print();
cc.print();
return 0;
}