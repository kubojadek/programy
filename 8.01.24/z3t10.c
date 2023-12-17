#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int konwerter(char number[100],int opcja) {
    int decimal=0,lenght=strlen(number);
    for(int i=0;i<lenght;i++) {
        if(number[i]>=48&&number[i]<=57) {
            decimal+=(number[i]-48)*pow(opcja,lenght-1-i);
        } else {
            decimal+=(number[i]-55)*pow(opcja,lenght-1-i);          
        }
    }   
    return decimal;
}

main() {
    char number[100];
    int decimal,opcja;
    system("clear");
    printf("podaj podstawę systemu w ktorym podajesz liczbe (2-16), inna liczba konczy program: ");
    scanf("%d",&opcja);   
    printf("podaj liczbe: ");
    scanf("%s",number);
    decimal=konwerter(number,opcja);
    printf("liczba ta w sysytemie dziesietnym: %d",decimal);
}