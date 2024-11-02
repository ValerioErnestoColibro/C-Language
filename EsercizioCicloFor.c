#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i; /* i statica */
	for (i=0; i<5; i++){ /* i dinamica */
		printf("Partendo dalla posizione 0, questo testo viene stampato 5 volte \n", i);
	}
	return 0;
}