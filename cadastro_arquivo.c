#include <stdio.h>
typedef struct ficha{
   char nome[50];
   char telefone[15];
 } FICHA;

int main(void){
    FILE *pont_arq; 
    FICHA cadastro;
    char registro[65];
    char n1[2], n2[2];
    char *arquivo = "dados.txt";
    int i;
    pont_arq = fopen ("dados.txt", "w");
    if(pont_arq == NULL){
         printf("Erro !");
         return 1;
    }
    printf ("Cadastro de Dados em Arquivo");
    for (i=1;i<=3;i++){
        printf ("\n\nNome: ");
        scanf ("%s", &cadastro.nome);
        printf ("\nTelefone: ");
        scanf ("%s", &cadastro.telefone);
}
    fprintf(pont_arq, "%s", &cadastro.nome);
        fprintf(pont_arq, "%s", " - ");
        fprintf(pont_arq, "%s", &cadastro.telefone);
        fprintf(pont_arq, "%s", "\n");
    }

    fclose(pont_arq);
    printf("Dados gravados com sucesso!");
    return(0);
}
