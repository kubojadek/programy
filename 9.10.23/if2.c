//xp xk to granice przedziału x∊<xp,xk>
#include <stdio.h>

main() {
    int xp,xk,pom;
    scanf("%d",&xp);
    scanf("%d",&xk);
    if(xp>xk) { 
        pom=xp;
        xp=xk;
        xk=pom;          
        printf("x∊<%d,%d>",xp,xk);
    } else {
        printf("x∊<%d,%d>",xp,xk);
    }
}