#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void cadastrarPessoa();

struct Pessoa{
    int id = 0, idade;
    string nome, email;
};

int proximoId = 0;
vector<Pessoa> usuarios;

int main(){

    cadastrarPessoa();

    ifstream arquivoE;
    string linha;

    arquivoE.open("usuarios.txt");

    if(arquivoE.is_open()){
        while (getline(arquivoE, linha)){
            cout << linha << endl;
        }

        arquivoE.close();
        
    } else {
        cout << "Falha arquivo não abero";
    }
    

    return 0;
}

void cadastrarPessoa(){
    Pessoa u;

    cout << "Nome: ";
    cin >> u.nome;
    cout << endl << "Idade: ";
    cin >> u.idade;
    cout << endl << "Email: ";
    cin >> u.email;
    u.id = ++proximoId;
    
   usuarios.push_back(u);

   ofstream arquivo;
   arquivo.open("usuarios.txt",ios::app);
   arquivo << "Nome: " << u.nome << "|Email: " << u.email << "|Idade: " << u.idade << "|Id: " << u.id << "\n";
   arquivo.close();

}