#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

int n, fattoriale=1;

printf("Inserisci un numero per ottenerne il fattoriale: ");
scanf("%d",&n);

for (int i=1; i<=n; i++) {
	fattoriale*=i;
}

printf("Il fattoriale di %d \x8A uguale a %d",n,fattoriale);

}