#include <stdio.h>

main() {
    float x,y;
    printf("podaj liczbe: ");
    scanf("%f",&x);
    if(x!=0) { 
    y=1/x;
    printf("odwrotnosc x to %f",y);
    } else {
        printf("x nie moze byc 0 !");
    }
}