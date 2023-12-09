#include <stdio.h>
#include <math.h>

float Fxy(float x,float y) {
    if(x<y){
        return (2*x)+(2*y);
    }
    if(x==y){
        return 3;
    }
    if(x>y){
        return pow(x,2)-sin(y);
    }
}

main() {
    float X0,Y0,Dx,Dy,suma=0;
    int Np,Nk;
    printf("podaj X0, Y0, Dx, Dy, Np, Nk:\n");
    scanf("%f%f%f%f%d%d",&X0,&Y0,&Dx,&Dy,&Np,&Nk);

    for(int i=Np;i<=Nk;i++){
        suma+=Fxy(X0+(i*Dx),Y0-(i*Dy));
    }
    printf("suma:%f",suma);
}