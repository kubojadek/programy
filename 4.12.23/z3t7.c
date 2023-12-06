#include <stdio.h>

main() {
    FILE *plik;
    float x,min=0,max=0,krok;
    int licznik=0,N;
    printf("podaj liczbę przedziałow N<=10:\n");
    scanf("%d",&N);
    int histogram[N];
    for(int i=0;i<N;i++) {
        histogram[i]=0;
    }

    plik=fopen("dane.txt","r");
    if(plik==NULL) {
        printf("nie znaleziono pliku");
    } else {
        while(feof(plik)==0){
            fscanf(plik,"%f",&x);
            if(licznik==0) {
                min=x;
                max=x;
            }
            if(min>x) {
                min=x;
            }
            if(max<x) {
                max=x;
            }
            licznik++;
        }
    }
    fclose(plik);

    krok=max-min;
    krok=krok/N;
    printf("max=%f min=%f krok=%f\n",max,min,krok);

    plik=fopen("dane.txt","r");
    if(plik==NULL) {
        printf("nie znaleziono pliku");
    } else {
        while(feof(plik)==0){
            fscanf(plik,"%f",&x);
            for(int i=0;i<N;i++){
                if(x>(min+(krok*i))&&x<(min+((i+1)*krok))) histogram[i]++;
            }
        }
    }
    fclose(plik);
    for(int i=0;i<N;i++) {
        printf("%d ",histogram[i]);
    }
}