#include <stdio.h>

main() {
    float tab[19],min;
    int minindex;
    for(int i=0;i<20;i++) {
        printf("podaj liczbę: ");
        scanf("%f",&tab[i]);
    }
    min=tab[0];
    for(int i=1;i<20;i++) {
        if(min>tab[i]) {
            min=tab[i];
            minindex=i;
        }
    }
}