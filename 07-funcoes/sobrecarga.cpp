#include <iostream>

using namespace std;

int soma(int n1, int n2){
    return n1 + n2;
}

int soma(){
    int n1, n2, res;
    n1 = 10;
    n2 = 20;
    res = n1 + n2;
    cout << res;


    return n1 + n2;
}


int main(){

    cout << soma(2,3) << "\n";
    soma();

    return 0;
}