#include <stdio.h>
// #include <stdlib.h>
// void listar (char *vetor);
void limpar ();

int main () {
     int i;
     char lista[3];
     for (i=0; i<=2; i++) {
         printf ("%d: ", i+1);
    								// fflush(stdin);
 	 scanf ("%c", &lista[i]);				// espaço antes do " %c"
 								// lista[i] = getche (); // Biblioteca stdlib.h
     }
     listar (lista);
}

void listar (char *vetor) {
     int i;
     for (i=0; i<=2; i++) {
        printf ("%c ", vetor[i]);
     }
}

/* void limpar () { 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
} */