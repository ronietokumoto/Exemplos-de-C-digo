#include <stdio.h>					// Bibioteca de entrada e saída de dados
#include <locale.h>					// Biblioteca de ajuste de idioma

int main () {						// Função principal padrão e inicial do código
    int x, y, resultado;				// Declaração de três variáveis para números inteiros
    setlocale(LC_ALL, "Portuguese");			// Ajusta idioma para português (“” usa idioma do Windows)
    printf ("Digite um primeiro valor: ");		// Exibe mensagem ao usuário
    scanf ("%d", &x);					// Solicita a digitação de um valor para a variável x
    printf ("Digite um segundo valor: "); 		// Exibe mensagem ao usuário
    scanf ("%d", &x); 					// Solicita a digitação de um valor para a variável y
    resultado = x + y;					// Calcula x + y e atribui a soma à variável resultado
    printf ("A soma dos dois valores é: ", resultado);	// Exibe mensagem e o valor contido na variável resultado
    resultado = resultado / 2;			 	// Calcula resultado / 2 e atribui a média à variável resultado
    printf ("A média dos dois valores é: ", resultado); // Exibe mensagem e o valor contido na variável resultado
}							// Encerra o bloco de instruções da função main()
