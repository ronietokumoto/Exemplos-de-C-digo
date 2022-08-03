#include <stdio.h>
int calc (int a, int b, char c);	// protótipo da função
int main () {			// função principal
     int valorA, valorB; char op;
     printf ("\nDigite um valor: ");
     scanf ("%d", &valorA);
     printf ("\nDigite um valor: ");
     scanf ("%d", &valorA);
     printf ("\nOperação (+ - * /: ");
     scanf ("%c", &op);
     printf ("\nResultado: %d", calc( valorA, valorB, op ));
}
int calc (int a, int b, char c) {
     switch (c) {
	case '+' : return (a+b);
	     break;
	case '-' : return (a-b);
	     break;
	case '*' : return (a*b);
	     break;
	case '/' : return (a/b);
	     break;
	default : return (0);
      }
}
