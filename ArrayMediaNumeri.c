#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int numeri[5]; /* Array di numeri interi con lunghezza 5 */
	int somma=0;
	
	for (int i=0; i<5; i++){ /* Si parte dalla posizione 0 e si arriva a quella 4 */
	/* Infine si aumenta di 1 unita' */
		printf("Inserisci il numero %d: ",i+1);
		/* Ad ogni inserimento, aumenta "i" di 1 fino a riempire tutto l'array */
		scanf("%d",&numeri[i]);
		somma += numeri[i];
	}
	
	float media = (float)somma/5;
	printf("La media dell'array \x8A uguale a %.2f\n",media);
}