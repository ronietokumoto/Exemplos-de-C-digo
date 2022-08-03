#include <stdio.h>

void listar (int *vetor);
int main () {
	int i;
	int lista[3];
     for (i=0; i<=2; i++) {
    	printf ("%d: ", i+1);
 	scanf ("%d", &lista[i]);
     }
     listar (lista);
}

void listar (int *vetor) {
     int i;
     for (i=0; i<=2; i++) {
        printf ("%d ", vetor[i]);
     }
}
