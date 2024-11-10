#include <stdio.h>
#include <stdbool.h>
#define N 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int voti[N]={6,4,7,8,9};
	int i;

	for(i=0; i<N; i++){
		if (voti[i]){
			printf("1 ");
		} else {
			printf("0 ");
		}
		printf("%d",voti[i]);
	} 
	return 0;
}