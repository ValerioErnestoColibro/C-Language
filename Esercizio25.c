#include <stdio.h>
#include <stdlib.h>

/* Data una stringa di testo predefinita (anche con spazi multipli, e anche con spazi iniziali e finali),
Scrivere un programma in C in grado di stampare le singole parole individuate nella stringa, una per ogni riga. 
Esempio "Facciamo insieme questo esercizio" stamperà:
Facciamo
insieme
questo
esercizio */

/* Definisci una funzione che accetta una stringa ("const char *str")
come input e non restiuisce nulla ("void")*/

void stampa_parole(const char *str) {
	// Avvia un ciclo che scorre ogni carattere fino alla fine della stringa
	while (*str) {
		// Se il carattere e' uno spazio, si salta al prossimo
		if (*str == ' '){
			str++;
			continue;
		}
		//Se il carattere corrente non e' uno spazio o la fine della stringa, stampalo
		// Poi, avanza nella stringa finche' non si trova uno spazio o la fine della stringa
		while (*str != '\0' && *str != ' ') {
			// Qui stampi il carattere
			putchar(*str);
			str++;
		}
		// Dopo la stampa, vai a capo
		putchar('\n');
	}
}

int main() {
	
	// Definisci una stringa predefinita
	const char stringa[] = " Facciamo insieme questo esercizio	";
	// Stampa l'output
	printf("Le parole nella stringa sono:\n");
	// Fai una funzione per elaborare e stampare l'output
	stampa_parole(stringa);
	
	return 0;
}
