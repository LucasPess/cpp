#include <iostream>

using namespace std;

int main(){

    string plChave = "Amigo";
    char res;
    char plChaveExib[6] = {'A','_','_','g','_',' '};

    string dica[3] = {"Te ajuda nos momentos dificeis","pessoa confiavel","teste teste teste teste"};
    int tentativas = 4;

    for(int i = 0; i<3; i++){

        cout << "Palavra: "<< plChaveExib << "          \n";
        cout << "dica: "<<dica[i] << "\n";
        cout << "Digite uma letra: ";
        cin >> res;

        if(res != 'm'|| res != 'M'||res != 'i'|| res != 'I'||res != 'o'|| res != 'O'){
            tentativas--;
        }else{
            cout << "Parabéns voce acertou!";
        }



        switch(res){
            case 'm':
                plChaveExib[1]= 'm';
                break;
            case 'M':
                plChaveExib[1]= 'm';
                break;
            case 'i':
                plChaveExib[2]= 'i';
                break;
            case 'I':
                plChaveExib[2]= 'i';
                break;
            case 'o':
                plChaveExib[4]= 'o';
                break;
            case 'O':
                plChaveExib[4]= 'o';
                break;
            }



            system("cls");


            if(tentativas == 0){

                i = 4;
            }


            switch(tentativas){
                case 0:
                    cout << "voce perdeu a palavra era: "<< plChave;
                case 1:
                    cout << "voce perdeu a cabeça \n";
                    break;
                case 2:
                    cout << "voce perdeu uma perna \n";
                    break;
                case 3:
                    cout << "voce perdeu um braço \n";
            }





    }



    return 0;
}
