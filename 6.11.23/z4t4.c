#include <stdio.h>
#include <math.h>

main() {
    float q,e,x,ps=1.0;
    int p=0,n;
    printf("podaj liczby n q e:\n");
    scanf("%d%f%f",&n,&q,&e);
    do {
        p++;
        for (int i=1;i<=p;i++) {
            ps=ps*i;
        }
        printf("p!= %f\n",ps);
        if(n-q>0) {
            x=(1/ps)*pow(n-q,p-1)*exp(n*q);
        } else {
            x=(1/ps)*(-pow(-(n-q),p-1))*exp(n*q);
        }
        printf("x= %f\n",x);
        ps=1.0;
    } while (x>e);
    printf("najmniejsze p dla ktorego spełniony jest warunek to: %d",p);
}