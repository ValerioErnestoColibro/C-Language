#include <stdio.h>
#include <stdlib.h>
#define N 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int array[N] = {1,2,3,4,5,6,7,8,9,10};
	int i;
	
	for(i=N-1;i>=0;i--) { /* Si mette N-1 poichè si parte dall'ultima posizione */
		printf("%d ",array[i]);
	}
		
	return 0;
}
