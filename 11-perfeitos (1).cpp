#include <iostream>
#include <cmath>

int main(){
    int n;
    int cont = 0;
    int aux = 0;

    std :: cin >> n;

    for (int i = 1; i < n; i++){
        if(n % i == 0){
            aux += i;
        }
    }

    if(aux == n){
        std :: cout << "SIM\n";
    }
    else{
        std :: cout << "NAO\n";
    }
}