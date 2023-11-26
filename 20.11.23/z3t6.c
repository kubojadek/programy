#include <stdio.h>

main() {
    int minindex,tab[20],min;
    for(int i=0;i<20;i++) {
        printf("podaj liczbę: ");
        scanf("%d",&tab[i]);
    }
    min=tab[0];
    for(int i=1;i<20;i++) {
        if(min>tab[i]) {
            min=tab[i];
            minindex=i;
        }
    }
    printf("\n");
    printf("najmniejsza liczba to: %d i tej miejsce w tablicy to i[%d]",min,minindex);
}