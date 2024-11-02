#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num1, num2, num3, maggiore;
    
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);
    
    printf("Inserisci il terzo numero: ");
    scanf("%d", &num3);
    
    if (num1 > num2 && num1 > num3) {
        maggiore = num1;
    } else if (num2 > num3) {
        maggiore = num2;
    } else {
        maggiore = num3;
    }
    
    printf("%d \x8a il numero maggiore\n", maggiore);
    
    return 0;
}
