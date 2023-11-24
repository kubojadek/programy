#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {
    int M,N;
    printf("podaj wielkosc tablicy N x M (N,M =<20): ");
    scanf("%d%d",&N,&M);
    float x[N][M];
    srand(time(NULL));
    //zerowanie tablicy
    for(int n=0;n<N;n++) {
        for(int m=0;m<M;m++) x[n][m]=0;
    }
    //losowanie pierwszego wiersza i kolumny
    for(int i=0;i<N;i++) x[0][i]=rand()%10;
    for(int j=0;j<M;j++) x[j][0]=rand()%10;
    //liczenie sredniej 
    for(int k=1;k<N;k++) {
        for(int l=1;l<M;l++) x[k][l]=(x[k][l-1]+x[k-1][l])/2.0;
        
    }
    //wyswietlenie tablicy
    for(int k=0;k<N;k++) {
        for(int l=0;l<M;l++) printf(" %f ",x[k][l]);
        printf("\n");
    }
    
    
}