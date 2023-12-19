#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int szukaj(char lancuch[], char lancuchSzukany[]) {
    int dlugoscSzukanego = strlen(lancuchSzukany),liczbawys=0,licznik=0,dlugosclancucha = strlen(lancuch);
    for(int i=0;i<dlugosclancucha;i++) {
        if(lancuch[i]==lancuchSzukany[0]) {
            for(int j=0;j<dlugoscSzukanego;j++) {
                if(dlugosclancucha-i>=dlugoscSzukanego) {
                    if(lancuch[i+j]==lancuchSzukany[j]) licznik++;
                    else break;
                }
            }
            if(licznik==dlugoscSzukanego) liczbawys++;
            licznik=0;
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

    return 0;
}

/*
for(int i = 0; i <= dlugosclancucha - dlugoscSzukanego; i++) {
        if (strncmp(&lancuch[i], lancuchSzukany, dlugoscSzukanego) == 0) { 
            liczba++;
        }
    }
*/