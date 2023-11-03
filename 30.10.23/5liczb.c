// wczytuj liczby całkowite od -10 d0 10 az do momentu kiedy zostanie wpisane 5 rozych liczb
#include <stdio.h>
#include <stdbool.h>

main () {
    int i,j=0,t[20]={0},t2[5],licznik=0;
    do{
        printf("podaj liczbę w zakresie od -10 do 10: ");
        scanf("%d",&i);
        if((i>=-10)&&(i<=10)) {
            if(t[i+10]==0) {
                t[i+10]=1;
                licznik++;
                t2[j]=i;
                j++;
            }
        } else printf("podawaj liczby w zakresie od -10 do 10\n");
    }while(licznik!=5);

    printf("wystąpiło 5 roznych liczb: ");
    for(int k=0;k<5;k++) printf("%d ",t2[k]);
    
}