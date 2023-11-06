#include <stdio.h>
#include <string.h>
#include <math.h>
main() {
    char s[20];
    int lenght,suma=0;
    printf("podaj liczbę: ");
    gets(s);
    lenght=strlen(s);
    for(int i=0;i<lenght;i++) {
        suma=suma+((s[i]-48)*pow(10,lenght-1-i));
    }
    printf("suma=%d",suma);
}