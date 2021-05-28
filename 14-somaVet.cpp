#include <iostream>
#include <cmath>

int main(){
    int n;
    int soma = 0;

    std :: cin >> n;

    int *vetor = new int[n];

    for ( int i = 0; i < n; i++){
        std :: cin >> vetor[i];
    }

    for (int i = 0; i < n; i ++){
        soma = soma + vetor[i];
    }

    std :: cout << soma << '\n';
}