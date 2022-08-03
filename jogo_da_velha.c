#include <stdio.h>							// Biblioteca padrão de entrada e saída

 int main (void) {							// Declaração da função main()
     char Matriz[3][3];							// Declaração de matriz 3x3 de caracteres
     char O = 'O’, X = 'X’;						// Declaração de variáveis X e O inicializadas
     char c;								// Declaração de variável auxiliar c
     int placar [2];							// Declaração de vetor para armazenar placar
     int l = 0, j, i;							// Declaração de variável l para vez de jogador e i,j auxiliares
     FILE *pont_arq;							// Declaração de variável para armazenamento de arquivo
     		 
     pont_arq = fopen("placar.txt", "r"); 				// Função para abertura de arquivo

     i = 0; 								// inicializa variável auxiliar i
     while( (fscanf (pont_arq,"%d\n", &placar [i])) != EOF ) {		// Estrutura de repetição para ler todos os placares
            i++;							// Incrementa contador do vetor de placar
     }									// Fim do bloco de instruções do comando while
     fclose(pont_arq);		 					// Função para fechar arquivo de dados

     for(i=0; i<3; i++)							// Estrutura de repetição para linha
         for(j=0; j<3; j++)						// Estrutura de repetição para coluna
             Matriz[i][j] = ' ‘;					// Inicializa valor da matriz com vazio
     while ( l<=9 ) {
         printf ("  JOGO DA VELHA \n");					// Exibição de mensagem ao usuário
         printf ("  Placar Atual: %d x %d\n", placar [0], placar [1]);	// Exibição de mensagem ao usuário
         for (i=0; i<3; i++) {						// Estrutura de repetição para jogo da velha
             printf ("\t\t     %c \xBA %c \xBA %c\n",Matriz[i][0],Matriz[i][1],Matriz[i][2]);	// Exibição do jogo da velha
             if (i < 3-1) {						// Verificação da linha do jogo da velha
                 printf ("\t\t    ÍÍÍ\xCEÍÍÍ\xCEÍÍÍ\n");		// Exibição do jogo da velha
             }								// Fim do bloco de instruções de if
         }								// Fim do bloco de instruções de for

         printf ("\n\n\n\n\n\n\n\n\n\n\n\nINSIRA AS COORDENADAS, ");	// Exibição de mensagem ao usuário
         if (l%2) 							// Verificação da vez de cada usuário
	printf ("PLAYER 2\nLINHA: ");					// Exibição de mensagem ao usuário
         else 								// Verificação da vez de cada usuário 
	printf ("PLAYER 1\nLINHA: ");					// Exibição de mensagem ao usuário
         scanf ("%d",&i);						// Solicita a digitação de valor da linha
         printf ("COLUNA: ");						// Exibição de mensagem ao usuário
         scanf ("%d",&j);						// Solicita a digitação de valor da coluna

         if (Matriz[i-1][j-1] == ' ‘) {					// Verifica se coordenada informada está vazia
             if ( l%2 )							// Verifica qual jogador está na vez
	Matriz[i-1][j-1] = X;						// Atualiza valor da matriz
             else 							// Verifica qual jogador está na vez
	Matriz[i-1][j-1] = O;						// Atualiza valor da matriz
             i++;							// incrementa contador i
         }								// Fim do bloco de instruções de if
         system("cls");							// Comando de sistema para limpar a tela
         if (( Matriz[0][0]==O && Matriz[0][1]==O && Matriz[0][2]==O ) ||	// Verificação de formação de trio de caracteres X
            (Matriz[1][0]==O && Matriz[1][1]==O && Matriz[1][2]==O) ||
            (Matriz[2][0]==O && Matriz[2][1]==O && Matriz[2][2]==O) ||
            (Matriz[0][0]==O && Matriz[1][0]==O && Matriz[2][0]==O) ||
            (Matriz[0][1]==O && Matriz[1][1]==O && Matriz[2][1]==O) ||
            (Matriz[0][2]==O && Matriz[1][2]==O && Matriz[2][2]==O) ||
            (Matriz[0][0]==O && Matriz[1][1]==O && Matriz[2][2]==O) ||
            (Matriz[0][2]==O && Matriz[1][1]==O && Matriz[2][0]==O))
         {
             printf ("\n\a\t\tJogador 1, VOCE VENCEU!!!\n\n");		 // Exibição de mensagem ao usuário
             
             pont_arq = fopen ("placar.txt", "w");			 // Função para abertura do arquivo de dados
             if (pont_arq == NULL) {					 // Verifica fracasso na abertura do arquivo
                    printf ("Erro na abertura do arquivo!\n\n");	 // Exibição de mensagem ao usuário
                    return 1;						// Retorno padrão do software
             }						 		// Fim do bloco de instruções de if
             
             i = placar[0] + 1;				 		// Atualiza variável auxiliar com placar do jogador1
             j = placar[1];					 	// Atualiza variável auxiliar com placar do jogador2
             fprintf (pont_arq, "%d\n%d", i, j);			// Grava placar atualizado no arquivo de dados
             fclose (pont_arq);				 		// Função para fechar arquivo de dados
             printf ("Dados gravados com sucesso!\n\n");		// Exibe mensagem ao usuário
             
             break;					 		// Comando para interromper estrutura de repetição while
         }
if ((Matriz[0][0]==X && Matriz[0][1]==X && Matriz[0][2]==X) ||		// Verificação de formação de trio de caracteres X
            (Matriz[1][0]==X && Matriz[1][1]==X && Matriz[1][2]==X) ||
            (Matriz[2][0]==X && Matriz[2][1]==X && Matriz[2][2]==X) ||
            (Matriz[0][0]==X && Matriz[1][0]==X && Matriz[2][0]==X) ||
            (Matriz[0][1]==X && Matriz[1][1]==X && Matriz[2][1]==X) ||
            (Matriz[0][2]==X && Matriz[1][2]==X && Matriz[2][2]==X) ||
            (Matriz[0][0]==X && Matriz[1][1]==X && Matriz[2][2]==X) ||
            (Matriz[0][2]==X && Matriz[1][1]==X && Matriz[2][0]==X))
         {
             printf("\n\n\n\n\a\t\tJogador 2, VOCE VENCEU!!!\n\n");	// Exibição de mensagem ao usuário

             pont_arq = fopen("placar.txt", "w");			// Função para abertura do arquivo de dados
             if (pont_arq == NULL) {   					// Verifica fracasso na abertura do arquivo
                    printf ("Erro na abertura do arquivo!\n\n");	// Exibição de mensagem ao usuário
                    return 1;						// Retorno padrão do software 
             }								// Fim do bloco de instruções de if
             
             i = placar[0];						// Atualiza variável auxiliar com placar do jogador1
             j = placar[1]+1;						// Atualiza variável auxiliar com placar do jogador2
             fprintf (pont_arq, "%d\n%d", i, j);			// Grava placar atualizado no arquivo de dados
             fclose (pont_arq);						// Função para fechar arquivo de dados
             printf ("Dados gravados com sucesso!\n\n");		// Exibe mensagem ao usuário

             break;							// Comando para interromper estrutura de repetição while
         }								// Fim do bloco de instruções if
         if (l==9) {							// Verifica se não houve ganhador
             printf ("PARTIDA EMPATADA!!!\n\n");			// Exibe mensagem ao usuário

             pont_arq = fopen ("placar.txt", "w");			// Função para abrir arquivo
             if (pont_arq == NULL) {   					// Verificação de sucesso da abertura do arquivo
                    printf ("Erro na abertura do arquivo!\n\n");	// Exibe mensagem ao usuário de fracasso no processo
                    return 1;						// retorno padrão do software
             }								// Fim do bloco de instruções do comando if	
             
             i = placar[0];						// Atualiza variável auxiliar com placar do jogador1
             j = placar[1];						// Atualiza variável auxiliar com placar do jogador2
             fprintf (pont_arq, "%d\n%d", i, j);			// Função para gravar dados de placar no arquivo de dados
             fclose (pont_arq);						// Função para fechar arquivo
             printf ("Dados gravados com sucesso!\n\n");		// Mensagem ao usuário de sucesso na gravação

             break;							// Comando para interromper estrutura de repetição while
         }								// Fim do bloco de instruções do comando if

     }									// Fim do bloco de instruções da estrutura de repetição while
     printf ("  JOGO DA VELHA \n");					// Mensagem ao usuário
     printf ("  Placar Atual: %d x %d\n", i, j);			// Mensagem ao usuário exibindo placar do jogo
     system ("pause");							// Comando de sistema para aguardar pressionamento de Enter
     return (0);							// Retorno padrão do fim do código
 }									// Fim do bloco de comandos da função calcula()
