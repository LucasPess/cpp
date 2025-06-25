#include <iostream>
#include <iomanip>  
#include <ctime>    
#include <thread> 
#include <chrono> 



using namespace std;

int main(){

    //entendedo setw e setfill
    //cout << setfill('0') << setw(5) << 42 << endl;

    //entendendo time_t e localtime
    //time_t agora = time(0);// time(0) captura o tempo atual
    //tm *tempoLocal = localtime(&agora);//converte para data e hora
    //cout << "Segundos desde 1/1/1970: " << agora << endl; // captura o tempo atual em segundos dede 1970
    //cout << ctime(&agora) << endl << endl; //imprime dia da semana, mes, dia, hora, ano
    //cout << "Hora atual: "  << setfill('0') << setw(2) << tempoLocal->tm_hour << ":" << setfill('0') << setw(2) << tempoLocal->tm_min << ":" << setfill('0') << setw(2) << tempoLocal->tm_sec << endl << endl;
    //cout << "Data atual: " << setfill('0') << setw(2) << tempoLocal->tm_mday << "/" << setfill('0') << setw(2) << tempoLocal->tm_mon + 1 /* tm_mon começa em 0 por isso somamos mais 1 */ << "/" << tempoLocal->tm_year + 1900 /* tm_year conta a partir de 1900 por isso somamos 1900 ao valor */ << endl << endl; 

    while(1){
        time_t agora = time(0);
        tm *tempoLocal = localtime(&agora);

        system("cls");

        cout << "Data: " << setfill('0') << setw(2) << tempoLocal->tm_mday << "/" << setfill('0') << setw(2) << tempoLocal->tm_mon + 1<< "/" << tempoLocal->tm_year + 1900 << endl;
        cout << "Hora: " << setfill('0') << setw(2) << tempoLocal->tm_hour << ":" << setfill('0') << setw(2) << tempoLocal->tm_min << ":" << tempoLocal->tm_sec;
        

       // this_thread::sleep_for(chrono::seconds(1)); // apenas implementar quando atualizar o compilador 

    }



    return 0;
}