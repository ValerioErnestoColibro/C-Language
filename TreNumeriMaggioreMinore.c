#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {

int a, b, c;

printf("Inserisci il primo numero intero: \n");
scanf("%d", &a);
printf("Inserisci il secondo numero intero: \n");
scanf("%d", &b);
printf("Inserisci il terzo numero intero: \n");
scanf("%d", &c);


if (a > b && a > c){
	printf("Il numero maggiore \x8A: %d\n",a);
} else if (b > c) {
	printf("Il numero maggiore \x8A: %d\n",b);
} else {
	printf("Il numero maggiore \x8A: %d\n",c);
}
}