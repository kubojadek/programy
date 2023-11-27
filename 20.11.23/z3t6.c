#include <stdio.h>

main() {
    int minindex,tab[20],min;
    for(int i=0;i<20;i++) {
        printf("podaj liczbę: ");
        scanf("%d",&tab[i]);
        if (i==0) {
            min=tab[0];
        } else if(min>tab[i]) {
            min=tab[i];
            minindex=i;
        }
    }
    printf("\n");
    printf("najmniejsza liczba to: %d i tej miejsce w tablicy to i[%d]",min,minindex);
}