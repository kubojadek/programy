#include <stdio.h>
#include <math.h>

main() {
    float xp,xk,dx,srednia,max=0.0,swap,eps,x,sumasr=0.0, liczniksr=0.0;
    printf("Podaj zakres przedziału <xp,xk> i krok zmiany liczb w tym przedziale: ");
    scanf("%f %f %f",&xp,&xk,&dx);
    eps=dx/10;
    if (xp>xk) {
        swap=xp;
        xp=xk;
        xk=swap;
    }
    for(float i=xp;i<=xk+eps;i=i+dx) {
        if(i>0+eps) {
            if(sin(sqrt(i))>0) {
                x=pow(sin(sqrt(i)),1.0/3.0);
            } else {
                x=-pow(-sin(sqrt(i)),1.0/3.0);
            }         
        } else if(i<0-eps) {
            x=(i*i*i)+(1.0/i);
        } else if(i<=0+eps && i>=0-eps)  {
            x=3*sqrt(2.0);
        }
        sumasr=sumasr+x;
        liczniksr++;
        if(liczniksr==1) {
            max=x;
        } else if(max<x) {
            max=x;
        }     
        x=0;
    }
    srednia=sumasr/liczniksr;

    printf("maksymalna liczba z przeliczonych liczb z przedziału <%f,%f> z krokiem %f to %f a średnia tych liczb to %f",xp,xk,dx,max,srednia);
}