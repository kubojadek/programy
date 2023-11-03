#include <stdio.h>

main() {
    int i=1;
    for(i=1;i<=10;i++) {
         printf("%d", i);
        i++;
    }
    i=1;
    do {
        printf("%d", i);
        i++;

    } while(i<=10);
    i=1;
    while(i<=10) {
        printf("%d", i);
        i++;

    }
}