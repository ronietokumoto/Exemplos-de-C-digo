#include <stdio.h>
int main () {
   float notas [3][2];
   int i, j;
   float media[3];
   for (i=0; i<3; i++) {
        for (j=0; j<2; j++) {
             printf ("Aluno %d - nota %d: ", i+1, j+1);
             scanf ("%f", &notas [i][j] );
        }
   }
 for (i=0; i<3; i++) {
        printf ("\n\nNota do aluno %d", i+1);

        for (j=0; j<2; j++) {
             printf ("\n%f . nota: ", notas [i][j]);
             media[i] = media[i] + notas [i][j];
        }
        printf ("\nMedia: %f", media[i]/2);
   }
}
