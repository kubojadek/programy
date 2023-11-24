
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {
    srand(time(NULL));
    int licz[11]={0},x; 
    for (int i=0;i<1000;i++) {
        x=rand()%11+10; 
        licz[x-10]++; 
    }

    for (int i=0;i<11;i++) {
        printf("Liczba %d wystapila %d razy \n",i+10, licz[i]);
    }
}