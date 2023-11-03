#include <stdio.h>

main () {
    int i, N, a, ap=1, app=0;
    printf("podaj ktorą libcze ciągu fibbonacciego chcesz dostać: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++) {
        a=ap+app;
        app=ap;
        ap=a;
    }
    printf("%d liczba ciągu fibbonacciego to: %d", N, app);


}