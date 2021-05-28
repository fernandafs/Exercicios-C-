#include <iostream>
#include <cmath>

int* combina(int *v, int *w, int n, int m){

    int *z = new int[m+n];

   for (int i = 0; i < n; i++){
       z[i] = v[i];
   }

   for (int i = 0; i < m; i++){
       z[i + n] = w[m-1-i];
   }

   return z;
}

int main(){

    int n;
    int m;

    std :: cin >> n;
    std :: cin >> m;

    int *v = new int[n];
    int *w = new int[m];
    int *z;

     for(int i = 0; i < n; i ++){
      std :: cin >> v[i];
    }

     for(int i = 0; i < m; i ++){
      std :: cin >> w[i];
    }

    z = combina(v,w,n,m);

    for (int i = 0; i < m+n; i++){
        if (i != m+n-1){
            std :: cout << *(z+i) << " ";
        }
        else{
            std :: cout << *(z+i) << '\n';
        }
    }

    delete [] v;
    delete [] w;
    delete [] z;
}

