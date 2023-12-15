#include <stdio.h>
#include <string.h>
#include <math.h>

main() {
    char dec[10];
    int decimal=0,lenght;
    printf("podaj liczbe (mniejsza niz 10 znakow): ");
    gets(dec);
    lenght=strlen(dec);
    for(int i=0;i<lenght;i++) {
        decimal+=(dec[i]-48)*pow(10,lenght-1-i);
    }
    printf("%d",decimal);
}