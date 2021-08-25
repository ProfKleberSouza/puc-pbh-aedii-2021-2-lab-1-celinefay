#include <stdio.h>
#include "functions.h"

void numero_vogais(char texto[]){

    int x = 0; // it has the normal position of the letter
    int a = 0;
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0;

    while(texto[x] != '\0'){
        if (texto[x] == 'A' || texto[x] == 'a'){
            a++;
        }
        else if (texto[x] == 'E' || texto[x] == 'e'){
            e++;
        }
        else if (texto[x] == 'I' || texto[x] == 'i'){
            i++;
        }
        else if (texto[x] == 'O' || texto[x] == 'o'){
            o++;
        }
        else if(texto[x] == 'U' || texto[x] == 'u'){
            u++;
        }
        x++;
    }

    printf("A = %d\n", a);
    printf("E = %d\n", e);
    printf("I = %d\n", i);
    printf("O = %d\n", o);
    printf("U = %d\n", u);
}
