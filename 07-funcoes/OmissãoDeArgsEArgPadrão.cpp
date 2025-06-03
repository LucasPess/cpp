#include <iostream>

using namespace std;

void imp(string txt = "");

int main(){

    imp();
    return 0;
}

void imp(string txt){
    cout << txt;
}