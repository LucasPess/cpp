
#include <iostream>

using namespace std;

void somar(float *var, float valor){
    *var += valor;

}

void ptar(float *v){
    for(int i = 0; i< 5; i++){
        v[i] = 0;
    }
}

int main(){

    float num = 0;
    float vetor[5];


    ptar(vetor);
    somar(&num, 15);

    cout << num << '\n';

    for(int i = 0; i< 5; i++){
        cout << vetor[i] << '\n';
    }

    return 0;
}