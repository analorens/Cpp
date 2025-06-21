#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Empregado{
    protected:
        string nome;
        double salario_base;
        double imposto;
    public: 

    Empregado(string nome, double salario_base, double imposto){
        this->nome = nome;
        this->salario_base = salario_base;
        this->imposto = imposto;
    }
    Empregado(){
        nome = "";
        salario_base = 0.0;
        imposto = 0.0;
    }

    void setNome(string nome){
        this->nome = nome;
    }
    string getNome(){
        return nome;
    }
    void setSalarioBase(double salario_base){
        this->salario_base = salario_base;
    }
    double getSalarioBase(){
        return salario_base;
    }
    void setImposto(double imposto){
        this->imposto = imposto;
    }
    double getImposto(){
        return imposto;
    }
};

class Vendedor : public Empregado{
    private: 
    double valorVendas;
    double comissao;

    public:
    Vendedor(string nome, double salario_base, double imposto, double valorVendas, double comissao): Empregado(nome, salario_base, imposto){
        this->valorVendas= valorVendas;
        this->comissao = comissao;
    }
    Vendedor() : Empregado(){
        valorVendas = 0.0;
        comissao = 0.0;
    }

    double calculaSalario(){
        double salarioLiquido;
        salarioLiquido = (salario_base + (comissao * valorVendas)) * (1 - imposto);
        return salarioLiquido;
    }
};

int main(void){

Vendedor v1("Joao", 3000.0, 0.1, 50000.0, 0.05);
Vendedor v2("Alice", 7000.0, 0.15, 70000.0,0.7);

cout<<"Salario do primeiro vendedor: RS "<<v1.calculaSalario()<<endl;
cout<<"Salario do segundo vendedor: RS "<< v2.calculaSalario()<<endl;

return 0;
}