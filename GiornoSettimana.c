#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int giorno;
	
	printf("Inserisci un numero da 1 a 7 per avere il relativo giorno della settimana: ");
	scanf("%d", &giorno);
	
	switch (giorno) {
		case 1: 
			printf("Lunedi\n");
			break;
		
		case 2:
			printf("Martedi\n");
			break;
			
		case 3:
			printf("Mercoledi\n");
			break;
			
		case 4:
			printf("Giovedi\n");
			break;
			
		case 5:
			printf("Venerdi\n");
			break;
			
		case 6:
			printf("Sabato\n");
			break;
			
		case 7:
			printf("Domenica\n");
			break;
			
		default:
			printf("Numero non valido!\n");
							
	}
}