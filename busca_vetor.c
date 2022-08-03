#include <stdio.h>
int main () {
    int num [5];
    int i, j, aux;
    for (i=0; i<5; i++){
        printf (“Numero: );
        scanf ("%d", &num[i]);
    }
    for (i=0; i<4; i++)
         for (j= i+1; j<5; j++){
 	    if (num[i] > num[j]){
                   aux = num[i];
                   num[i] = num[j];
                   num[j] = aux;
            }
       }
       printf ("Num. para busca: ");
       scanf ("%d", &aux);
       for (i=0; i<5; i++){
             printf ("\n%d ", num[i]);
             if (num[i] == aux)
                  printf (“-Encontrado");
       }
}
