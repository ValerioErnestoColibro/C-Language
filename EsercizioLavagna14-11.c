#include <stdio.h>
#define N 10

int main(){
	int i;
    int base[N] = {1, 2, 5, 7, 5, 6, 2, 8, 9, 12};
    int a[N] = {};
    int b[N] = {};
    int c[N] = {};

    for(i = 0; i < N; i++){

        if(i < N/2){ 
			a[i] = base[i+N/2];
        } else { 
			a[i] = base[i-N/2]; 
		}
    }

    int j = 0;
    for(i = N-1; i >= 0; i--){

        b[j] = base[i];
        j++;
    }

    for(i = 0; i < N; i++){

        if(base[i] % 2 == 0){ c[i] = 1;
        } else { c[i] = 0; }
    }

    for(i = 0; i < N; i++){ printf("%d ", base[i]); } printf("\n"); //vettore di base
    for(i = 0; i < N; i++){ printf("%d ", a[i]); } printf("\n"); //vettore diviso a metà
    for(i = 0; i < N; i++){ printf("%d ", b[i]); } printf("\n"); //vettore invertito
    for(i = 0; i < N; i++){ printf("%d ", c[i]); } printf("\n"); //vettore con 0 e 1

    return 0;
}
