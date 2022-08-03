#include <stdio.h>
int main() {
    FILE *arq;
    char frase[100];

    arq = fopen("dados.txt", "r");

    if (arq == NULL)
        printf ("\nErro na abertura!");
    else
        while (!feof(arq)) {
            fgets (frase, 100, arq);
            if (ferror(arq))
                printf ("Erro na leitura!");
            else
                printf ("\n Dados: %s ", frase);
        }
    fclose (arq);
}
