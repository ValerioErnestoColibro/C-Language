#include <stdio.h>

/* Definire una stringa di 100 char inizializzata come segue: "oggi è una bella giornata"
1) contare le parole e stampare il valore
2) sostituire le vocali con la seguente logica:
sostituire a con e
sostituire e con i
sostituire i con o
sostituire o con u
sostituire u con a
infine stampare la nuova stringa */

int main() {
    // Stringa iniziale
    char frase[100] = "Oggi \x8A una bella giornata";
    int count = 0; // Contatore di parole
    int i;

    // Conteggio delle parole
    for (i = 0; frase[i] != '\0'; i++) {
        if ((i == 0 || frase[i - 1] == ' ') && frase[i] != ' ') {
            count++; // Incrementa se inizia una nuova parola
        }
    }

    printf("Numero di parole: %d\n", count);

    // Sostituzione delle vocali
    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == 'a') frase[i] = 'e';
        else if (frase[i] == 'e') frase[i] = 'i';
        else if (frase[i] == 'i') frase[i] = 'o';
        else if (frase[i] == 'o') frase[i] = 'u';
        else if (frase[i] == 'u') frase[i] = 'a';
        else if (frase[i] == 'A') frase[i] = 'E';
        else if (frase[i] == 'E') frase[i] = 'I';
        else if (frase[i] == 'I') frase[i] = 'O';
        else if (frase[i] == 'O') frase[i] = 'U';
        else if (frase[i] == 'U') frase[i] = 'A';
    }

    printf("Nuova stringa: %s\n", frase);

    return 0;
}

