#include <stdio.h>

main() {
    int x,y,z,licznik1=0,licznik=3;
    printf("podaj liczbę: ");
    scanf("%d",&x);
    printf("podaj liczbę: ");
    scanf("%d",&y);

    while (licznik1!=1) {
        printf("podaj liczbę: ");
        scanf("%d",&z);
        if(x==1 && y==1 && z==1) {
        licznik1=1;
        licznik+=-1;
        } else {
            x=y;
            y=z;
            licznik++;
        }
    }
    printf("wyczytano %d liczb",licznik);
}
