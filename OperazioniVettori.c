#include <stdio.h>
#include <stdlib.h>

int main() {
    int vett1[4] = {1, 2, 3, 4}; /* Dichiara il primo vettore con i dati al suo interno */
    int vett2[4] = {5, 6, 7, 8}; /* Dichiara il secondo vettore con i dati al suo interno */
    int vett3[4]; /* Dichiara il terzo vettore che darà i risultati della somma */
    int prodotto_scalare; /* Dichiara una variabile che darà il risultato del prodotto scalare */
    int i; /* Questa sarà la variabile in cui memorizzeremo i risultati di ogni operazione nei vari cicli */

    /* Calcolo di VETT3 e del prodotto scalare */
	prodotto_scalare = 0;
	for (i = 0; i < 4; i++) { /* Partiamo da "i=0" e diciamo che il ciclo deve andare avanti finchè "i<4" e incrementa sempre di 1 */
    	vett3[i] = vett1[i] * vett2[i]; /* Calcoliamo la somma */
    	prodotto_scalare = prodotto_scalare + vett1[i] * vett2[i]; /* Calcoliamo il prodotto scalare facendo la somma E POI il prodotto */
	}

    /* Stampa di VETT3 */
    printf("Somma dei due vettori = ["); 
    for (i = 0; i < 4; i++) { /* Itera i valori di "vett3" a patto che questi abbia 4 elementi al suo interno */
        vett3[i] = vett1[i] + vett2[i];
		printf(" %d ", vett3[i]); /* Stampa la somma dei due vettori */
    }
    printf("]\n");

    /* Stampa del prodotto scalare */
    printf("Prodotto scalare = %d\n", prodotto_scalare);

    return 0;
}


