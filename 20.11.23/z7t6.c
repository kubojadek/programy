#include <stdio.h>

main() {
    int M,N;
    printf("podaj wielkosc tablicy (N,M =<20): ");
    scanf("%d%d",&N,&M);
    float x[N][M],swap;
    //wypełnianie tablicy
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            printf("podaj liczbę: ");
            scanf("%f",&x[i][j]);
        }
    }
    //wyswietlanie tablicy
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) printf(" %f ",x[i][j]);
        printf("\n");
    }
    //transpozycja tablicy
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
           swap=x[i][j];
           x[i][j]=x[j][i];
           x[j][i]=swap;
        }
    }
    //wyswietlanie tablicy
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) printf(" %f ",x[i][j]);
        printf("\n");
    }
}