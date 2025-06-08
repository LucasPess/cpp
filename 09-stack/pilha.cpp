#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack <string> cartas; 

    if(cartas.size() == 0){
        cout << "Pilha vazia \n"; //verificando se a pilha esta vazia com size
    }else{
        cout << "Pilha com cartas \n";
    }
    
    cartas.push("Mago Negro"); // Adicionando cartas a pilha
    cartas.push("Força Espelho");
    cartas.push("Dragão Branco de Olhos Azuis"); // a carta que esta no topo da pilha eh a ultima a ser adicionada

    cout << "Tamanho da pilha: " << cartas.size() << "\n"; // como descobrir o tamanho da pilha

    cartas.pop(); // retira o ultimo elemento colocado na pilha ou  o elemento do topo

    cout << "Tamanho da pilha: " << cartas.size() << "\n";

    cout << "carta do topo: " << cartas.top() << "\n"; //imprimindo a carta do topo

    if(cartas.empty()){
        cout << "Pilha vazia \n"; //verificando se a pilha esta vazia com empty
    }else{
        cout << "Pilha com cartas \n";
    }

    while(!cartas.empty()){
        cartas.pop(); // esvaziando pilha
    }

    cout << "Tamanho da pilha: " << cartas.size() << "\n";

    /*
        push()
        pop()
        top()
        size()
        empty()
    */
    
    return 0;
}