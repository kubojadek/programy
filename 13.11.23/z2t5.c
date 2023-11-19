#include <stdio.h>

main() {
    int x,y,z=0,licznik1=0,licznik=2;
    printf("podaj liczbę: ");
    scanf("%d",&x);
    printf("podaj liczbę: ");
    scanf("%d",&y);
    printf("podaj liczbę: ");
    scanf("%d",&z);

    while (x!=1 || y!=1 || z!=1) {
        x=y;
        y=z;
        printf("podaj liczbę: ");
        scanf("%d",&z);
        licznik++;
    }
    printf("wyczytano %d liczb",licznik);
}
