#include <stdio.h>
#include <math.h>

main () {
    int N;
    printf("podaj ile wyrazow tego ciągu a(i) = a(i-1)*√a(i-2)+a(i-3) chcesz zsumowac: ",N);
    scanf("%d",&N);
    float a[N],suma=0;
    a[0]=2;
    a[1]=1.5;
    a[2]=1;
    for(int i=3;i<(N+3);i++) {
        a[i]=a[i-1]*sqrt(a[i-2]+a[i-3]);
        suma=suma+a[i];
        
    }
    for(int j=3;j<(N+3);j++) {
        printf("%f\n",a[j]);

    }
    printf("suma=%f",suma);
}