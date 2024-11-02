#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int quantitavoti, voto;
	printf("Quanti voti devi inserire? ");
	scanf("%d", &quantitavoti);
	printf("\n");
	
	int somma = 0;
	for(int i = 0; i < quantitavoti; i++) {
		printf("Inserisci voto della %d' materia: ", i+1);
		scanf("%d", &voto);
		somma += voto; /* Modo abbreviato di scrivere "somma = somma + voto" */
	}
	
	printf("\nLa media dei tuoi voti \x8a uguale a: %f", (float)somma/quantitavoti);
	
	return 0;
}