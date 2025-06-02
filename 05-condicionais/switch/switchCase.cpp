#include <iostream>

using namespace std;

int main(){

    int val;

    //cout << "Selecione uma cor";
    //cout << "[1] = Verde, [2] = Azul, [3] = Vermelho \n";
    //cout << "[1,2,3] = Verde, [4,5,6] = Azul";

    cout << "Selecione um transporte";
    cout << "[1] = Carro, [2] = Moto, [3] = Aviao, [4] = Helicopitero \n";


    cin >> val;

    /*
    switch(val){
        case 1:
            cout << "Cor selecionada: Verde";
            break;
        case 2:
            cout << "Cor selecionada: Azul";
            break;
        case 3:
            cout << "Cor selecionada: Vermelho";
            break;
        default:
            cout << "Valor selecionado: invalido";;

    }
    */

    /*
    switch(val){
        case 1:
        case 2:
        case 3:
            cout << "Cor selecionada: Verde";
            break;
        case 4:
        case 5:
        case 6:
            cout << "Cor selecionada: Verde";
            break;
        default:
            cout << "Valor selecionado: invalido";;

    }
    */
      switch(val){
        case 1:
        case 2:
            cout << "\n Transporte terrestre";
            switch(val){
                case 1:
                    cout << "\n Carro";
                    break;
                case 2:
                    cout << "\nMoto";
                    break;
            }
            break;
        case 3:
        case 4:
            cout << "Cor selecionada: Verde";
            switch(val){
                case 3:
                    cout << "\n aviao";
                    break;
                case 4:
                    cout << "\nHelicopitero";
                    break;
            }
            break;
        default:
            cout << "Valor selecionado: invalido";;

    }

    return 0;
}
