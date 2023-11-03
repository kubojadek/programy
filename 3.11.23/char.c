#include <stdio.h>

main() {
    char c;
    int suma=0;
    printf("podaj liczby do zsumowania, k konczy program: ");
    do {
        scanf("%c",&c);
        if((c>=48)&&(c<=57)) {
            suma=suma+c-48;

        }

    } while(c!='k');
    printf("suma wynosi: %d",suma);
}