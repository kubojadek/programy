#include <stdio.h>

struct wektor {
    float Ax,Ay;
    float Bx,By;
    float lenght;
};

main(){
    struct wektor wektory[20];
    float min,max;
    int minpz=0,maxpz=0;
    for(int i=0;i<20;i++) {
        scanf("podaj wspolzedne poczatku wektora (xp,yp) i konca wektora (xk,yk):\n");
        scanf("%f%f%f%f",&wektory[i].Ax,&wektory[i].Ay,&wektory[i].Bx,&wektory[i].By);
        wektory[i].lenght=sqrt(pow(wektory[i].Bx-wektory[i].Ax,2)+pow(wektory[i].By-wektory[i].Ay,2));
        if (i==0) {
            min=wektory[i].lenght;
            max=wektory[i].lenght;
        } else if(min>wektory[i].lenght) {
            min=wektory[i].lenght;
            minpz=i;
        } else if(max<wektory[i].lenght) {
            max=wektory[i].lenght;
            maxpz=i;
        }
    }
    printf("najdłuzszy wektor to wektory[%d] = %f a najkrotszty wektor to wektory[%d] = %f",maxpz,max,minpz,min);
}