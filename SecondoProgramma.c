#include <iostream>

// run this program using the console pauser or add your own getch, system("pause") or input loop

int main(int argc, char** argv) {	
	int i; // Qui dichiariamo con quali variabili lavoriamo 
	int j;	
	int somma;
	
	printf("Inserisci i:"); //Qui inseriamo i valori nella console
	scanf("%d",&i);
	printf("Inserisci j:");
	scanf("%d",&j);
	somma=i+j;
	
	printf("Ciao a tutti! Sappi che i=%d e j=%d. Proviamo a sommarli: somma=%d",i,j,somma); // Stampiamo la scritta "Ciao a tutti! Sappi che i=5 e j=4. Proviamo a sommarli: somma=9"
	// Il segno percentuale dice che bisogna mettere un numero decimale INTERO, poi inserisco i nomi delle variabili con cui voglio interagire 
	return 0;
}