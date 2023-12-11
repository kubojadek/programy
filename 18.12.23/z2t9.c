#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Wodx(float wspolczynnik[],int N,float x){
    float sumawynik=0;
    for (int i=0;i<=N;i++) {
        sumawynik+=pow(x,i)*wspolczynnik[i];
    }
    return sumawynik;
}

main() {
    int N;
    float Wx,x;
    system("clear");
    printf("podaj stopien wielomianu: ");
    scanf("%d",&N);
    float wspolczynniki[N+1];
    for(int i=0;i<=N;i++) {
        printf("podaj wspolczynnik a%d: ",i);
        scanf("%f",&wspolczynniki[i]);
    }
    printf("podaj zmienna x: ");
    scanf("%f",&x);
    Wx=Wodx(wspolczynniki,N,x);
    printf("Wx to: %f",Wx);
}