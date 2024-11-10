#include <stdio.h>
#define N 5

void main(){
	int i;
	int vett[N] = {1,2,3,4,5};
	int n=4;
	for(i=0; i<N; i++) {
		printf("vett[%d]=%d\n",i,vett[i]);
	}
	printf("vett[5]=%d",vett[5]);   //attenzione!!!! fuori range
}
