#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    char escolha;
    int n;
    int soma = 0;
    int cont = 0;

    std :: cout << std :: fixed << std :: setprecision(1);

    std :: cin >> escolha;

    std :: cin >> n;

    int **a = new int *[n];

    for ( int i = 0; i < n; i++){
        a[i] = new int [n];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std :: cin >> a[i][j];
        }
    }


    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if( i > j ){
                soma = soma + a[i][j];
                cont++;
            }
        }
    }

    if(escolha == 'S'){
        std :: cout << soma << '\n';
    }
    if (escolha == 'M'){
        float media = soma/cont;
         std :: cout << media << '\n';
    }


    for ( int i = 0; i < n; i++){
        delete[] a[i];
    }
    delete [] a;

}

