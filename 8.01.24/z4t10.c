#include <stdio.h>
#include <stdlib.h>

void mnozeniemacierzy(int M,int N,int O,int P,int A[M][N],int B[O][P],int AB[M][P]) {
    for(int i=0;i<M;i++) {
        for(int j=0;j<P;j++) {
            for(int k=0;k<N;k++) {
               AB[i][j]+=(A[i][k]*B[k][j]);
            }
        }
    }
}

main() {
    int M,N,O,P;
    system("clear");
    printf("podaj wielkość macierzy A (M,N) i macierzy B(O,P), pamięjaj ze N musi byc rowny O:\n");
    scanf("%d%d%d%d",&M,&N,&O,&P);
    int A[M][N],B[O][P],AB[M][P];
    if (N==O) {
        //zerowanie macierzy wynikowej
        for(int i=0;i<O;i++) {
            for(int j=0;j<P;j++) {
                AB[i][j]=0;
            }
        }
        //wypełnianie macierzy A i B
        for(int i=0;i<M;i++) {
            for(int j=0;j<N;j++) {
                printf("podaj A[%d][%d]: ",i+1,j+1);
                scanf("%d",&A[i][j]);
            }
        }
        printf("\n");
        for(int i=0;i<O;i++) {
            for(int j=0;j<P;j++) {
                printf("podaj B[%d][%d]: ",i+1,j+1);
                scanf("%d",&B[i][j]);
            }
        }
        //wyswietlanie macierzy A i B
        system("clear");
        printf("twoja macierz A:\n");
        for(int i=0;i<M;i++) {
            printf("| ");
            for(int j=0;j<N;j++) printf("%d ",A[i][j]);
            printf("|\n");
        }
        printf("twoja macierz B:\n");
        for(int i=0;i<O;i++) {
            printf("| ");
            for(int j=0;j<P;j++) printf("%d ",B[i][j]);
            printf("|\n");
        }
        //liczenie AB i wyswietlanie 
        mnozeniemacierzy(M,N,O,P,A,B,AB);

        printf("twoja macierz AB:\n");
        for(int i=0;i<M;i++) {
            printf("| ");
            for(int j=0;j<P;j++) printf("%d ",AB[i][j]);
            printf("|\n");
        }
    } else printf("N!=O nie mozna wykonac mnozenia!");
    
    
}