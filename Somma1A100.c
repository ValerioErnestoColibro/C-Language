#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int somma = 0;

	for (int i=1; i<=100; i++) {
		somma +=i;
	}
	printf("La somma dei numeri da 1 a 100 \x8A uguale a %d\n",somma);
}