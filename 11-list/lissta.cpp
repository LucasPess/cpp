#include <iostream>
#include <list>

using namespace std;


 int main(){

    list<int> aula;
    list<int>::iterator it;

    int tam;

    tam = 10;
    for(int i = 0; i < tam; i++){
        aula.push_front(i);
    }

    /*
    it = aula.begin();
    advance(it, 5);
    aula.insert(it, 0);
    */

    cout << "Tamanho da lista " << aula.size() << '\n';

    aula.sort(); // ordena os elemento da lista
    aula.reverse(); // inverte os elementos da lista

    tam = aula.size();
    for(int i = 0; i < tam; i++){
        cout << aula.front() << '\n'; 
        aula.pop_front();
    }


    return 0;
 }