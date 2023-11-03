#include <stdio.h>
#include <math.h>

main () {
    int N;
    printf("podaj ile wyrazow tego ciągu a(i) = a(i-1)*√a(i-2)+a(i-3) chcesz zsumowac: ",N);
    scanf("%d",&N);
    float a[N],suma=0;
    a[0]=1;
    a[1]=1.5;
    a[2]=2;
    for(int i=0;i<N;i++) {
        if(i<3) {
            suma=suma+a[i];
        } else {
            a[i]=a[i-1]*sqrt(a[i-2]+a[i-3]);
            suma=suma+a[i];
        }

    }
    printf("suma=%f",suma);
}