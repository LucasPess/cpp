#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[]){
    //cout << argv[3] ;  
    //cout << argc;

    if (argc > 1){
        if(!strcmp(argv[1], "sol")){
            cout << "vou ao clube";
        } else if(!strcmp(argv[1], "nublado")){
            cout << "vou ao cinema";
        } else{
            cout << "vou ficar em casa";
        }
 
    }

    return 0;
}       

