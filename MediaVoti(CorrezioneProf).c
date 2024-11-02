#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero_voti, i, voti;
	int accumulatore;
	float media;
	
	printf("Inserisci numero di voti da mediare: ");
	scanf("%d",&numero_voti);
	accumulatore=0;
	
	for(i=0; i<numero_voti; i++) {
		printf("Inserisci il %d' voto: ",i+1);
		scanf("%d",&voti);
		accumulatore=accumulatore+voti;
	}
	
	media=(float)accumulatore/numero_voti;
	printf("Hai la media del %f",media);
	
	return 0;
}