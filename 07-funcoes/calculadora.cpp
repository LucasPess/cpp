#include <iostream>

using namespace std;

int soma(int n1, int n2){
    return n1 + n2;
}

int subtracao (int n1, int n2){
    return n1- n2;
}

int multipicacao(int n1, int n2){
    return n1 * n2;
}

int divisao(int n1, int n2){
    return n1 / n2;
}

int main(){

    cout << soma(2,3) << "\n";
    cout << subtracao(5,3) << "\n";
    cout << multipicacao(20,5) << "\n";
    cout << divisao(10,10);
    return 0;
}