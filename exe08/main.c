#include <stdio.h>
#include <stdbool.h>
#include "functions.h"

int main() {

    int text[50], end;

    printf("enter the word: ");
    fgets(text, sizeof(text), stdin);

    end = strlen(text) - 2;

    if(is_palindromo(text) == false){
        printf("NAO");
    }
    if(is_palindromo(text) == true){
        printf("SIM");
    }


  return(0);
}