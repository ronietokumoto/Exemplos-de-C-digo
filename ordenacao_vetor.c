#include <stdio.h>
void ordena (int *vetor);
int main() {
    int num[5];
    int i;
    for (i=0; i<5; i++) {
         printf (“Numero: ");
         scanf ("%d", &num[i]);
    }
    ordena (num);
}

void ordena (int *vetor){
int i, j, aux;
    for (i=0; i<4; i++)
        for (j=i+1; j<5; j++){
            if (vetor[i] > vetor[j]){
                 aux = vetor[i];
                 vetor[i] = vetor[j];
                  vetor[j] = aux;
             }
        }
    for (i=0; i<5; i++)
        printf ("\n%d", vetor[i]);
}
