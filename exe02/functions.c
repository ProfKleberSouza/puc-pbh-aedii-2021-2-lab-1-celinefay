
#include "functions.h"

int menor(int v[], int n){

    int m = v[0]; // m is representing menor while it is at the ind 0

    for(int i = 0; i < n; i++){
        if (v[i] < m)
            m = v[i];
    }
    return m;
}
