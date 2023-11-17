#include <stdio.h>

float funkcja(float x);
void pisz(float x);

void pisz(float suma) {
    printf("\nwynik: %f ",suma);
}

float funkcja(float x) {
    float fx;
    if (x<0) {
        fx=(x*x*x);
    } else fx=(2*x);
    if(fx==0) fx=1;
    return fx;
}

main() {
    float x,suma=0.0;
    printf("podaj x:\n");
    scanf("%f",&x);
    for(int i=1;i<=10;i++) {
        suma+=((funkcja(i*x)+funkcja(x/i))/funkcja(x-i));
    }
    pisz(suma);
}
