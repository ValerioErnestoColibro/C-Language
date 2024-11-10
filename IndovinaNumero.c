#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero, risposta, tentativi;
	
	printf("INDOVINA IL NUMERO!\n");
	
	do { /* Questo riguarda l'inserimento del numero */
		printf("Operatore 1, inserisci un numero compreso tra 1 e 9: ");
		scanf("%d",&numero);
	}
	while (numero <= 0 || numero > 10);
	
	do { 
		printf("Tocca a Operatore 2. Indovina il numero: ");
		scanf("%d",&risposta);
		if (risposta != numero) {
			printf("\nHai sbagliato, riprova!\n");
		}
		tentativi++;
	} while(risposta != numero);
	
	printf("\nHai indovinato! Il numero \x8A uguale a %d\n",risposta);
	printf("\nTentativi totali: %d\n",tentativi);
	
	return 0;
}