#include <stdio.h>
#include <math.h>


int main(){
	int a, b, c;
	float x, x1, x2;
	float delta;
	
	printf("Inserisci a: ");
	scanf("%d", &a);
	
	printf("Inserisci b: ");
	scanf("%d", &b);
	
	printf("Inserisci c: ");
	scanf("%d", &c);
	
	delta = pow(b, 2) - 4*a*c;
		
	if(a == 0){
		x = -c / b;
		printf("Si tratta di un'equazione di primo grado e la soluzione \x8a: %f\n", x);
	} else {
		printf("Si tratta di un'equazione di secondo grado");
			if(delta < 0){
			printf("Non ci sono soluzioni reali");
			}
			else{
				x1 = (-b + sqrt(delta)) / (2*a);
				x2 = (-b - sqrt(delta)) / (2*a);
		
				printf("x1: %f\nx2: %f", x1, x2);
			}
		}
		return 0;
	}
