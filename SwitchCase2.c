#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int i, j, lato, altezza_bordi, larghezza_bordi, scelta;

printf("Scegli tra una di queste opzioni:\n");
printf("1) Disegna un quadrato pieno\n");
printf("2) Disegna un quadrato vuoto\n");
printf("3) Disegna un triangolo rettangolo pieno\n");
printf("4) Disegna un quadrato semipieno (tipo bicchiere)\n");
printf("-------------------------------\n");
printf("Inserisci la scelta: ");
scanf("%d",&scelta);


switch (scelta) {
	case 1: printf("Inserisci la dimensione del lato del quadrato: ");
    scanf("%d", &lato);
	for (i = 0; i < lato; i++) { /*Scandisce le righe*/
        for (j = 0; j < lato; j++) { /*Scandisce le colonne*/
            printf("* ");
        }
        printf("\n");
    }
    break;
    case 2: printf("Inserisci la dimensione del lato del quadrato: ");
    scanf("%d", &lato);
	printf("Quadrato vuoto:\n");
    for (i = 0; i < lato; i++) { /*Scandisce le righe*/
        for (j = 0; j < lato; j++) { /*Scandisce le colonne*/
            if (i == 0 || i == lato - 1 || j == 0 || j == lato - 1) { /* "i" se siamo nella prima colonna, "j" se siamo nella seconda colonna*/
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    break;
    case 3: printf("Inserisci la dimensione del lato del triangolo rettangolo: ");
    scanf("%d", &lato);
    for (i=1; i<=lato; i++) { /* Scandisce le righe */
    	for (j=1; j<=i; j++){ /* Scandisce le colonne */
    		printf("*");
		}
		printf("\n");
	}
break;
case 4: printf("Inserisci l'altezza dei bordi: ");
scanf("%d",&altezza_bordi);
printf("Inserisci la larghezza dei bordi: ");
scanf("%d",&larghezza_bordi);
for (int i = 0; i < larghezza_bordi; i++) {
        if (i >= 3 && i <= 7) {
            printf("*");
        } else {
            printf(" ");
        }
    }
    printf("\n");
    for (int i = 0; i < altezza_bordi; i++) {
        for (int j = 0; j < larghezza_bordi; j++) {
            if (j == 3 || j == 7) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = 0; i < larghezza_bordi; i++) {
        if (i >= 4 && i <= 6) {
            printf("*");
        } else {
            printf(" ");
        }
    }
    printf("\n");

break;

/*	case 4: printf("  *****  \n");
	printf(" *     * \n");
	printf(" *     * \n");
	printf(" *     * \n");
	printf("  *****  \n");
	printf("    *    \n");
	printf("    *    \n");
break; */
    
	default: printf("Scelta NON VALIDA!"); 
}
printf("\n");
	return 0;
}