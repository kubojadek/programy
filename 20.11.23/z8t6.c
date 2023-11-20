#include <stdio.h>

main() {
    int M,N,m,n;
    printf("podaj wielkosc tablicy (N,M =<20): ");
    scanf("%d%d",&N,&M);
    float x[N][M],max;

    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            printf("podaj liczbę: ");
            scanf("%f",&x[i][j]);
        }
    }
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            if(i==0 && j==0) {
                max=x[0][0];
                m=i;
                n=j;
            } else if (max<x[i][j]) {
                max=x[i][j];
                m=i;
                n=j;
            }    
        }
    }
    for(int k=0;k<N;k++) {
        for(int l=0;l<M;l++) printf(" %f ",x[k][l]);
        printf("\n");
    }
    printf("maksimum to: %f\n",max);
    printf("ostatnie wystąpienie liczby maksymalnej to x[%d][%d]",m,n);
}