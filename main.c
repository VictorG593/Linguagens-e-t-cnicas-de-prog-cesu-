#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "portuguese");
int numero [100],i;
for (i=0 ; i <100; i++){

printf ("digite o numero: ", i +1);
scanf ("%d", &numero [i] );
}
for (i=99 ; i >= 0; i--){

printf ("\n numero %d: %d ", i +1, numero [i]);
}


	return 0;
}
