#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

#define MAX 100
int main() {


    char text[MAX];
    fgets(text, MAX, stdin);
    numero_vogais(text);


  return(0);
}