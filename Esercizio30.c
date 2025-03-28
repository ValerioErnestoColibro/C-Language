#include <stdio.h>
#include <stdlib.h>

/* Scrivere un programma in C che interpreti i numeri a 4 cifre contenuti nel file numeri.txt  
e li trasformi in valori decimali stampandoli a video. */

int main() {
	// Usa un puntatore per accedere al file
	FILE *file;
	// Usa questa variabile per memorizzare i numeri letti dal file
	int numero;
	
	// Apriamo il file in modalità lettura
	file = fopen("numeri.txt", "r");
	// Se il file non e' stato aperto/trovato, restituisci un messaggio di errore
	if (file == NULL) {
		printf("Impossibile aprire il file.\n");
		return 1;
	}
	// Intanto, un ciclo while legge un numero intero dal file e lo memorizza in "numero"
	// Il ciclo continuerà fino a quando "fscanf" riesce a leggere correttamente un numero
	// In caso di successo, restituisce 1
	while (fscanf(file, "%d", &numero) == 1) {
		printf("%d\n", numero);
	}
	
	// Stampa ogni numero letto
	printf("%d\n", numero);
	
	// Chiudi il file per risparmiare risorse
	fclose(file);
	
	return 0;
}
