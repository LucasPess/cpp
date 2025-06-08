#include <iostream>
#include <list>

using namespace std;


 int main(){

    list<int> aula,teste;
    list<int>::iterator it;

    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);

    int tam;

    tam = 10;
    for(int i = 0; i < tam; i++){
        aula.push_front(i);
    }

    
    it = aula.begin();
    advance(it, 5);
    aula.insert(it, 0); //insere elemento em um local especifico
    aula.erase(--it); //retira elemento de um local especifico

    //aula.clear(); //esvazia toda a lista de uma vez
    aula.merge(teste);

    cout << "Tamanho da lista " << aula.size() << '\n';

    aula.sort(); // ordena os elemento da lista
    aula.reverse(); // inverte os elementos da lista

    tam = aula.size();
    for(int i = 0; i < tam; i++){
        cout << aula.front() << '\n'; 
        aula.pop_front();
    }

    cout << "Tamanho da lista " << aula.size() << '\n';


    return 0;
 }