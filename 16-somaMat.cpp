#include <iostream>
#include <cmath>

int main(){
    int n;

    std :: cin >> n;

    int **a = new int *[n];
    int **b = new int *[n];
    int **c = new int *[n];

    for ( int i = 0; i < n; i++){
        a[i] = new int [n];
    }

     for ( int i = 0; i < n; i++){
        b[i] = new int [n];
    }

    for ( int i = 0; i < n; i++){
        c[i] = new int [n];
    }


    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std :: cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std :: cin >> b[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

     for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (j != n-1){
               std :: cout << c[i][j] << " " ;
            }
            else{
                std :: cout << c[i][j] << '\n';
            }
        }
    }


    for ( int i = 0; i < n; i++){
        delete[] a[i];
    }
    delete [] a;

    for ( int i = 0; i < n; i++){
        delete[] b[i];
    }
    delete [] b;

    for ( int i = 0; i < n; i++){
        delete[] c[i];
    }
    delete [] c;

}
