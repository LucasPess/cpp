#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool polindromo(string palavraCh){
    string copia = palavraCh;
    string reverso = copia;
    reverse(reverso.begin(),reverso.end());
    return copia == reverso;

}

int main(){
    string res;
    cout << "Digite a palavra: ";
    cin >> res; 

    if(polindromo(res)){
        cout << "Parabens eh um poindromo!";
    } else{
        cout << "Nao eh um poindromo!";
    }
    
    return 0;
}