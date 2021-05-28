#include <iostream>
#include <cmath>

int main(){
    int n;
    int cont = 0;

    std :: cin >> n;

    for (int i = 1; i <= n; i++){
        if(n % i == 0){
            if (i % 2 == 0){
                cont ++;
            }
        }
    }


    std :: cout << cont << '\n';
}