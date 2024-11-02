#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j;
	for(i=0; i<6; i++){
		for(j=0; j<5; j++){
			printf("%c",j+65);
		}
		printf("\n");
	}
	
	return 0;
}