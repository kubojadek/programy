#include <stdio.h>
#include <math.h>
#include <string.h>

int konwerter(char number[100],int opcja) {
    int decimal=0,lenght=strlen(number);
    char binarybuff[1000];
    switch (opcja) { 
        case 2:
            for(int i=0;i<lenght;i++) {
                if(number[i]=='1') {
                    decimal+=pow(2,lenght-1-i);
                }
            }
        break;

        case 4:
            for(int i=0;i<lenght;i++) {
            
            }
        break;

        case 8:

        break;

        case 16:

        break;
    }
    return decimal;
}

main() {
    char number[100];
    int decimal,opcja;
    printf("podaj w jakim systemie liczbowym wpisujesz dane (2-dwojkowy 4-czrworkowy 8-osemkowy 16-szesnastkowy) : ");
    scanf("%d",&opcja);
    printf("podaj liczbe: ");
    scanf("%s",number);
    decimal=konwerter(number,opcja);
    printf("liczba ta w sysytemie dziesietnym: %d",decimal);
}