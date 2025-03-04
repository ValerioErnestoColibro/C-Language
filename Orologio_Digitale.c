#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

/* Esegui questo programma utilizzando la console o aggiungi il tuo proprio getch, system("pause") o un loop di input */

int main() {
    int hour, minute, second;
    hour = minute = second = 0; // Inizializzo l'ora, i minuti e i secondi a 0

    while(1) { // Ciclo infinito per il contatore del tempo
        system("clear"); // Pulisce la schermata ogni volta che aggiorniamo l'orologio
        printf("%02d : %02d : %02d", hour, minute, second); // Stampa l'orario formattato con due cifre per ogni parte
        
        second++; // Incrementa i secondi
        if (second == 60) { // Se i secondi raggiungono 60
            second = 0; // Resetta i secondi
            minute++; // Incrementa i minuti
        }

        if (minute == 60) { // Se i minuti raggiungono 60
            minute = 0; // Resetta i minuti
            hour++; // Incrementa l'ora
        }

        if (hour == 24) { // Se l'ora raggiunge 24 (mezzanotte)
            hour = 0; // Resetta l'ora a 0
            minute = 0; // Resetta i minuti a 0
            second = 0; // Resetta i secondi a 0
        }

        sleep(1); // Pausa di 1 secondo per simulare il passaggio del tempo
    }

    return 0; // Il programma termina (anche se non verrà mai raggiunto a causa del ciclo infinito)
}
