#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int numero, i;

printf("Inserisci il valore del numero da stampare 10 volte: ");
scanf("%d",&numero);

for (i=0; i<10; i++) {
	printf("Il numero %d \x8A stato stampato dieci volte\n",numero);
	}
	return 0;
}