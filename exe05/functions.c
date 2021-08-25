#include <stdio.h>
#include <string.h>
#include "functions.h"

void inverte(char texto[50]){

   // char string[50];
    char invert[50];

    int last_position;
    int str;

    str = strlen(texto);
    last_position = str - 1;

    for(int i = 0; i < str + 1; i++){ // where i is less than
        invert[i] = texto[last_position - i];

    }
    printf("%s\n", invert);
}
