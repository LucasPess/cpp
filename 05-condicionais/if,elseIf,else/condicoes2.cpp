#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int n1,n2, res;
    char opc;

    inicio:
    system("cls");

    cout << "Digite o valr da nota 1: ";
    cin >> n1;
    cout << "Digite o valr da nota 2: ";
    cin >> n2;

    res = n1+ n2;

    // >= 60 Aprovado
    //40 ~ 59 Recuperação
    //< 40 Reprovado

    if (res >= 60){
        cout << "\nAluno Aprovado\n";
    } else if(res >= 40){
        cout << "\nAluno em Recuperação\n";
    }else {
        cout << "\nAluno Reprovado\n";
    }

    cout << "\nDigitar outras notas ? [s/n]\n";
    cin >> opc;

    if(opc == 's' || opc == 'S'){
        goto inicio;
    }

    return 0;
}
