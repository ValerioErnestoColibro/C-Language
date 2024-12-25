#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int somma=0, numero;
	
	while(somma<=100) {
		printf("Inserisci un numero: ");
		scanf("%d",&numero);
		somma += numero;
	}
	printf("Somma raggiunta: %d\n",somma);
}