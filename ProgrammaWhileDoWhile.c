#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int val1, val2, scelta; /* Usata per memorizzare la scelta del menu'*/
	float risultato; /* I primi due rappresentano i cateti, il terzo rappresenta l'ipotenusa */
	
	do { /* Assicura che le istruzioni interne vengano eseguite almeno una volta. Il ciclo si ripeterà finchè non verrà selezionata un'altra opzione */
		printf("MENU' PRINCIPALE\n"); /* Scelte del menu' principale */
		printf("1) Calcola la media di due valori\n");
		printf("2) Scambia i due valori memorizzati nelle variabili\n");
		printf("3) Dati due valori dei cateti di un triangolo rettangolo, calcolare il valore dell'ipotenusa\n");
		printf("4) Dati due valori, verificare se sono uguali, altrimenti indicare il maggiore dei due\n");
		printf("Scegli un'opzione (1-4): ");
		scanf("%d",&scelta);
		
		switch (scelta) { /* Switch che ti serve ad eseguire le opzioni in base alla tua scelta */
			case 1: /* Pratica della prima scelta */
				printf("Inserisci il primo valore: ");
				scanf("%d", &val1);
				printf("Inserisci il secondo valore: ");
				scanf("%d", &val2);
				risultato = (val1+val2) / 2;
				printf("La media di %d e %d \x8A uguale a %.2f\n", val1, val2, risultato);
				break; /* Interruzione dell'istruzione */
				
			case 2:
				printf("Inserisci il primo valore: ");
				scanf("%d", &val1);
				printf("Inserisci il secondo valore: ");
				scanf("%d", &val2);
				float temp = val1;
				val1 = val2;
				val2 = temp;
				printf("Dopo lo scambio, il primo valore diventa %d ed il secondo valore diventa %d\n",val1,val2);
				break;
				
			case 3:
				printf("Inserisci il valore del primo cateto: ");
				scanf("%d",&val1);
				printf("Inserisci il valore del secondo cateto: ");
				scanf("%d", &val2);
				risultato=sqrt(val1*val1 + val2*val2); /* Qui si usa "sqrt" per fare la radice quadrata */
				printf("L'ipotenusa del triangolo rettangolo con i cateti di misura %d e %d \x8A uguale a %.2f",val1,val2,risultato);
				break;
			
			case 4:
				printf("Inserisci il primo valore da confrontare: ");
				scanf("%d",&val1);
				printf("Inserisci il secondo valore da confrontare: ");
				scanf("%d", &val2);
				if (val1==val2) {
					printf("I due valori sono uguali");
				} else if (val1 > val2){
					printf("Il primo valore \x8A maggiore del secondo valore ",val1,val2);
				} else {
					printf("Il secondo valore \x8A maggiore del primo valore",val2,val1);
				}
				break;
			
			default: 
				printf("\nScelta non valida! Riprova!\n\n");
				break;
		} 
	} while (scelta < 1 || scelta > 4);
	return 0;
}