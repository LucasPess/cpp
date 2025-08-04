#ifndef GETSET_H_INCLUDED
#define GETSET_H_INCLUDED
#include <string>

class veiculo{
    private:
        std::string nome;
        int vel;
        bool ligado;
    public:
        int velMax;
        int tipo;
        veiculo(int tp);
};

veiculo::veiculo(int tp){ // 1-carro  //2- aviao  //3-navio
    tipo = tp;
    if(tipo==1){
        nome = "Carro";
        velMax = 200;
    } else if(tipo==2){
        nome = "Aviao";
        velMax = 800;
    } else if(tipo==3){
        nome = "Navio";
        velMax = 120;
    }
}




#endif