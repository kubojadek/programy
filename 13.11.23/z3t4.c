#include <stdio.h>
#include <math.h>

main() {
    int N1,N2;
    float x,y,suma1=0.0,sumaall=0.0,suma2=0.0,mnoz=1.0;
    printf("podaj N1 i N2 i x:\n");
    scanf("%d%d%f",&N1,&N2,&x);
    for(int i=1;i<=N1;i++) {
        for(int j=-2;j<=i+3;j++) {
            suma1 += sin(j*x);
        }
        for(int p=1;p<=10;p++){
             for(int k=1;k<=p+N2;k++) {
                if(k==1) {
                    mnoz=cos(k*(2+p-x));
                } else {
                    mnoz*=cos(k*(2+p-x));
                }
            }
            suma2+=mnoz;
        }
        sumaall=suma1+suma2;
    }
    printf("y= %f",sumaall);
}