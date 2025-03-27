#include <stdio.h>
#include <stdlib.h>
#define N 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int array[N];
	int i;
	
	for (i=0;i<N;i++) {
	printf("Inserisci 10 valori: ");
	scanf("%d",&array[i]);
	}
	
	for (i=0;i<N;i++){
		printf("Valori dell'array: %d \n",array[i]);
	}
		
	
	return 0;
}
