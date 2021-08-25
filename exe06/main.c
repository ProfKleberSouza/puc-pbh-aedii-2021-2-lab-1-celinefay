#include <stdio.h>
#include "functions.h"

int main() {

    int x;
    int n; // we want the x to the power of n
    int p; // the power

    scanf("%d %d", &x, &n);  // we get the num and the power

    p = potencia(x, n);

    printf("%d", p);


  return(0);
}