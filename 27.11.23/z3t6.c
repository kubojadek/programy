#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {
    srand(time(NULL));
    FILE *plik;
    int N;
    float x,A;
    plik=fopen("dane.txt","w");
    if(plik==NULL) {
        printf("nie otworzono pliku");
    } else {
        printf("podaj ile liczb chcesz wylosować: ");
        scanf("%d",&N);
        printf("podaj A aby okreslic zakres losowanych liczb <-A,A>: ");
        scanf("%f",&A);
        for(int i=0;i<N;i++) {
            x=2*A*rand()/(float)RAND_MAX-A;
            fprintf(plik,"%f\n",x);
        }
    }

}