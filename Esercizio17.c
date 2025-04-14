#include <stdio.h>

#define N 10

void calcolaMediaVettore(int input[], double output[], int n) {
    for (int i = 0; i < n; i++) {
        int somma = 0;
        int count = 0;

        // Somma i valori da i-2 a i+2, considerando nulli gli elementi fuori dai limiti
        for (int j = -2; j <= 2; j++) {
            int indice = i + j;
            if (indice >= 0 && indice < n) {
                somma += input[indice];
                count++;
            }
        }

        // Calcola la media
        output[i] = (double)somma / count;
    }
}

int main() {
    int vettore[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double vettore_calcolato[N];

    // Calcola il nuovo vettore
    calcolaMediaVettore(vettore, vettore_calcolato, N);

    // Stampa il vettore calcolato
    printf("Vettore calcolato:\n");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", vettore_calcolato[i]);
    }
    printf("\n");

    return 0;
}
