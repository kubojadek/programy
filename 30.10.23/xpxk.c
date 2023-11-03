#include <stdio.h>
#include <math.h>

main () {
    float x,xp,xk,swap,xps,xks;
    printf("podaj granicę przedziału xp i xk: ");
    scanf("%f%f",&xp,&xk);
    xps=xp;
    xks=xk;
    if(xp>xk) {
        swap=xp;
        xp=xk;
        xk=swap;
    }
    printf("podaj krok zmiany x w przedziale xp xk: ");
    scanf("%f",&x);
    printf("kolejne x z podanym wyzej krokiem: \n");
    for(;xp<=xk; xp=xp+x) {
        printf("%f\n",xp);
    }
    xp=xps;
    xk=xks;
    printf("kolejne x z podanym wyzej krokiem podniesione do kwadratu: \n");
    for(;xp<=xk; xp=xp+x) {
        printf("%f\n",xp*xp);
    }
    xp=xps;
    xk=xks;
    printf("kolejne x z podanym wyzej krokiem podniesione do sześcianu: \n");
    for(;xp<=xk; xp=xp+x) {
        printf("%f\n",xp*xp*xp);
    }
}
