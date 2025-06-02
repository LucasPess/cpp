#include <iostream>

using namespace std;

int main(){

    /*
    int n1, n2, nota;
    string res;

    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;

    nota = n1 + n2;

    //(nota >= 60) ? res = "Aprovado": res = "Reprovado";
    res = (nota >= 60 ) ? "Aprovado" : "Reprovado";


    cout << "o aluno esta : " << res;
    */

    int n1, x;
    cout << "Digite um valor: ";
    cin >> n1;

    x=5;

    (n1 >= 10) ? x++ : x--;

    cout << "Novo valor de X: " << x;



    return 0;
}
