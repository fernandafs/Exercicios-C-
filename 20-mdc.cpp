#include <iostream>

int mdc(int A, int B)
{
    if (A % B  == 0){
         return B;
    }
    else{
        return mdc(B, A % B);
    }
}

int main()
{
    int A, B;

    std :: cin >> A;
    std :: cin >> B;

    std :: cout << mdc(A, B)<< '\n';
}