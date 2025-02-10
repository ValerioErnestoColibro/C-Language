#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	
	/* Dichiara un array bidimensionale 3x3 */
	int matrice[3][3];
	
	printf("Inserisci i valori della matrice 3x3:\n");
	/* Fai un ciclo for esterno per determinare le righe */
	for (int i=0; i<3; i++) {
		/* Fai un ciclo for interno per determinare le colonne */
		for (int j=0; j<3; j++){
			printf("Elemento[%d][%d]:",i,j);
			scanf("%d",&matrice[i][j]);
		}
	}
	printf("La matrice inserita \x8A uguale a:\n");
	/* Rifai lo stesso procedimento di prima per determinare righe e colonne */
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			/* Nel "printf" usa \t per creare spazio tra i numeri e dunque una tabella */ 
			printf("\t%d",matrice[i][j]);
		}
		printf("\n");
	}
}