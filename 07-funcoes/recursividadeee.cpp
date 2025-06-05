#include <iostream>

using namespace std;

void contador(int num, int cont = 0){
    cout << cont ;
    if(num > cont){
        contador(num, ++cont);
    }
}


int fibonacci(int n){
    int x = 0;

    x = fibonacci(n - 1) + fibonacci(n - 2);
    return x ;


}

int fatorial(int n){
    int x = 0;
    if(n >= 1){
        x *= fatorial(n--);
    }
	cout << x << " "; 
	
	return 0;
}

int main(){
	
	
	
	//entendendo a logixca de fatorial
	
	/*int i = 8;
	while(i >= 1){
		int x;
		x *= i--;
		cout << x << " ";
	}
	*/
	
	//entendendo  a logica do fibonacci
	
	int n = 7;
	while(n >=1){
		int x = 0;
		if(n == 0 || n == 1 ){
			break;
		}
		
		x = (n - 1) + (n-2);
		cout << x;
		
	}
	
	

    return 0;
}
