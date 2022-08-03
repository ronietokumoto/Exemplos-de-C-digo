#include <stdio.h>
#include <locale.h>
struct Registro {
    int cod;
    char nome[20];
    int idade;
};
int main (){
    int i;
    struct Registro Cadastro[3];
    setlocale(LC_ALL, "Portuguese");
    for (i=0; i<3; i++){
        Cadastro[i].cod = i+1;
        printf ("None: ");
        scanf ("%s", Cadastro[i].nome);
        printf ("Idade: ");
        scanf ("%d", &Cadastro[i].idade);
    }
    printf ("\n");
    for (i=0; i<3; i++){
        printf ("\nCódigo: %d - ", Cadastro[i].cod);
        printf ("None: %s - ", Cadastro[i].nome);
        printf ("Idade: %d", Cadastro[i].idade);
    }
    return (1);
}
