#include <iostream>
#include <string>
using namespace std;

class Funcionario{
    protected:
        string nome; 
        double salarioBase;

    public:
        virtual ~Funcionario() {}
    Funcionario(string nome, double salarioBase){
        this->nome = nome;
        this->salarioBase = salarioBase;
    }
    Funcionario(){
        nome = "";
        salarioBase = 0.0;
    }

    virtual double calcularSalario() = 0;

    virtual void exibirDados(){
        cout<<"Nome: "<<nome<<endl<<"Salario final: RS "<<calcularSalario()<<endl;
    }
};

class Gerente : public Funcionario{
    public:
    Gerente(string nome, double salarioBase) : Funcionario(nome, salarioBase){}

    double calcularSalario() override{
        return salarioBase + 2000.0;
    }

    void exibirDados() override{
        Funcionario::exibirDados();
    }
};

class Desenvolvedor : public Funcionario{
    private:
        int numProjetos;
    public:
    Desenvolvedor(string nome, double salarioBase, int numProjetos) : Funcionario(nome, salarioBase){
        this->numProjetos = numProjetos;
    }

    double calcularSalario() override{
        return salarioBase + (500.0 * numProjetos);
    }

    void exibirDados() override{
        Funcionario::exibirDados();
    }
};

class Estagiario : public Funcionario{
    private:
        float percentualBolsa;
    public:
    Estagiario(string nome, double salarioBase, float percentualBolsa) : Funcionario(nome, salarioBase){
        this->percentualBolsa = percentualBolsa;
    }

    double calcularSalario() override{
        return salarioBase * percentualBolsa;
    }

    void exibirDados() override{
        Funcionario::exibirDados();
    }
};

int main(void){

    Funcionario* funcionarios[3];

    funcionarios[0] = new Gerente("Flavio", 5000.0);
    funcionarios[1] = new Desenvolvedor("Ana", 4000.0, 3);
    funcionarios[2] = new Estagiario("Heitor", 2000.0, 0.6);

    for(int i=0; i<3; i++){
        funcionarios[i]->exibirDados();
    }

    for(int i=0; i<3; i++){
        delete funcionarios[i];
    }

    return 0;
}