#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){

srand(time(NULL));
int i,j,N;
float max, min;
printf("podaj wielkosc macierzy\n");
scanf("%d",&N);
float macierz[N][N];
for(i=0;i<N;i++){
    printf("|");
    for(j=0;j<N;j++){
        macierz[i][j]=(rand()/(float)RAND_MAX)*30 - 20;
        printf(" %f ",macierz[i][j]);
        if(i==0 && j==0){
            max=macierz[i][j];
            min=macierz[i][j];
        }
        if(macierz[i][j]>max){
            max=macierz[i][j];

        }
        if(macierz[i][j]<min){
            min=macierz[i][j];
        }
    }
    printf("|\n");
}

printf ("max to %f min to %f ",max,min);

}