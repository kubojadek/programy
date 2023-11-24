#include <stdio.h>

main() {
    int x[19],min;
    int m;
    //wypełnianie tablicy
    for(int i=0;i<20;i++) {
        printf("podaj liczbę: ");
        scanf("%d",&x[i]);
    }
    //liczenie minimum w tablicy
    min=x[0];
    for(int i=0;i<20;i++) {
        if (min>x[i]) {
                min=x[i];
                m=i;
            }
    }
    //wyswietlanie tablicy
    for(int i=0;i<20;i++) {
        printf("%d ",x[i]);
    }
    printf("\n");
    printf("minimalna liczba w tablicy to %d w miejscu x[%d]",min);
}