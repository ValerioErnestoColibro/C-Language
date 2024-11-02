#include <stdio.h>
#include <math.h>


int main(){
	int a, b, c;
	float x1, x2;
	float delta;
	
	printf("inserisci a: ");
	scanf("%d", &a);
	
	printf("inserisci b: ");
	scanf("%d", &b);
	
	printf("inserisci c: ");
	scanf("%d", &c);
	
	delta = pow(b, 2) - 4*a*c;
		
	if(a == 0){
		
	}

	
	if(delta < 0){
		printf("non ci sono soluzioni reali");
	}
	else{
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		
		printf("x1: %f\nx2: %f", x1, x2);
	}
}
