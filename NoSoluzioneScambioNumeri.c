#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	
	printf("Inserisci il valore di 'a': ");
	scanf("%d",&a);
	
	printf("Inserisci il valore di 'b': ");
	scanf("%d", &b);
	
	printf("Ora scambiamo i valori delle due variabili: \n'a' adesso \x8a uguale a %d \n'b' adesso \x8a uguale a %d",b,a);
	
	return 0;
}