#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	/* Dichiara anche che la somma sara' un array della stessa dimensione */
	int array1[2][2], array2[2][2], somma[2][2];
	
	printf("Inserisci i valori del primo array 2x2:\n");
	/* Fai due cicli for per riempire le posizioni del primo array*/
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++) {
			/* Crea un contatore per vedere i posti occupati dell'array */
			printf("Elemento[%d][%d]:",i,j);
			scanf("%d",&array1[i][j]);
		}
	}
	
		printf("Inserisci i valori del secondo array 2x2 2x2:\n");
	/* Fai due cicli for per riempire le posizioni del secondo array*/
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++) {
			/* Crea un contatore per vedere i posti occupati dell'array */
			printf("Elemento[%d][%d]:",i,j);
			scanf("%d",&array2[i][j]);
		}
	}
	printf("La somma dei due array \x8A uguale a:\n");
	/* Crea un nuovo array con la somma dei due precedenti */
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			somma[i][j]=array1[i][j]+array2[i][j];
			printf("%d",somma[i][j]);
		}
		printf("\n");
	}

}