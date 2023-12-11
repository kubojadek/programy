#include <stdio.h>
#include <stdlib.h>

void transponowanie(int N,int macierz[N][N],int macierztrans[N][N]) {
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            macierztrans[i][j]=macierz[j][i];
        }
    }
}

main() {
    system("clear");
    int N;
    printf("podaj wielkosc macierzy kwadratowej NxN: ");
    scanf("%d",&N);
    int macierz[N][N],macierztrans[N][N];
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            printf("podaj element [%d][%d] macierzy: ",i+1,j+1);
            scanf("%d",&macierz[i][j]);
        }
    }

    system("clear");
    printf("twoja macierz przed transponowaniem:\n");
    for(int i=0;i<N;i++) {
        printf("| ");
        for(int j=0;j<N;j++) printf("%d ",macierz[i][j]);
        printf("|\n");
    }

    transponowanie(N,macierz,macierztrans);

    printf("twoja macierz po transponowaniu:\n");
    for(int i=0;i<N;i++) {
        printf("| ");
        for(int j=0;j<N;j++) printf("%d ",macierztrans[i][j]);
        printf("|\n");
    }

}