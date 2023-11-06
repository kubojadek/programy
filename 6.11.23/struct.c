#include <stdio.h>
#include <string.h>
main() {
    struct data {
        int dd,mm,rrrr;
    };
    struct osoba {
        char nazwisko[20],imię[15];
        float wzrost;
        int wiek;
        struct data dataurodzenia;
    };
    struct osoba os1,os2;
    printf("podaj nazwisko: ");
    gets(os1.nazwisko);
    stropy(os1.imię,"Jan");
    os1.wzrost=2.01;
    printf("podaj wiek: ");
    scanf("%d",&os1.wiek);
    os2.wiek=os1.wiek;
    os1.dataurodzenia.dd=5;

}