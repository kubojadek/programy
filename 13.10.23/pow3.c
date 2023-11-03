#include <stdio.h>
#include <math.h>

main() {
    float x,y;
    scanf("%f", &x);
    if(x>=0) {
        y=pow(x,1.0/3.0);
    } else {
        y=-pow(-x,1.0/3.0);
    } 
    printf("wynik: %f", y);
}