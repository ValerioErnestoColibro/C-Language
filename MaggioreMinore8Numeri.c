#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int n, mag, min;

printf("Inserisci un numero INTERO: ");
scanf("%d",&n);

mag = n;
min = n;
	
	for(int i=1; i < 8; i++) {
		printf("Inserisci il %d' numero: ",i+1);
		scanf("%d",&n);
		
		if (n > mag){
			mag = n;
		}
		
		if (n < min){
		min = n;
		}
	}
	
	printf("Il numero maggiore \x8a %d\n", mag);
	printf("Il numero minore \x8a %d\n", min);
	
	return 0;
}