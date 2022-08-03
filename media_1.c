#include <stdio.h>				// Biblioteca de entrada e saída de dados
#include <locale.h>				// Biblioteca de ajuste de idioma

float calcula (float x, float y);		// prototipação

int main () {					// Função principal
   float x, y;					// Declaração de variáveis para números de ponto flutuante
   int i;					// Declaração de variável contadora para números inteiros
   setlocale(LC_ALL, "Portuguese");		// Ajuste de idioma para português
   for (i=0; i<10; i++) {			// Estrutura de repetição contada para 10 iterações (0 a 9)
	scanf ("%f\n%f", &x, &y);		// Solicita a digitação de dois valores para as variáveis x e y
	printf ("%f\n", calcula (x, y));	// Exibe mensagem, mais retorno da função calcula()
	if (calcula (x, y) >= 10)		// Condição adicional para análise de valor da média calculada
		printf ("\nMédia alta! ");	// Mensagem exibida se resultado da condição for verdadeiro
	else					// condição alternativa
		printf ("\nMédia baixa! ");	// Mensagem exibida se resultado da condição for falso
   }						// Fim do bloco de comandos da estrutura de repetição
}						// Fim do bloco de comandos da função main()

float calcula (float var1, float var2){			// Função calcula()
   float media;					// Variável local para números de ponto flutuante
   media = (var1 + var2) / 2;			// Atribuição do resultado da expressão para a variável media
   return (media);				// Retorno da função com o valor da variável media para a função main()
}						// Fim do bloco de comandos da função calcula()
