#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> num1;
    vector<int> num2;
    int tam1,tam2,i;

    num1.push_back(1);
    num1.push_back(2);
    num1.push_back(3);
    num1.push_back(4);

    num2.push_back(5);
    num2.push_back(6);
    num2.push_back(7);
    num2.push_back(8);

    num1.insert(num1.end(), 888); //num1.insert(num1.begin(), 888); //num1.insert(num1.begin() + 2, 888);
    num1.erase(num1.end());

    num1.swap(num2);

    tam1 = num1.size();
    tam2 = num2.size();

    cout << "Primeiro valor de num1: " << num1.front() << endl;
    cout << "ultimo valor de num1: " << num1.back() << endl;
    cout << "Valor do meio: " << num1.at(tam1/2) << endl;

    

    cout << "Tamanho do vetor: " << tam1 << endl;
    cout << "Tamanho do vetor: " << tam2 << endl;

    for(i = 0; i< tam1 ; i++){
        cout << num1[i] << " ";
    }
    cout << endl;
    for(i = 0; i< tam2 ; i++){
        cout << num2[i] << " ";
    }

    while (!num1.empty()){
        num1.pop_back();
    }

    num2.clear();

    cout << "Novo Tamanho do vetor: " << num1.size() << endl;

    return 0;
}