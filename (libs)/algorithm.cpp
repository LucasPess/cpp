#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    // Ordenando elementos de um container
    vector<int> v = {1,4,7,3,9,7,5,8};

    cout << "Desordenado"<< endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    sort(v.begin(), v.end());

    cout << endl << "Orenado"<< endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }



    // Invertendo elementos
    string palavra = "Onibus";

    cout << endl <<endl <<  "Original: " << palavra << endl;
    

    reverse(palavra.begin(), palavra.end());
    cout << "Invertida: " << palavra << endl << endl;



    // Procurando valor em um container
    vector<int> vetor = {10, 20, 30};
    auto it = find(vetor.begin(), vetor.end(), 20);

    if(it != vetor.end()){
        cout << "Encontrado" << endl << endl; 
    }



    //Contando apariçoes de um valor
    vector<int> cont = {1,1,2,3,3,3,3,3,4,5,6,7,8,8,8,9};

    cout << "Vetor: {";
    for(int i = 0; i < cont.size(); i++){
        cout << cont[i] << " ";
    }
    cout << "}" << endl << endl;

    int qtd = count(cont.begin(), cont.end(), 1);
    cout << "Aparicoes do numero 1: " << qtd << endl;

    qtd = count(cont.begin(), cont.end(), 3);
    cout << "Aparicoes do numero 3: " << qtd << endl;

    qtd = count(cont.begin(), cont.end(), 8);
    cout << "Aparicoes do numero 8: " << qtd << endl << endl;



    //encontrando maior e menor valor
    vector<int> minMax = {1,2,3,4,5,6,7,8,9};

    cout << "Vetor: {";
    for(int i = 0; i < minMax.size(); i++){
        cout << minMax[i] << " ";
    }
    cout << "}" << endl << endl;

    auto  maior = *max_element(minMax.begin(),minMax.end());
    cout << "Maior elemento: " << maior << endl; 

    auto menor = *min_element(minMax.begin(),minMax.end());
    cout << "Menor elemento: " << menor << endl << endl; 



    //verificar se todos, algum ou nenhum elemento satizfazem uma condição  //all_of(), any_of(), none_of() 
    vector<int> par = {2,4,6,8};

    bool todosPares = all_of(par.begin(), par.end(), [](int x){ return x % 2 == 0; });

    cout << todosPares;


    return 0;
}