#include <stdio.h>
#include <math.h>

main () {
    int np,nk,swap,suma=0,minall,minpk,nps;
    printf("podaj zakres wyrazow ciągu An = -n(2) + 15n + 50 ktore chcesz zsumować: ");
    scanf("%d%d",&np,&nk);
    nps=np;
    if(np>nk) {
        swap=np;
        np=nk;
        nk=swap;
    }
    printf("suma od wyrazu %d do wyrazu %d tego ciągu: ",np,nk);
    for(;np<=nk;np++) {
        suma=suma+((-1*np*np)+(15*np)+50);

    }
    printf("%d\n",suma);
    np=nps;
    printf("najmniejszy wyraz od 1 wyrazu do wyrazu %d to: ",nk);
    for(int i=1;i<=nk;i++) {
        if(i==1) {
            minall=(-1*i*i)+(15*i)+50;
        } else if (minall>(-1*i*i)+(15*i)+50) {
            minall=(-1*i*i)+(15*i)+50;
        }

    }
    printf("%d\n",minall);
    np=nps;
    printf("najmniejszy wyraz od %d wyrazu do wyrazu %d to: ",np,nk);
    for(;np<=nk;np++) {
        if(np==nps) {
            minpk=(-1*np*np)+(15*np)+50;
        } else if(minpk>(-1*np*np)+(15*np)+50) {
            minpk=(-1*np*np)+(15*np)+50;
        }

    }
    printf("%d",minpk);
}