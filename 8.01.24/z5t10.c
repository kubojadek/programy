#include <stdio.h>
#include <time.h>
#include <stdlib.h>

float mintab(int N, float tab[N]) {
    float min;
    for(int i=0;i<N;i++){
        if(i==0) min=tab[i];
        else if (min>tab[i]) min=tab[i];
    }
    return min;
}

float maxtab(int N, float tab[N]) {
    float max;
    for(int i=0;i<N;i++) {
        if(i==0) max=tab[i];
        else if (max<tab[i]) max=tab[i];
    }
    return max;
}

void wyznaczhistogram(int N,int p,float tab[N],int histogram[]) { 
    float krok=(maxtab(N,tab)-mintab(N,tab))/p;
    for(int i=0;i<N;i++) {
        for(int j=0;j<p;j++) {
            if(tab[i]>mintab(N,tab)+(krok*j)&&tab[i]<maxtab(N,tab)-(krok*(p-1-j))) histogram[j]++;
        }
    }
}

main() {
    srand(time(NULL));
    int N,p;
    printf("podaj wielkosc tablicy <=500 i ilosc przedzialow w histogramie <=10: ");
    scanf("%d%d",&N,&p);
    float tab[N];
    int histogram[p];
    // zerowanie histogramu i losowanie tablicy (po co wpisywac skoro mozna losowac)
    for(int i=0;i<N;i++) tab[i]=2*rand()-RAND_MAX;
    for(int i=0;i<p;i++) histogram[i]=0;
    
    wyznaczhistogram(N,p,tab,histogram); 

    printf("\nmax=%f min=%f\n",maxtab(N,tab),mintab(N,tab));
    float krok=(maxtab(N,tab)-mintab(N,tab))/p;
    for(int i=0;i<p;i++) {
        printf("<%f,%f> = %d\n",mintab(N,tab)+(krok*i),maxtab(N,tab)-(krok*(p-1-i)),histogram[i]);
    }   
}