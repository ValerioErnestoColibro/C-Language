#include <stdio.h>

int main() {
    FILE *file = fopen("access.log", "r");  
    if (file == NULL) {
        printf("Errore: file non trovato\n");
        return 1; 
    }

    char riga[256];  
    char login[] = "login mario.rossi";  
    int lunghezza_riga = 256;  
    int lunghezza_login = 17;  

    
    while (fgets(riga, lunghezza_riga, file)) {
        
        int i = 0;
        while (i < lunghezza_login && riga[i] != '\0') {
            if (riga[i] != login[i]) {
                break;  
            }
            i++;
        }

        
        if (i == lunghezza_login) {
            printf("Orario di login di mario.rossi: %s", riga + lunghezza_login + 1);
            break;  
        }
    }

    fclose(file);
    return 0;
}

