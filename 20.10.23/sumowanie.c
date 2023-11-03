// wczytuj liczby od uzytkownika i sumuj je do momentu pojawienia się 0
#include <stdio.h>

main() {
    int liczba, suma=0, ile=0, licznik=0;
    scanf("%d", &liczba);
    do {
        if(liczba!=0)
            suma=suma+liczba;
        if(liczba<0)
            ile++;
    } while(liczba!=0);
    if(ile==0)
        printf("nie podano zadnych liczb mniejszych od 0 \n");
    else 
        printf("podano %d liczb mniejszych od 0 \n", ile);
    if(licznik!=0)
        printf("suma liczb wynosi %d \n",suma);
    else  
        printf("nie podano liczb do zsumowania");

}