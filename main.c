#include <stdio.h>

int main() {
    float biglietto, prezzoF;
    char tipo;
    printf("inserisci il prezzo del biglietto:");
    scanf("%f", &biglietto);
    getchar();
    printf("inserisci il tipo di biglietto (S, D o P):");
    scanf("%c", &tipo);
    switch(tipo){
        case 'S':
            prezzoF = biglietto -(biglietto * 0.15);
            break;
        case 'D':
            prezzoF = biglietto -(biglietto * 0.25);
            break;
        case 'P':
            prezzoF = biglietto -(biglietto * 0.1);
            break;
        default:
            prezzoF = biglietto;
    }
    printf("il prezzo del biglietto e': %.2f", prezzoF);
    return 0;
}
