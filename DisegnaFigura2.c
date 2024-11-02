#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int lato, i, j;
	
	printf("Inserisci la misura del lato dei quadrati: ");
	scanf("%d",&lato);
	
	printf("\nQuadrato pieno: \n");
	
	for(i=0; i < lato; i++){
		for (j=0; j < lato; j++) {
			printf("*");
		}
		
		printf("\n");
	}
	
	printf("\nQuadrato vuoto: \n");
	
	for (i=0, i < lato; i++) {
		for (j=0; j < lato; j++) {
			
		}
	}
	
	
	
	return 0;
}