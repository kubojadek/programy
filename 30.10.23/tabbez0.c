#include <stdio.h>

main () {
    int ta[5]={0},tb[5]={0},j=0,k=0;
    printf("podaj 5 liczb to tablicy a: ");
    for(int i=0;i<5;i++) {
        scanf("%d",&ta[i]);
        if(ta[i]!=0) {
            tb[j-k]=ta[j];
            j++;
        } else {
            j++;
            k++;
        }

    }
    printf("tablica a: ");
    for(int l=0;l<5;l++) printf("%d ",ta[l]);
    
    printf("\ntablica b: ");
    for(int o=0;o<5;o++) printf("%d ",tb[o]);

    /*
        if(ta[i]!=0) {
            tb[j]=ta[j-k];
            j++;
        } else {
            j++;
            k++;
        }
    */

}