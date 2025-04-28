#include <stdio.h>
#include <stdlib.h>
/* Una costante che rappresenta la lunghezza massima delle parole da inserire */
#define MAX_LENGTH 100 

/* Un file di testo contiene un elenco di nomi
Un altro file di testo contiene il rispettivo elenco di cognomi
Scrivere un programma n C in grado di generare un altro file di testo 
contenente l'elenco di Nomi e Cognomi (un nominativo per riga) */

int main() {
	/* Array di stringhe in cui memorizzare nomi e cognomi */
	char nome[MAX_LENGTH], cognome[MAX_LENGTH];
	/* Puntatori a file per gestire i file di input e output */
	FILE *fileNomi, *fileCognomi, *fileOutput;
	
	/* Apri questi due file in modalità lettura ("r") */
	fileNomi = fopen("Nomi.txt", "r");
	fileCognomi = fopen("Cognomi.txt", "r");
	/* Crea un file in formato .txt per scrivere ("w") l'output */
	fileOutput = fopen("Nominativi.txt", "w");
	
	/* Controlla se l'apertura dei file e' valida */
	if (fileNomi == NULL || fileCognomi == NULL || fileOutput == NULL) {
		/* Alert di avviso */
		perror("Errore! File non aperto");
		/* Termina il programma con valore di uscita 1 che indica un errore */
		return 1;
	}
	
	/* Ora leggiamo una riga di "nome" e di "cognome" fino alla fine dei file ("EOF") */
	while (fscanf(fileNomi, "%s", nome) != EOF && fscanf(fileCognomi, "%s", cognome) != EOF) {
		/* Poi scriviamo il nome ed il cognome nel file di output, separati da una riga */
		fprintf(fileOutput, "%s %s\n", nome, cognome);
	}
	
	/* Dopo averli usati, chiudiamo i file per risparmiare risorse */
	fclose(fileNomi);
	fclose(fileCognomi);
	fclose(fileOutput);
	
	printf("File 'Nominativi.txt' creato con successo.\n");
	return 0;
}
