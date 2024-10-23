/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int base, altezza, area;
	
	printf("Inserisci base: ");
	scanf("%d",&base);
	
	printf("Inserisci altezza: ");
	scanf("%d",&altezza);
	
	area=base*altezza;
	
	printf("L'area di un rettagolo con base %d e altezza %d e' uguale a: %d",base,altezza,area);	
	
	return 0;
}