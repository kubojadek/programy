#include <stdio.h>
#include <string.h>

int szukaj(char lancuch[], char lancuchSzukany[]) {
    int dlugoscSzukanego = strlen(lancuchSzukany);
    int dlugosclancucha = strlen(lancuch);

    int liczba = 0; // Liczba wystapien
    for(int i = 0; i <= dlugosclancucha - dlugoscSzukanego; i++) {
        if (strncmp(&lancuch[i], lancuchSzukany, dlugoscSzukanego) == 0) { 
            liczba++;
        }
    }
    return liczba;
}    

int main() {
    char lancuch[256];
    char lancuchSzukany[256];

    printf("Podaj lancuch: ");
    gets(lancuch);
    lancuch[strcspn(lancuch, "\n")] = 0;

    printf("Podaj lancuch szukany: ");
    gets(lancuchSzukany);
    lancuchSzukany[strcspn(lancuchSzukany, "\n")] = 0;

    printf("Liczba wystapien '%s' w '%s' to: %d\n", lancuchSzukany, lancuch, szukaj(lancuch, lancuchSzukany));

    return 0;
}