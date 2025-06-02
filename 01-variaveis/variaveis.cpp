#include <iostream>

using namespace std;

int main(){

    //TIPO NOME;
    //TIPO NOME = VALOR

    int vidas = 0; //10, 25, 0, 1000, -1,-2832, -45973450
    char letra = 'a';// 'B', 'b', 'A', 'a', 'C', 'c'
    double decimal = 2.78;//2.499999999999 mais preciso
    float decimal2 = 2.5;//2.5 menos preciso
    bool vivo = true;// true, false
    string nome = "Lucas Emanuel";// "Lucas Emanuel"

    cout << "Digite o numero de vidas:";
    cin >> vidas;
    cout << vidas << "\n";
    cout << "Digite uma letra:";
    cin >> letra;
    cout << letra << "\n";
    cout << "Digite um numero decimal:";
    cin >> decimal;
    cout << decimal << "\n";
    cout << "Digite o seu nome:";
    cin >> nome;
    cout << nome;

    cout << vivo << "\n";


    return 0;
}
