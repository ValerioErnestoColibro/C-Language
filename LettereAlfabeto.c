#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char scelta;
	
	printf("Vuoi stampare le lettere in MAIUSCOLO o minuscolo? (M/m) ");
	scanf("%c",&scelta);
	
	if(scelta == 'M' || scelta == 'm'){
		if (scelta == 'M') {
			printf("Alfabeto in MAIUSCOLO:\n");
			for (char lettera = 'A'; lettera <= 'Z'; lettera++){
				printf("%c\n", lettera);
			}
		} else {
		printf("Alfabeto in minuscolo: \n");
		for (char lettera = 'a'; lettera <= 'z'; lettera++){
			printf("%c\n", lettera);
		}
	}
} else {
	printf("Hai inserito una lettera sbagliata, riprova!");
}
	
	return 0;
}