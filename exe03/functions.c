
#include "functions.h"

void menor_maior(int v[], int n, int *menor, int *maior){

    int lowest = v[0];
    int greatest = v[0];

    for(int i =0; i<n; i++){

        if(v[i] < lowest)
            lowest = v[i];

        if(v[i] > greatest)
            greatest = v[i];
    }

    *menor = lowest;
    *maior = greatest;
}
