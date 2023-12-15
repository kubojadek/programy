#include <stdio.h>
#include <stdlib.h>

int minmax(int N,float macierz[N][N],float *min, float *max,int *pwysX,int *pwysY,int *owysX,int *owysY) {
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
    int a;
    scanf("%d",&a);

    switch (a){
        case 1:
            for(int i=0;i<N;i++) {
                for(int j=0;j<N;j++) {
                    if(i==0&&j==0) {
                        *max=macierz[i][j];
                        *pwysX=i; *pwysY=j;
                    }
                    if(*max<macierz[i][j]) {
                        *max=macierz[i][j];
                        *pwysX=i; *pwysY=j;
                    }
                }
            }
        break;
    
        case 2:
            for(int i=0;i<N;i++) {
                for(int j=0;j<N;j++) {
                    if(i==0&&j==0) {
                        *max=macierz[i][j];
                        *owysX=i; *owysY=j;
                    }
                    if(*max<=macierz[i][j]) {
                        *max=macierz[i][j];
                        *owysX=i; *owysY=j;
                    }
                }
            }
        break;

        case 3:
            for(int i=0;i<N;i++) {
                for(int j=0;j<N;j++) {
                    if(i==0&&j==0) {
                        *min=macierz[i][j];
                        *pwysX=i; *pwysY=j;
                    }
                    if(*min>macierz[i][j]) {
                        *min=macierz[i][j];
                        *pwysX=i; *pwysY=j;
                    }
                }
            }
        break;

        case 4:
            for(int i=0;i<N;i++) {
                for(int j=0;j<N;j++) {
                    if(i==0&&j==0) {
                        *min=macierz[i][j];
                        *owysX=i; *owysY=j;
                    }
                    if(*min>=macierz[i][j]) {
                        *min=macierz[i][j];
                        *owysX=i; *owysY=j;
                    }
                }
            }
        break;
    }
    return a;
}

main() {
    system("clear");
    int N,pwysX,pwysY,owysX,owysY,a;
    printf("podaj wielkosc macierzy kwadratowej NxN: ");
    scanf("%d",&N);
    float macierz[N][N],min,max;
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            printf("podaj element [%d][%d] macierzy: ",i+1,j+1);
            scanf("%f",&macierz[i][j]);
        }
    }
    do {
        system("clear");
        a=minmax(N,macierz,&min,&max,&pwysX,&pwysY,&owysX,&owysY);
        switch (a) {
            case 1:
                printf("max: %f, pierwsze wystąpienie w macierzy: [%d][%d]",max,pwysX+1,pwysY+1);
            break;
                
            case 2:
                printf("max: %f, ostatnie wystąpienie w macierzy: [%d][%d]",max,owysX+1,owysY+1);
            break;

            case 3:
                printf("min: %f, pierwsze wystąpienie w macierzy: [%d][%d]",min,pwysX+1,pwysY+1);
            break;

            case 4:
                printf("min: %f, ostatnie wystąpienie w macierzy: [%d][%d]",min,owysX+1,owysY+1);
            break;
        }
        getchar();
        getchar();
    } while(a!=5);

}