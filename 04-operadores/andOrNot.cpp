#include <iostream>

using namespace std;

int main(){

    int num;
    // and &&, or ||, not !

    num=2;
    if (num < 3 || num > 8){
        cout << "Valor aceito";
    } else{
        cout << "Valor não aceito";
    }

    return 0;
}
