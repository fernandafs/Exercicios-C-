#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    float n;
    int menor = 1000000;

    std :: cin >> n;

    if (n < 0){
        std :: cout << "nenhum numero informado\n";
    }

    else{
        while (n >= 0){

            if (n < menor){
                menor = n;
            }

            std :: cin >> n;
        }

        std :: cout << menor << '\n';
    }
}