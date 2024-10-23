/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Calcoliamo il perimetro di un quadrato
int main(int argc, char** argv) { 
	int lato, perimetro; //Dichiaro le variabili che mi interessano
	
	printf("Inserisci lato: "); //Inseriamo il valore della variabile direttamente nella console
	scanf("%d",&lato);
	
	perimetro=lato*4; //Diciamo di moltiplicare una variabile per 4
	
	printf("Il perimetro del quadrato di lato %d e' uguale a %d",lato,perimetro); //Scritta che viene stampata
	
	return 0;
}