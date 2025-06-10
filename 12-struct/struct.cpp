#include <iostream>

using namespace std;

struct Carro{
    string nome;
    string cor;
    int pot;
    int velMax;
    int vel;

    void inserir(string stnome, string stcor, int stpot, int stvelmax){
        nome = stnome;
        cor = stcor;
        pot = stpot;
        velMax = stvelmax;
        vel = 0;

    }

    void exibir(){
        cout << "\n Nome.............: " << nome << '\n';
        cout << "cor..............: " << cor << '\n';
        cout << "Poencia..........: " << pot << '\n';
        cout << "velocidade arual.: " << vel << '\n';
        cout << "Velocidade Maxima: " << velMax << '\n';
    }

    void mudavel(int mv){
        vel = mv;

        if (vel > velMax){
            vel = velMax;
        }

        if(vel < 0){
            vel = 0;
        }

    }
};

int main(){

    Carro *carros = new Carro[5];
    Carro car1, car2, car3, car4, car5;


    carros[0] = car1; carros[1] = car2; carros[2] = car3; carros[3] = car4; carros[4] = car5;
    
    carros[0].inserir("tornado", "vermelho", 450, 350);
    carros[1].inserir("luxo", "preto", 250, 260);
    carros[2].inserir("familia", "prata", 150, 160);
    carros[3].inserir("trabalho", "branco", 80, 120);
    carros[4].inserir("padrao", "cinza", 100, 150);

    for(int i = 0; i < 5; i++){
        carros[i].exibir();
    }




    /*
    car1.inserir("teste", "vermelho", 450, 350);
    car1.exibir();
    car1.mudavel(200);
    car1.exibir();

    car1.nome = "teste";
    car1.cor = "Vermelho";
    car1.pot = 150;
    car1.velMax = 200;

    cout << "Nome.............: " << nome << '\n';
    cout << "cor..............: " << cor << '\n';
    cout << "Poencia..........: " << pot << '\n';
    cout << "Velocidade Maxima: " << velMax << '\n';
    */


    return 0;
}