#include <stdio.h>

void zamiana(float *px,float *py);

void zamiana(float *px,float *py) {
    float swap;
    swap=*px;
    *px=*py;
    *py=swap;
}

main() {
    float x,y;
    printf("podaj x i y:\n");
    scanf("%f%f",&x,&y);
    zamiana(&x,&y);

}