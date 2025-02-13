#include <stdio.h>

int main() {
    
    FILE *log_file = fopen("access.log", "r");
    FILE *csv_file = fopen("access.csv", "w");

    if (log_file == NULL || csv_file == NULL) {
        printf("Non posso aprire i file\n");
        return 1;
    }

    char azione[20], utente[50], data[20], ora[20];

    while (fscanf(log_file, "%s %s %s %s", azione, utente, data, ora) == 4) {
        fprintf(csv_file, "%s;%s;%s;%s\n", azione, utente, data, ora);
    }

    fclose(log_file);
    fclose(csv_file);

    printf("File access.csv creato!\n");
    return 0;
}

