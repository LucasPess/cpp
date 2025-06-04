#include <iostream>

using namespace std;

/*void contador(int num; int cont = 0){
    cout << cont ;
    if(num > cont){
        contador(num, ++cont);
    }
}
*/

/*int fibonacci(int n){
    int x = 0;

    x = fibonacci(n - 1) + fibonacci(n - 2);
    return x ;


}*/

int fatorial(int n){
    int x;
    if(n >= 1){
        x *= fatorial(n--);
    }
    return x;

}

int main(){
	
	cout << fatorial(8) << " ";
	
	/*int i = 8;
	while(i >= 1){
		int x;
		x *= i--;
		cout << x << " ";
	}
	*/

    return 0;
}
