#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2, num3, somma;
	
	printf("Inserisci il primo numero da sommare: ");
	scanf("%d",&num1);
	
	printf("Inserisci il secondo numero da sommare: ");
	scanf("%d",&num2);
	
	printf("Inserisci il terzo numero da sommare: ");
	scanf("%d",&num3);
	
	somma=num1+num2+num3;
	
	printf("La somma dei tre numeri \x8A uguale a %d",somma);
		
	return 0;
}