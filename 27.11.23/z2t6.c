#include <stdio.h>

main() {
    float x,xp,xk,swap;
    FILE *plik;
    plik=fopen("wynik.txt","w");
    printf("podaj granicę przedziału xp i xk i krok x: ");
    scanf("%f%f%f",&xp,&xk,&x);
    if(xp>xk) {
        swap=xp;
        xp=xk;
        xk=swap;
    }
    for(float i=xp;i<=xk; i+=x) {
        fprintf(plik,"%f\n",i);
        fprintf(plik,"%f\n",i*i);
        fprintf(plik,"%f\n",i*i*i);
        fprintf(plik,"\n"); 
    }
    fclose(plik);
}