#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

void xpxk(float xp,float xk,float dx) {
    float eps=dx/10;
    for(float i=xp;i<=xk+eps;i=i+dx) printf("%f\n",i);
}

float maxtab(float tab[],int N){
    srand(time(NULL));
    float max;
    for(int i=0;i<N;i++) {
        tab[i]=rand();
        if(i==0) max=tab[i];
        else if(max<tab[i]) max=tab[i];
    }
    return max;
}

void stringtransform(char s[255]){
    int lenght=strlen(s);
    printf("%d",lenght);
    char pom;
    for(int i=0;i<lenght-1;i++) {
        if(s[i]>=65&&s[i]<=90) s[i]+=32;
    }
    for(int i=0;i<lenght/2;i++) {
        pom=s[i];
        s[i]=s[lenght-2-i];
        s[lenght-2-i]=pom;
    }
    printf("%s",s);
}

float PdoX(float x,int p) {
    float pow=1;
    for(int i=1;i<=p;i++) {
        pow*=x;
    }
    return pow;
}

int silnia(int N) {
    int silnia=1;
    for(int i=1;i<=N;i++) {
        silnia*=i;
    }
    return silnia;
}

void eX(float *eXNmax,float *eXN1, float x,int Nmax) {
    for(int i=0;i<=Nmax;i++) {
        *eXNmax+=PdoX(x,i)/silnia(i);
        if(i<=1) *eXN1+=PdoX(x,i)/silnia(i);
    }
}

main() {
    int a,N,p,Nmax;
    float xp,xk,dx,max,x,eXNmax,eXN1;
    FILE *plik;
    do {
        system("clear");
        printf("/----------------------------------------------/\n");
        printf("| 1. <xp,xk> z krokiem dx                      |\n");
        printf("| 2. max z losowanej tablicy                   |\n");
        printf("| 3. pobieranie ciągow z pliku i modyfikowanie |\n");
        printf("| 4. x do potęgi p                             |\n");
        printf("| 5. n silnia                                  |\n");
        printf("| 6. liczba eulera do potegi x                 |\n");          
        printf("| 7. koniec                                    |\n");
        printf("/----------------------------------------------/\n");
        scanf("%d",&a);

        switch (a) {
            
            case 1: 
                printf("podaj xp, xk i dx: ");
                scanf("%f%f%f",&xp,&xk,&dx);
                xpxk(xp,xk,dx);
            break;

            case 3:
                plik=fopen("dane.txt","r");
                if(plik!=NULL) {
                    char s[255];
                    while(fgets(s,255,plik)!=NULL) {
                        stringtransform(s);
                    }
                }
                fclose(plik);
            break;

            case 4:
                printf("podaj x i potege p:");
                scanf("%f%d",&x,&p);
                printf("wynik= %f\n",PdoX(x,p));
            break;

            case 5:
                printf("podaj liczbe:");
                scanf("%d",&N);
                printf("n!= %d\n",silnia(N));
            break;

            case 6:
                printf("podaj x i Nmax: ");
                scanf("%f%d",&x,&Nmax);
                eXNmax=0;
                eXN1=0;
                eX(&eXNmax,&eXN1,x,Nmax);
                printf("e do x dla Nmax: %f\n",eXNmax);
                printf("e do x dla N=1: %f\n",eXN1);
                printf("wartosc funkcji exp(x): %f\n",exp(x));
            break;

            case 2:
                printf("podaj wielkość tablicy: ");
                scanf("%d",&N);
                float tab[N];
                for(int i=0;i<N;i++) {
                    tab[i]=rand();
                }
                max=maxtab(tab,N);
                printf("max=%f\n",max);
            break; 
     
        }
        getchar();
        getchar();
    } while(a!=7);

} 