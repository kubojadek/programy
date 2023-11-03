//policz √(x+2) x>=-2
#include <stdio.h>
#include <math.h>

main() {
    float x,y;
    scanf("%f",&x);
    if(x>=-2) {
        y=sqrt(x+2);
        printf("wynik :%f",y);
    } else {
        printf("wartosc pod pierwiastkiem kwadratowym nie moze byc mniejsza od 0");
    }

}