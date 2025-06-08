#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue <string> cartas;

    cartas.push("Mago Negro");
    cartas.push("Força Espelho");
    cartas.push("Dragão Branco de Olhos Azuis"); 

    cout << "Tamanho da pilha: " << cartas.size() << "\n";
    cout << "carta da frente: " << cartas.front() << "\n";
    cout << "carta de tras: " << cartas.back() << "\n";

    while(!cartas.empty()){
        cout << "Primeira carta" << cartas.front() << "\n";
        cartas.pop(); 
    }

    cout << "Tamanho da pilha: " << cartas.size() << "\n";

    /*
        push()
        pop()
        front()
        back()
        size()
        empty()
    */
    return 0;
}