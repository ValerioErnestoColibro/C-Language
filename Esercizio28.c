#include <stdio.h>
#include <stdlib.h>

/* Dato il file di testo allegato, scrivere u programma in C in grado di sostituire la parola 

 "alunni" con la parola "allievi" in tutto il file generando un nuovo file denominato articolo_giornale_new.txt

Non utilizzare la libreria string.h */

int main() {
	
	// Apriamo il primo file in modalità lettura
	FILE *fin = fopen("articolo_giornale.txt", "r");
	// Apriamo il secondo file in modalità scrittura
	FILE *fout = fopen("articolo_giornale.txt", "w");
	// Entrambi i file vengono aperti e associati a due puntatori ("fin" e "fout")
	
	// Se il file non e' stato aperto/trovato, stampa un messaggio di errore col valore di ritorno 1
	if (fin == NULL || fout == NULL) {
		printf("Impossibile aprire i file.\n");
		return 1;
	}
	// Inizializza una variabile che memorizza il carattere letto dal file di input
	char c;
	
	// Ciclo di lettura del carattere dal file di input fino alla fine del file ("EOF")
	// "fgetc(fin)" legge un carattere dal file di input
	while ((c = fgetc(fin)) != EOF) {
		// Se il carattere letto è la prima lettera della parola "alunni"
		if (c == 'a') {
			// Verifica che i successivi caratteri siano le altre lettere di "alunni"
			// "fgetc(fin) legge un carattere e lo confronta con "alunni"
			if (fgetc(fin) == 'l' && fgetc(fin) == 'u' && fgetc(fin) == 'n' && fgetc(fin) == 'n' && fgetc(fin) 'i') {
				//Se i caratteri corrispondono, il programma scrive "allievi" nel file di output
				fputs("allievi", fout);
				
			} else {
				/* Se la parola "alunni" non c'è, scrivi il carattere 'a' e rimette indietro il carattere 'l' 
				per continuare il ciclo di lettura */
				fputc('a', fout);
				ungetc('l', fin);
			} else {
				
			}
		}
	}
	
	
	return 0;
}
