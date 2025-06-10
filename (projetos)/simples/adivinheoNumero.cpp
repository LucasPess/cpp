#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

using namespace std;

void testeRand(){

    srand(time(0)); // permite q seja gerado um numero aleatorio doferente quando inicio o programa

    cout << rand() << '\n'; // entendendo o rand() // gera um numero aleatorio, porem o numero não muda mesmo fechando e reabrindo o programa

    int numeroAleatorio = rand() % 11; //gera umnumero aleatorio entre 0 e 10

    cout << numeroAleatorio;
}

int main(){
    char SN;
    int loop = 1;
    int numAle, res;

    cout << " Tente adivinhar o numero! (0 a 10) \n\n";

    while(loop){
        srand(time(0));
        numAle = rand() % 11;

        if (loop == 1){
            cout << " Digite um numero: ";
            cin >> res;
        }
        

        if(numAle == res){
            cout << " Parabens voce acertou! \n";
            cout << " Gostaria de tentar novamente ? (s/n) ";
            cin >> SN;
        } else {
            cout << " Que pena voce errou o numero era " << numAle << '\n';
            cout << " Gostaria de tentar novamente ? (s/n) ";
            cin >> SN;
        }

        switch (SN) {
            case 's':
                loop = 1;
                break;

            case 'n':
                loop = 0;
                break;

            default:
                cout << " Desculpe essa resposta nao eh valida por favor responda de a cordo com o texto \n";
                cout << " Gostaria de tentar novamente ? (s/n) ";
                cin >> SN;
                break;
        }
    }
    system("cls");
    cout << " Sistema finalizado!";

    return 0;
}