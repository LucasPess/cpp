#include <iostream>

using namespace std;

void contador(int num, int cont = 0){
    cout << cont << " ";
    if(num > cont){
        contador(num, ++cont);
    }
}


int fibonacci(int n){

	if(n == 1 || n == 2){
		return 1;
	} else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}

	
}

int fatorial(int n){

    if(n == 0){
		return 1; 
    }

	return n * fatorial(n-1); 
	 
}

int main(){
	
	
	int res = fatorial(8);

	int res2 = fibonacci(8);

	cout << res << " ";
	cout << res2 << " ";

	
	

    return 0;
}

