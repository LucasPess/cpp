#include <iostream>

using namespace std;

int main(){


    int matriz[3][4];
    int l,c;

    /*for(l = 0; l < 3; l++){
        for(c = 0; c < 4; c++){
             matriz[l][c] = l; // � um L, parece 1, mas � L
        }
    } */

    for(l = 0; l < 3; l++){
        for(c = 0; c < 4; c++){
                cout << "Digite o valor da matriz" << "[" <<l << "]" <<"[" << c<< "]: ";
             cin >> matriz[l][c];
        }
        system("cls");
    }

    for(l = 0; l < 3; l++){
        for(c = 0; c < 4; c++){
            cout << matriz[l][c] << " ";
        }
        cout << "\n";
    }


    return 0;
}
