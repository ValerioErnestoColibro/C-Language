#include <stdio.h>
#include <stdlib.h>
#define N 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
int tavola_pitagorica[N][N]; /* Dichiarazione di una matrice 10x10 per memorizzare la tavola pitagorica */
int i, j;

printf("Prima tavola pitagorica\n");

for (i=0; i<N-1; i++){ /* Ciclo For ESTERNO, i=0 per stabilire l'indice del quadrato, continua fino ad 
arrivare a 10 e si incrementa di uno (passando ad un'altra riga) fino ad arrivare a 10 */
for (j=0;j<N;j++){
	tavola_pitagorica[i][j] = (i+1) * (j+1);
	printf("%d\t",tavola_pitagorica[i][j]);
}
printf("\n");
}

printf("\nSeconda tavola pitagorica\n");

for (i=0;i<N;i++){
	for(j=0;j<N;j++){
		tavola_pitagorica[i][j] = (i+1) * (j+1);
		printf("%d\t",tavola_pitagorica[i][j]);
	}
	printf("\n");
}

}
