#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int numero, i;
	int somma=0;
	
	printf("Decidi fino a che numero sommare: ");
	scanf("%d",&numero);
	

	
	for (i=1; i<=numero; i++) {
		somma+=i;
	}
	
	printf("La somma dei numeri da 1 a %d \x8A uguale a: %d",numero,somma);

}