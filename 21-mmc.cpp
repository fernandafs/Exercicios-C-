#include <iostream>
#include <cmath>

int maiorDivisorComum(int A, int B)
{

    if (A % B  == 0){
        return B;
    }
    else{
        return maiorDivisorComum(B, A % B);
    }
}

int main()
{
    int A, B;

    std :: cin >> A;
    std :: cin >> B;

    int aux = maiorDivisorComum(A, B);

    int menorDivisorComum = (A * B) / aux;

    std :: cout<< menorDivisorComum << '\n';
}