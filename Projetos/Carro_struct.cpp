#include <iostream>
#include <string>
using namespace std;

struct Data{

    int dia;
    int mes;
    int ano;
};

struct Carro{
    string modelo;
    string marca;
    int ano;
    float preco;
    Data venda;
};

void carroMaisCaro(Carro *cars, int tam) {
    float precoMaisCaro = cars[0].preco;
    int indiceMaisCaro = 0;

    for (int i = 1; i < tam; i++) {
        if (cars[i].preco > precoMaisCaro) {
            precoMaisCaro = cars[i].preco;
            indiceMaisCaro = i;
        }
    }
    cout << "Preco mais caro: RS " << precoMaisCaro << endl;
    cout << "Data do carro mais caro: "<< cars[indiceMaisCaro].venda.dia << "/"<< cars[indiceMaisCaro].venda.mes << "/"<< cars[indiceMaisCaro].venda.ano << endl;
}

