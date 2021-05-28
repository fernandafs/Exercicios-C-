#include <iostream>
#include <cmath>

int main(){
    int n;
    int cont = 0;
    int x;

    std :: cin >> n;

    int vetor[n];

    for ( int i = 0; i < n; i++){
        std :: cin >> vetor[i];
    }

    while(std :: cin >> x ){

        for (int i = 0; i < n; i ++){
            if (vetor[i] == x ){
                cont++;
            }
        }

        if(cont > 0){
            std :: cout << "SIM\n";
        }
        else{
            std :: cout << "CHAVE NAO ENCONTRADA\n";
        }

        cont = 0;
    }
}
