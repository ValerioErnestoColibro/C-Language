#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

double numero1, numero2, risultato;
char operator;

printf("**CALCOLATRICE**\n");
printf("Scegli un'operazione (+,-,*,/): ");
scanf(" %c", &operator);

printf("Inserisci il primo numero: ");
scanf("%lf", &numero1);
printf("Inserisci il secondo numero: ");
scanf("%lf", &numero2);

switch (operator) {
	case '+':
		risultato=numero1+numero2;
		printf("Risultato della somma: %.2lf\n",risultato);
		break;
		
	case '-':
		risultato=numero1-numero2;
		printf("Risultato della sottrazione: %.2lf\n",risultato);
		break;
	
	case '*':
		risultato=numero1*numero2;
		printf("Risultato della moltiplicazione: %.2lf\n",risultato);
		break;
		
	case '/':
		if (numero2 != 0){
		risultato=numero1/numero2;
		printf("Risultato della divisione: %.2lf",risultato);
		} else {
		printf("Errore! Divisione per zero non consentita!");
		}
		break;	
		
	default:
		printf("Operazione non valida.\n");
		break;		
}

}