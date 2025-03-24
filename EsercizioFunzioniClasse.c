#include <stdio.h>
#include <stdbool.h>

float media(int vettore[], int dim){

    int somma = 0;
    for(int i = 0; i < dim; i++){

        somma += vettore[i];
    }

    return (float)somma/dim;
}

int minimo(int vettore[], int dim){

    int min = vettore[0];
    for(int i = 1; i < dim; i++){

        if(vettore[i] < min){
            min = vettore[i];
        }
    }

    return min;
}

int massimo(int vettore[], int dim){

    int max = vettore[0];
    for(int i = 1; i < dim; i++){

        if(vettore[i] > max){

            max = vettore[i];
        }
    }

    return max;
}

int main(){

    int vettore[5] = {};

    printf("Dammi 5 numeri:\n");
    for(int i = 0; i < 5; i++){

        scanf("%d", &vettore[i]);
    }

    bool exit = true; int scelta; 
    while(exit){

        printf("\n1)Calcola Media\n");
        printf("2)Calcola Minimo\n");
        printf("3)Calcola Massimo\n");
        printf("4)Esci\n");
        printf("Inserisci scelta --> "); scanf("%d", &scelta);

        switch(scelta) {
            case (1): {

                printf("\nMedia: %.2f\n", media(vettore, 5));
                break;
            }
            case (2): {

                printf("\nMinimo: %d\n", minimo(vettore, 5));
                break;
            }
            case (3): {

                printf("\nMassimo: %d\n", massimo(vettore, 5));
                break;
            }
            case (4): {

                exit = false;
                break;
            }
            default: {

                printf("\nTasto errato, ripeti!\n");
                break;
            }
        }
    }

    return 0;
}

