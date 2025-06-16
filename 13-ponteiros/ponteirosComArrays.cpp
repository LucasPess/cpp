#include <iostream>

using namespace std;

int main(){

    int *p;
    int vetor[10];

    p = &vetor[0];
    *p = 10;
    cout << '\n' << vetor[0] << '\n';

    *(p++);
    cout << '\n' << p << '\n';

    *(p += 1);
    cout << '\n' << p << '\n';
    

    
    return 0;
}