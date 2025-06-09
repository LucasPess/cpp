#include <iostream>

using namespace std;

int soma(int n1, int n2){
    return n1 + n2;
}
int sub(int n1, int n2){
    return n1 - n2;
}
int milt(int n1, int n2){
    return n1 * n2;
}
int divi(int n1, int n2){
    return n1 / n2;
}

int main(){

    int loop = 1;
    int num1, num2, menu, res;

    
    while(loop){

        cout << " Calculadora simples(apenas numeros inteiros) \n Digite: \n";
        cout << " 1 - Soma \n 2 - subtracão \n 3 - multiplicaco \n 4 - divisao \n 5 - para sair \n\n digite o numero aqui: ";
        cin >> menu;

        if(menu != 5){
            cout << " Digite o primeiro numero: ";
            cin >> num1;
            cout << " Digite o segundo numero: ";
            cin >> num2;

        }
        
        switch(menu){
            case 1:
                res = soma(num1,num2);
                cout << " A soma entre os numeros " << num1 << " e " << num2 << " eh: " << res << '\n';
                break;
            case 2:
                res = sub(num1,num2);
                cout << " A subtracao entre os numeros " << num1 << " e " << num2 << " eh: " << res << '\n';
                break;
            case 3:
                res = milt(num1,num2);
                cout << " A multiplicacao entre os numeros " << num1 << " e " << num2 << " eh: " << res << '\n';
                break;
            case 4:
                res = divi(num1, num2);
                cout << " A divisao entre os numeros " << num1 << " e " << num2 << " eh: " << res << '\n';
                break;
            case 5:
                loop = 0;
                break;
        }
        system("pause");
        system("cls");
    }
    system("cls");
    cout << " Sistema finalizado! ";

    return 0;
}