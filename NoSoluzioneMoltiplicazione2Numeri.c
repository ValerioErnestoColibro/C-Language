#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2, prodotto;
	
	printf("Inserisci il primo numero da moltiplicare: ");
	scanf("%d",&num1);
	
	printf("Inserisci il secondo numero da moltiplicare: ");
	scanf("%d",&num2);
	
	prodotto=num1*num2;
	
	printf("Il prodotto della moltiplicazione \x8A uguale a %d",prodotto);
	
	return 0;
}