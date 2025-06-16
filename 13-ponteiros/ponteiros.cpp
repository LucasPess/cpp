#include <iostream>

using namespace std;

int main(){

    string veiculo = "Carro";
    string *pv; // o ponteiro deve ser do mesmo tipo da variavel que ele vai apontar

    pv = &veiculo; // ponteiro PV   recebe endereco da variavel veiculo

    cout << pv << '\n' << &veiculo << '\n';

    *pv = "Moto"; // no endereco apontado por *pv adicione o valor "Moto"

    cout <<veiculo << '\n'<< *pv;

    
    return 0;
}
