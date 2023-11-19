#include <stdio.h>

main() {
    int x,y,z,licznik1=0,licznik=2;
    printf("podaj liczbę: ");
    scanf("%d",&x);
    printf("podaj liczbę: ");
    scanf("%d",&y);

    while (x!=1 && y!=1 && z!=1) {
        printf("podaj liczbę: ");
        scanf("%d",&z);
            x=y;
            y=z;
            licznik++;
    }
    printf("wyczytano %d liczb",licznik);
}
