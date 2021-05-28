#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    int n;
    int x;
    int cont = 0;

    std :: cin >> n;

    int vetor[n];

    for ( int i = 0; i < n; i++){
        std :: cin >> vetor[i];
    }

    std :: cin >> x;

    for (int i = 0; i < n; i ++){
        if (vetor[i] >= x){
            cont++;
        }
    }

    std :: cout << cont << '\n';
}