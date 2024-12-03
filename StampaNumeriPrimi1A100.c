#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	for (int i=2; i<=100; i++) {
		int isPrimo = 1;
		for (int j=2; j<i; j++) {
			if (i % j==0) {
				isPrimo = 0;
				break;
			}
		}
		if (isPrimo){
			printf("\t%d",i);
		}
	}
	printf(" \n ");
}