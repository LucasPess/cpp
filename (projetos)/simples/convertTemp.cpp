#include <iostream>
#include <stdlib.h>

using namespace std;

float Kelvin(char tipo, int temp){
    float tempConvert;

    if(tipo == 'c'){
        tempConvert = temp + 273.15;
    }

    if(tipo == 'f'){
        tempConvert  = ((temp - 32.0) / 1.8) + 273.15;
    }

    return tempConvert;

}

float Celcius(int tipo, int temp){
    float tempConvert;

    if(tipo == 'k'){
        tempConvert = 273.15 - temp;
    }

    if(tipo == 'f'){
        tempConvert = (temp - 32.0) / 1.8;
    }

    return tempConvert;
}

float Fahrenheit(char tipo, int temp){
    float tempConvert;

    if(tipo == 'c'){
        tempConvert = (1.8 * temp) + 32.0;
    }

    if(tipo == 'k'){
        tempConvert = ((temp - 273.15) * 1.8) + 32.0;
    }



    return tempConvert;
}

int main(){
    int loop = 1;
    int menu, temp;
    char UnidadeTemp;

    cout << " Conversor de temperatura simples(Celcius, Kelvin, Fahrenheit) \n Digite \n";

    while(loop){    

        if(menu != 4){
            cout << " 1 - Para converter para Celcius \n 2 - para Kelvin \n 3 - para Fahrenheit \n 4 - Para sair do programa \n\n digite o numero aqui: ";
            cin >> menu;
        }
        

        switch(menu){
            case 1:
                cout << " Digite 'f' se sua temperatura esta em Fahrenheit \n Digite 'k' se sua temperatura esta em Kelvin \n\n digite aqui:";
                cin >> UnidadeTemp;
                cout << " Digite o valor da temperatura: ";
                cin >> temp;
                cout << " \n "<< Celcius(UnidadeTemp, temp) << " C \n";
                break;
            case 2:
                cout << " Digite 'f' se sua temperatura esta em Fahrenheit \n Digite 'c' se sua temperatura esta em Celcius \n\n digite aqui:";
                cin >> UnidadeTemp;
                cout << " Digite o valor da temperatura: ";
                cin >> temp;
                cout << " \n "<< Kelvin(UnidadeTemp, temp) << " K \n";
                break;
            case 3:
                cout << " Digite 'k' se sua temperatura esta em Kelvin \n Digite 'c' se sua temperatura esta em Celcius \n\n digite aqui:";
                cin >> UnidadeTemp;
                cout << " Digite o valor da temperatura: ";
                cin >> temp;
                cout << " \n "<< Fahrenheit(UnidadeTemp, temp) <<" F \n";
                break;
            case 4:
                loop = 0;
                break;
            default:
                cout << " Desculpe essa resposta nao eh valida por favor responda de a cordo com o texto \n";
                cout << " 1 - Para converter para Celcius \n 2 - para Kelvin \n 3 - para Fahrenheit \n 4 - Para sair do programa \n\n digite o numero aqui: ";
                cin >> menu;
                break;
            }
        }
        system("pause");
        system("cls");

    cout << " Sistema finalizado!";


    return 0;
}
