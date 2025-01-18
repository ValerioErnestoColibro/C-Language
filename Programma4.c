#include <stdio.h>

int calcola_secondi(int ora, int minuto, int secondo) {
    return secondo + minuto * 60 + ora * 3600;
}

int main() {
    FILE *file = fopen("access.log", "r");
    if (!file) {
        printf("Errore nell'aprire il file\n");
        return 1;
    }

    char azione[20], utente[50], data[20];
    int login_time = 0, logout_time = 0;

    while (fscanf(file, "%s %s %s", azione, utente, data) == 3) {
        if (utente[0] == 'm' && utente[1] == 'a' && utente[2] == 'r' && utente[3] == 'i' &&
            utente[4] == 'o' && utente[5] == '.' && utente[6] == 'r' && utente[7] == 'o' &&
            utente[8] == 's' && utente[9] == 's' && utente[10] == 'i') {
            	
            int ora = (data[11] - '0') * 10 + (data[12] - '0');
            int minuto = (data[14] - '0') * 10 + (data[15] - '0');
            int secondo = (data[17] - '0') * 10 + (data[18] - '0');

            int tempo = calcola_secondi(ora, minuto, secondo);

            if (azione[0] == 'l' && azione[1] == 'o' && azione[2] == 'g' && azione[3] == 'i') {
                login_time = tempo;
            }
            else if (azione[0] == 'l' && azione[1] == 'o' && azione[2] == 'g' && azione[3] == 'o') {
                logout_time = tempo;
                printf("Durata sessione di mario.rossi: %d secondi\n", logout_time - login_time);
            }
        }
    }

    fclose(file);
    return 0;
}


