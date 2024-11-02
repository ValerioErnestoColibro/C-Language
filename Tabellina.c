#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero;
	
	printf("Inserisci un numero INTERO: ");
	scanf("%d", &numero);
	
	for (int i=1; i<=10; i++){
		printf("%d x %d = %d\n", numero, i, numero * i);
	}
	
	return 0;
}