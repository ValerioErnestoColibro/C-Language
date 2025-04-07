#include <stdio.h>
#include <stdlib.h>

/* Data una stringa prefissata creare una funzione che conta le parole considerando le seguenti eccezioni:
1) la stringa può contenere spazi multipli
2) la stringa può avere uno spazio iniziale
3) la stringa può avere lunghezza nulla
4) la striga può avere spazi in coda */

// Definisci la funzione "conta_parole" che accetta un puntatore a stringa ("const char *str")
// E poi restituisci un intero ("int") corrispondente al numero di parole
	
	int cont_parole(const char *str) {
		// Inizializza il contatore delle parole a 0
		int count = 0;
		// Inizia un ciclo che scorre la stringa fino alla fine (indicata con 0)
		while (*str) {
			// Questo ciclo interno salta tutti i caratteri di spazio consecutivi
			// Se la stringa ha degli spazi iniziali, il puntatore "str" avanza fino a trovare un carattere senza spazio
			while (*str == ' ') {
				str++;
			}
			//Se il carattere attuale non e' il terminatore 0, c'è un'altra parola
			// Dunque incrementa di 1 il contatore
			if (*str != '\0') {
				count++;
			}
			// Questo ciclo salta i caratteri della parola corrente fino allo spazio o termine della stringa
			while (*str != '\0' && *str != ' ') {
				str++;
			}
		}
		// Restituisci il numero totale di parole trovate nella stringa 
		return count;
	}
	int main() {
		// Inizializza una stringa di esempio
		char stringa[] = "	Questa e' una stringa di esempio	";
		// Passiamo la stringa come argomento chiamando la funzione "conta_parole"
		// Poi salva il numero di parole restituite dalla funzione nella variabile "parole"
		int parole = conta_parole(stringa);
		
		printf("La stringa contiene %d parole.\n", parole);
		
	return 0;
}
