#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int num1, num2, scelta, risultato;
	float risultato_divisione;
	
	printf("Quale operazione svolgere? \n");
	printf("1) +\n");
	printf("2) -\n");
	printf("3) *\n");
	printf("4) /\n");
	printf("Inserisci la tua scelta: ");
	scanf("%d",&scelta);
	
	printf("Valore del primo numero: ");
	scanf("%d",&num1);
	printf("Valore del secondo numero: ");
	scanf("%d",&num2);
	
	switch (scelta) {
		case 1: risultato=num1+num2;
			printf("Il risultato \x8A uguale a %d",risultato);
			break;
			
		case 2: risultato=num1-num2;
			printf("Il risultato \x8A uguale a %d",risultato);
			break;
			
		case 3: risultato=num1*num2;
			printf("Il risultato \x8A uguale a %d",risultato);
			break;
		
		case 4:
		if (num2 == 0) {
			printf("operazione non valida! \n");
		} else {
			risultato_divisione=(float)num1/num2;
			printf("Il risultato \x8A uguale a %f",risultato_divisione); }
			break; 
			
		default: printf("Scelta errata!");
	}
		
}
