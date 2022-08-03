#include <stdio.h>					// Biblioteca padrão de entrada e saída de dados
#include <string.h>					// Biblioteca para manipulação de texto

int main () {						// Função principal
    FILE *arq;						// Declara variável do tipo arquivo
    char frase[100], palavra [20];			// Declara strings frase para 100 caracteres e palavra para 20
    arq = fopen("dados.txt", "r");			// Função para abertura de arquivo de dados
    if (arq == NULL)					// Verificação de fracasso no processo de abertura
        printf ("\nErro na abertura!");			// Mensagem de erro em caso de falha
    else{						// Caso tenha sucesso na abertura do arquivo
         printf ("Palavra a buscar: ");			// Exibe mensagem ao usuário
         scanf ("%s", palavra);				// Solicita digitação de texto a buscar
         while (!feof(arq)) {				// Estrutura de repetição para ler todo o arquivo
               	fgets (frase, 100, arq);		// Lê uma linha de texto do arquivo
               	printf ("%s", frase);			// Mostra a frase lida na tela para o usuário
	if (strstr (frase, palavra))			// Verifica se o texto solicitado está contido na linha lida
	      printf("Contem palavra na frase: %s\n", frase);	// Se encontrada o texto, exibe mensagem ao usuário
          }						// Fecha o bloco de instruções da estrutura de repetição
    }							// Fecha o bloco de instruções do else
    fclose (arq);					// Função para fechar arquivo
    return 0;						// Retorno padrão de 0 para sair do programa
}							// Fim do bloco de instruções da função main()
