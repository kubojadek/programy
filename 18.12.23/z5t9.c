#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int szukaj(char lancuch[], char lancuchSzukany[]) {
    int j,dlugoscSzukanego = strlen(lancuchSzukany),liczbawys=0,licznik=0,dlugosclancucha = strlen(lancuch);
    for(int i=0;i<dlugosclancucha;i++) {
        if(lancuch[i]==lancuchSzukany[0]) {
            for(j=0;j<dlugoscSzukanego;j++) {
                if(lancuch[i+j]==lancuchSzukany[j]&&dlugosclancucha-i>=dlugoscSzukanego) continue;
                else break;
            }
            if(j==dlugoscSzukanego) liczbawys++;
        }
    }
    return liczbawys;
}    

int main() {
    char lancuch[256];
    char lancuchSzukany[256];
    system("clear");
    printf("Podaj lancuch: ");
    gets(lancuch);
    lancuch[strcspn(lancuch, "\n")] = 0;

    printf("Podaj lancuch szukany: ");
    gets(lancuchSzukany);
    lancuchSzukany[strcspn(lancuchSzukany, "\n")] = 0;

    printf("Liczba wystapien '%s' w '%s' to: %d\n", lancuchSzukany, lancuch, szukaj(lancuch, lancuchSzukany));
}

