#include <stdio.h>
// programma utile a capire i costrutti while e do while
// se inserisci a da 0 a 10 sembrano uguali ma se inserisci a>10 allora ....
void main(){
	int a;
	
	printf("Si testano i cicli while e do while\n");
	printf("all'interno del ciclo si incrementa di 1 la varibile a'\n\n");
	
	printf("test ciclo while a<11 \n");
	printf("inserisci il valore di a (compreso tr a 0 e 10): ");
	scanf("%d",&a);
	
	while (a<11){
		printf("a=%d\n",a);
		a=a+1;
	}

	printf("\n\n");
	printf("test ciclo do...while a<11\n");
	printf("inserisci il valore di a (compreso tr a 0 e 10): ");
	scanf("%d",&a);
	
	do {
		printf("a=%d\n",a);
		a=a+1;
	} while (a<11);
	

}
