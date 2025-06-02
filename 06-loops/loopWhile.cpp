#include <iostream>

using namespace std;

int main(){

    //int n ;
    int cont = 0;

    /*
    n = 0;
    while(n < 10){
        cout << n << "\n";
        //n++;
        cin >> n;
    }
    */

    cont = 20;
    while(cont > 0){
        cout << "teste\n ";
        cont--;
        if( cont == 10){
            break;
        }
    }

    cout << "Rotina finalizada";
    return 0;
}
