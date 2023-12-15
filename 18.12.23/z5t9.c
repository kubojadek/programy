#include <stdio.h>
#include <string.h>

int liczenie(char *lancuch, char *lancuchSzukany) {
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
    fgets(lancuch, 256, stdin);
    lancuch[strcspn(lancuch, "\n")] = 0;

    printf("Podaj lancuch szukany: ");
    fgets(lancuchSzukany, 256, stdin);
    lancuchSzukany[strcspn(lancuchSzukany, "\n")] = 0;

    printf("Liczba wystapien '%s' w '%s' to: %d\n", lancuchSzukany, lancuch, liczenie(lancuch, lancuchSzukany));

    return 0;
}