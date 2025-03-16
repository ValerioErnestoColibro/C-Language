#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	char password[20]; /* Array di testo lungo 20 caratteri */

	do{ /* Questo ciclo confronterà le password per almeno una volta */
		printf("Inserisci la password: ");
		scanf("%s",password);
	} while (strcmp(password,"segreto") != 0);
	/* La funzione "strcmp" confronta la password del sistema ("segreto") con la password inserita */
	/* Se la password inserita non corrisponde a quella del sistema, restituisce valore 0 e richiede di inserire una password */
	printf("Accesso consentito!\n");
}