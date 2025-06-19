#include <iostream>
using namespace std;
#include <string>


class Pessoa{
    private:
        string nome;
        int idade;
        float altura;
    public: 
    // construtor
    Pessoa(string nome, int idade, float altura){
        this-> nome = nome;
        this-> idade = idade;
        this-> altura = altura;
    }
    //construtor padrao para pessoa 2
    Pessoa(){
        nome = "";
        idade = 0;
        altura = 0.00;
    }
    //set's
    void setnome(string nome){
        this->nome = nome;
    }
    void setidade(int idade){
        this->idade = idade;
    }
    void setaltura(float altura){
        this->altura = altura;
    }
    // get's
    string getnome(){
        return nome;
    }
    int getidade(){
        return idade;
    }
    float getaltura(){
        return altura;
    }

    // exibir dados
    void exibir(){
        cout<< "Nome:"<< nome << endl;
        cout<< "Idade: "<< idade<< endl;
        cout<< "Altura: "<< altura<< endl;
    }
};

int main(void){

    Pessoa pessoa1("Ana", 19, 1.60);
    Pessoa pessoa2;
    string nome; 
    int idade;
    float altura;

    cout<<"Digite o nome: ";
    getline(cin, nome);
    pessoa2.setnome(nome);

    cout<< "Digite a idade: ";
    cin>>idade;
    pessoa2.setidade(idade);

    cout<< "Digite a altura: ";
    cin>>altura;
    pessoa2.setaltura(altura);

    cout<< "Aqui estao os dados da pessoa 1: "<< endl;
    pessoa1.exibir();
    cout<< "Aqui estao os dados da pessoa 2: "<< endl;
    pessoa2.exibir();

return 0;
}