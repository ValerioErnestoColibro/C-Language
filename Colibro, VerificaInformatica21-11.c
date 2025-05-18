#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

#define PI 3.14159
#define DENSITA_ALLUMINIO 2.7

void main() {
    int raggio, scelta, i;
    double diametro, volume, peso;
    double pesi[4] = {0};
    double peso_complessivo = 0;

    printf("Scrivi un valore per il raggio R della sfera (in metri): ");
    if (scanf("%d", &raggio) != 1 || raggio <= 0) {
        printf("NO! Ricordati che il raggio deve essere un numero intero POSITIVO, non scordarlo\n");
        return;
    }

    do {
        printf("\n** MENU PRINCIPALE ** \n");
        printf("1- Calcola il diametro della sferaR\n");
        printf("2- Calcola il volume della sfera\n");
        printf("3- Calcola il peso della sfera di alluminio\n");
        printf("4- Calcola il vettore dei pesi delle sfere di alluminio e del peso complessivo\n");
        printf("5- Esci dal programma\n");
        printf("Scegli un'opzione: ");
        if (scanf("%d", &scelta) != 1) { 
            printf("NO! Devi inserire un numero valido.\n");
            break;
        }

        switch (scelta) {
            case 1:
                diametro = 2 * raggio;
                printf("Il diametro della sfera \x8A uguale a %.2f m\n", diametro);
                break;
            case 2:
                volume = (4.0 / 3.0) * 3.14 * pow(raggio, 3);
                printf("Il volume della sfera \x8A uguale a %.2f m^3\n", volume);
                break;
            case 3:
                volume = (4.0 / 3.0) * 3.14 * pow(raggio, 3);
                peso = volume * DENSITA_ALLUMINIO;
                printf("Il peso della sfera di alluminio \x8A uguale a %.2f kg\n", peso);
                break;
            case 4:
                for (i = 0; i < 4; i++) {
                    int fattore;
                    if (i == 3) {
                        fattore = 6;
                    } else {
                        fattore = 1 << i;
                    }
                    double volume_sfera = (4.0 / 3.0) * 3.14 * pow(fattore * raggio, 3); 
                    pesi[i] = volume_sfera * DENSITA_ALLUMINIO; 
                }
                peso_complessivo = pesi[0] + pesi[1] + pesi[2] + pesi[3];
                printf("Pesi delle sfere:\n");
                printf("r= %.2f kg\n", pesi[0]);
                printf("2*r= %.2f kg\n", pesi[1]);
                printf("4*r= %.2f kg\n", pesi[2]);
                printf("6*r= %.2f kg\n", pesi[3]);
                printf("Peso totale delle sfere= %.2f kg\n", peso_complessivo);
                break;
            case 5:
                printf("Arrivederci e alla prossima operazione!\n");
                break;
            default:
                printf("NO! Numero non valido, riprova!\n");
                break;
        }
    } while (scelta != 5);
}

