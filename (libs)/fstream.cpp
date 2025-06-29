#include <iostream>
#include <fstream>

using namespace std;

int main(){
    //ofstream, ifstream, fstream

    
    ofstream arquivoS;

    arquivoS.open("teste.txt",ios::app); //ios::app faz o texto não sobreescrever o texto anterior

    arquivoS << "Testando....................................................\n";

    arquivoS.close();

    ifstream arquivoE;

    string linha;

    arquivoE.open("teste.txt");

    if(arquivoE.is_open()){
        while (getline(arquivoE, linha)){
            cout << linha << endl;
        }

        arquivoE.close();
        
    } else {
        cout << "Falha arquivo não abero";
    }
    

    fstream arquivo;
    arquivo.open("nomes.txt",ios::out|ios::app);

    char opc = 's';
    string nome, linha;

    while(opc == 's' || opc == 'S'){
        cout << "Digite um nome: ";
        cin >> nome;
        arquivo << nome << '\n';
        cout << endl << "Deseja adicionar outr nome?[s/n] ";
        cin >> opc;
    }
    arquivo.close();

    arquivo.open("nomes.txt", ios::in);

    if(arquivo.is_open()){
        while(getline(arquivo, linha)){
            cout << linha << endl;
        }
        arquivo.close();
    } else{
        cout << "arquivo não criado";
    }

    return 0;
}