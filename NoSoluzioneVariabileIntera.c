#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero;
	
	printf("Inserisci un numero INTERO: ");
	scanf("%d",&numero);
	
	printf("Il numero che hai inserito \x8a %d",numero);	
	
	return 0;
}