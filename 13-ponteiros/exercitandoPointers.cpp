#include <iostream>
#include <string>

using namespace std;

void funcPtr(int* num){
    //pratica 2 
    *num = *num * 2;

    cout << "Valor de num * 2: " << *num << endl;
      
}

void swap(int* a, int* b){
    //pratica 2
    cout << "Valor a: " << *a << " Valor b: " << *b << endl;

    int storage = *b;
    *b = *a;
    *a = storage;

    cout << "troca realizada" << endl;
    cout << "Valor a: " << *a << " Valor b: " << *b << endl;
}

int somaptr(int* pt, int tamanho){
    //pratica 3
    if(tamanho == 0){
        return 0;
    } else {
        return *pt + somaptr(pt + 1, tamanho - 1);
    }

}

struct Pessoa {
    int idade;
    string nome;

};

int main(){

    int num = 10;
    int n = 40;
    int numeros[5] = {10,20,30,40,50};

    //pratica 1 relembrando ponteiros
    int* ptr = &num;

    cout << "Valor de num: " << num << endl;
    cout << "Endereco de num: " << &num << endl << endl; 

    cout << "Valor de ptr: " << *ptr << endl;
    cout << "Endereco de ptr: " << &ptr << endl << endl;

    *ptr = num + 50;

    num = *ptr;

    cout << "Valor de num, apos alteralo com o ponteiro: " << num << endl << endl;

    //pratica 2 ponteiros com funções
    funcPtr(&num);
    swap(&num, &n);
    cout << endl << endl;

    //pratica 3 ponteiros com arrays
    int* p = numeros;

    for(int i = 0; i < 5; i++){
        cout << *(p + i) << " ";
    }
    cout<<"-" << endl << endl;

    cout << somaptr(numeros, 5);

    //pratica 4 alocação dinamica de memoria
    int tamanho = 0;
    cout << endl << "Digite o tamanho do array: ";
    cin >> tamanho;

    int* array = new int[tamanho];

    for (int i = 0; i < tamanho; i++){
        cout << endl << endl << "Digite o valor do array " << i << endl; 
        cin >> array[i];
    }

    for (int i = 0; i < tamanho; i++){
        if(i == 0){
            cout << endl << "Valor do array " << i << ": " << array[i] << endl;
        } else{
            cout << "Valor do array " << i << ": " << array[i] << endl;
        }
        
    }

    int soma = somaptr(array, tamanho);
    cout << endl << "A media dos valores do array e' " << soma / tamanho << endl << endl;

    delete[] array;

    //pratica 5 ponteiros com structs
    Pessoa *pessoa1 = new Pessoa();

    cout << "Digite seu nome: ";
    cin >> pessoa1->nome;

    cout << endl << "Digite sua idade: ";
    cin >> pessoa1->idade;


    cout << endl << "Nome: " << pessoa1->nome << endl << "Idade: " << pessoa1->idade << endl;


    return 0;   
}