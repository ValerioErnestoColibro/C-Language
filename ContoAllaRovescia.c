#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main() {

int numero;

printf("Inserisci un numero da cui far partire il conto alla rovescia: ");
scanf("%d",&numero);

if (numero < 0) {
	printf("Il numero \x8A negativo! Niente conto alla rovescia!");
} else {
	printf("Conto alla rovescia! Sei pronto/a?\n");
	for (int i=numero; i >= 0; i--){
		printf("%d\n",i);
	}
}

}