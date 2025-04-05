#include <stdio.h>
#include <stdlib.h>

/* Dato il file allegato "articolo_giornale.txt", 
scrivere un programma in C che restituisca il numero di occorrenze della parola "alunni" nel file.
Proporre una soluzione senza l'uso della libreria string.h */

int main() {
	/* Puntatore al file da aprire */
	FILE *file;
	/* Array di tipo stringa col nome del file da leggere */
	char filename[] = "articolo_giornale.txt";
	/* Variabile che conterra' ogni carattere letto da file */
	char c;
	/* Contatore delle occorrenze della parola "alunni" */
	int count = 0;
	/* Array di tipo stringa che contiene la parola da cercare ("alunni") */
	char target[] = "alunni";
	/* Variabile che dichiara la lunghezza della parola "alunni", pari a 6 */
	int target_length = 6;
	/* Indice per confrontare i caratteri letti con quelli della parola target */
	int index = 0;
	
	/* Apri il file in modalità lettura ("r") e assegna il puntatore "file" */
	file = fopen(filename, "r");
	
	/* Verifica se il file e' stato aperto correttamente */
	/* In caso di errata apertura, stampa un messaggio di errore ed esce dal programma ("return 1") */
	if (file == NULL) {
		printf("Errore: impossibile aprire il file %s.\n", filename);
		return 1;
	}
	
	/* Legge un carattere alla volta dal file fino alla fine (EOF) */
	while ((c = fgetc(file)) != EOF) {
	/* Converte manualmente le lettere MAIUSCOLE in minuscole */
	if (c >= 'A' && c <= 'Z') {
		/* Fai la differenza per convertire la lettera */
		c = c + ('a' - 'A');
	}
	/* Se il carattere letto corrisponde al carattere corrente di "target" */
	if (c == target[index]) {
		/* Incrementa l'indice di 1 per passare al carattere successivo */
		index++;
		/* Se l'indice raggiunge la lunghezza della parola, allora e' stata trovata */
		if (index == target_length) {
			/* Incrementa il numero di occorrenze trovate */
			count++;
			/* Resetta l'indice per ricominciare la ricerca */
		}
		/* Se il carattere non corrisponde, resetta l'indice a 0 */
	} else {
		index = 0; 
	}
	}
	/* Chiudi il file per liberare risorse */
	fclose(file);
	/* Stampa il numero totale di occorrenze di "alunni" */
	printf("La parola 'alunni' appare %d volte nel file.\n", count);
	return 0;
}
