#include <iostream>

using namespace std;

/*void contador(int num, int cont = 0){
    cout << cont << "\n";
    if (num > cont){
        contador(num, ++cont);
    }
}*/

int fibonacci(int n) {
  int x;
  
  if (n == 1) {
    return 1;
  }
  
  if (n == 2) {
    return 1;
  }
  
  x = fibonacci(n-1) + fibonacci(n-2);
  return x;
}

int main(){
    for (int i = 0; i < 10; i ++){
        cout << fibonacci(i) << " ";
    }
    return 0;
}       

