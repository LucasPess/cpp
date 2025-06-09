#include <iostream>

using namespace std;

struct Carro{
    string nome;
    string cor;
    int pot;
    int velMax;
};

int main(){

    Carro car1, car2;

    car1.nome = "Sandero";
    car1.cor = "Vermelho";
    car1.pot = 150;
    car1.velMax = 200;


    cout << "Nome.............: " << car1.nome << '\n';
    cout << "cor..............: " << car1.cor << '\n';
    cout << "Poencia..........: " << car1.pot << '\n';
    cout << "Velocidade Maxima: " << car1.velMax << '\n';

    car2.nome = "teste";
    car2.cor = "Roxo";
    car2.pot = 250;
    car2.velMax = 400;


    cout << "Nome.............: " << car2.nome << '\n';
    cout << "cor..............: " << car2.cor << '\n';
    cout << "Poencia..........: " << car2.pot << '\n';
    cout << "Velocidade Maxima: " << car2.velMax << '\n';


    return 0;
}