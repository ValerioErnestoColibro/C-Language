#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int lista[5]; /* Variabile con un array */
	int max, min, i, posMax = 0, posMin = 0, somma; /* Variabili intere per determinare i valori massimo, minimo, le loro posizioni e la somma da usare per la media */
	float media;
	
	/* Inserimento dei valori da mettere nell'array */
	printf("Inserire 5 valori: ");
	for (i=0; i < 5; i++){
		printf("Valore %d: " i+1);
		scanf("%d", &lista[i]);
		/* Aggiungiamo ogni valore dell'array alla somma */
		somma += lista[i];
	}
	
	printf("\nValore dell'array inserito: ");
	for (i=0; i<5; i++){
		printf("%d", valori[i]);
	}
	
	
	return 0;
}