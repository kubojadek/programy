#include <stdio.h>

main() {
    int M,N;
    printf("podaj wielkosc tablicy (N,M =<20): ");
    scanf("%d%d",&N,&M);
    float x[N][M],suma=0.0;
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
    //sumowanie wierszy
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            suma+=x[i][j];
        }
        printf("suma %d wiersza to: %f\n",i+1,suma);
        suma=0.0;
    }

}