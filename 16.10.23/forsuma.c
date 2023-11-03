// program sumujący liczby od a do b (a=3 b=6 to 3+4+5+6)
#include <stdio.h>

main() {
    int a, b, i, y=0, pom;
    scanf("%d %d", &a, &b);
    if(a>b) {
        pom = a;
        a = b;
        b = pom;
    } 
    for ( i = a; i <= b; i++) {
        y = y + i;

    }
    printf("y = %d", y);


}