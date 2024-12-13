#include <stdio.h>
#include <stdlib.h>

/* Scrivi un programma che chieda all'utente di inserire un numero 
e continui a sommare le sue cifre finché non ottieni una singola cifra */

int main() {
	int numero, somma;
	
	printf("Inserisci un numero: ");
	scanf("%d", &numero);
	
	while(numero >= 10) {
		somma = 0;
		while (numero > 0){
			somma += numero % 10;
			numero /= 10;
		}
		numero = somma;
	}
	printf("La cifra unica \x8A uguale a %d\n", numero);
}