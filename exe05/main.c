#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include "functions.h"

 int main() {

   char v[100];

   fgets(v, 100, stdin);
   inverte(v);

  return 0;
}