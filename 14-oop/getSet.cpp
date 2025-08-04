#include <iostream>
#include "getSet.hpp"

using namespace std;

int main(){

    veiculo *v1 = new veiculo(1);
    veiculo *v2 = new veiculo(2);
    veiculo *v3 = new veiculo(3);

    std::cout << "Tipos e velocidades maximas:\n";
    std::cout << "v1 tipo: " << v1->tipo << ", velMax: " << v1->velMax << "\n";
    std::cout << "v2 tipo: " << v2->tipo << ", velMax: " << v2->velMax << "\n";
    std::cout << "v3 tipo: " << v3->tipo << ", velMax: " << v3->velMax << "\n";

    delete v1;
    delete v2;
    delete v3;


    return 0;
}