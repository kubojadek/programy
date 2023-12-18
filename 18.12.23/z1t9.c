#include <stdio.h>
#include <math.h>

void wieszcholek(float a,float b,float c,float *p,float *q) {
    *p=(-b)/(2*a);
    *q=(a*pow(*p,2))+(b**p)+c;
}

main() {
    float a,b,c,p,q;
    printf("podaj wspolczynniki funkcji ax^2 + bx + c:\n");
    scanf("%f%f%f",&a,&b,&c);
    wieszcholek(a,b,c,&p,&q);
    printf("wspolrzedne wieszcholka to : <%f,%f>",p,q);

}