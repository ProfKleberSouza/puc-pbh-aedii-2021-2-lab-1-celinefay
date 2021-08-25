#include <stdio.h>
#include "functions.h"

int main(){

        int n;
        int vet[100]; // vet
        int men;

        scanf("%d", &n);

         for(int i=0; i<n; i++){
             scanf("%d", &vet[i]);
         }

        men = menor(vet, n);

         printf("MENOR = %d\n", men);
        return 0;
}