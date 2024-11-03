#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2, resto;
	float quoziente;
	
	printf("Inserisci il primo numero INTERO da dividere: ");
	scanf("%d",&num1);
	
	printf("Inserisci il secondo numero INTERO da dividere: ");
	scanf("%d",&num2);
	
	quoziente=num1/num2;
	
	resto=num1%num2;
	
	printf("Il risultato della divisione \x8A uguale a %f \n",quoziente);
	printf("Il resto della divisione \x8A uguale a %d",resto);
	
	return 0;
}