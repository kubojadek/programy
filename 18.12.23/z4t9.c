#include <stdio.h>
#include <stdlib.h>

int minmax(int a,int N,float macierz[N][N],float *maxmin,int *wysX,int *wysY) {
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            if(i==0&&j==0) {
                *maxmin=macierz[i][j];
                *wysX=i; *wysY=j;
            }

            if(a==1) {
                if(*maxmin<macierz[i][j]) {
                    *maxmin=macierz[i][j];
                    *wysX=i; *wysY=j;
                }
            }
            if(a==2) {
                if(*maxmin<=macierz[i][j]) {
                    *maxmin=macierz[i][j];
                    *wysX=i; *wysY=j;
                }
            }
            if(a==3) {
                if(*maxmin>macierz[i][j]) {
                    *maxmin=macierz[i][j];
                    *wysX=i; *wysY=j;
                }
            }
            if(a==4) {
                if(*maxmin>=macierz[i][j]) {
                    *maxmin=macierz[i][j];
                    *wysX=i; *wysY=j;
                }
            }
        }
    }
}

main() {
    system("clear");
    int N,wysX,wysY,a;
    printf("podaj wielkosc macierzy kwadratowej NxN: ");
    scanf("%d",&N);
    float macierz[N][N],maxmin;
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            printf("podaj element [%d][%d] macierzy: ",i+1,j+1);
            scanf("%f",&macierz[i][j]);
        }
    }
    system("clear");
    printf("twoja macierz:\n\n");
    for(int i=0;i<N;i++) {
        printf("| ");
        for(int j=0;j<N;j++) printf("%f ",macierz[i][j]);
        printf("|\n");
    }
    printf("\n/-----------------------------\\\n");
    printf("| 1. max pierwsze wystąpienie |\n");
    printf("| 2. max ostatnie wystąpienie |\n");
    printf("| 3. min pierwsze wystąpienie |\n");
    printf("| 4. min ostatnie wystąpienie |\n");
    printf("| 5. koniec                   |\n");
    printf("\\-----------------------------/\n");
    scanf("%d",&a);

    minmax(a,N,macierz,&maxmin,&wysX,&wysY);

    if(a==1) printf("max: %f, pierwsze wystąpienie w macierzy: [%d][%d]",maxmin,wysX+1,wysY+1);  
    if(a==2) printf("max: %f, ostatnie wystąpienie w macierzy: [%d][%d]",maxmin,wysX+1,wysY+1);  
    if(a==3) printf("min: %f, pierwsze wystąpienie w macierzy: [%d][%d]",maxmin,wysX+1,wysY+1);
    if(a==4) printf("min: %f, ostatnie wystąpienie w macierzy: [%d][%d]",maxmin,wysX+1,wysY+1);

}