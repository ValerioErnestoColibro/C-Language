#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int base, altezza, area;
	
	printf("Inserisci un valore INTERO per la base: ");
	scanf("%d",&base);
	
	printf("Inserisci un valore INTERO per l'altezza: ");
	scanf("%d",&altezza);
	
	area=base*altezza;
	
	printf("L'area di questo rettangolo \x8A uguale a %d",area);
	
	return 0;
}