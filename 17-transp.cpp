#include <iostream>
#include <cmath>

int main(){
    int n;
    int m;

    std :: cin >> n;
    std :: cin >> m;

    int **a = new int *[n];
    int **b = new int *[n];

    for ( int i = 0; i < n; i++){
        a[i] = new int [m];
    }

     for ( int i = 0; i < n; i++){
        b[i] = new int [m];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std :: cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            b[i][j] = a[j][i];
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (j != n-1){
               std :: cout << b[i][j] << " " ;
            }
            else{
                std :: cout << b[i][j] << '\n';
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

}

