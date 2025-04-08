#include <stdio.h>

void StampaVettore(int v[], int n){

    printf("\nVettore: ");
    for(int i = 0; i < n; i++){

        printf("%d ", v[i]);
    }
}


int main(){

    int vettore[20] = {2, 1, 3, 7, 87, 4, 3, 31, 7, 8, 4, 7, 7, 0, 7, -65, 0, 9, 1, 7};
    int conta[11] = {}; //tutti i valori sono a zero inizialmente

    for(int i = 0; i < 20; i++){

        if(vettore[i] >= 0 && vettore[i] < 10){

            conta[vettore[i]]++;

        } else { conta[10]++; }   
    }

    StampaVettore(vettore, 20);

    //Ha bisogno di una sua stampa più appropriata
    printf("\nVETTORE CONTA\n");
    for(int i = 0; i < 11; i++){
        if(i != 10){ printf("%d ripetuti: %d\n", i, conta[i]); }
        else { printf("Valori fuori scala: %d\n", conta[i]); }
    }

    return 0;
}