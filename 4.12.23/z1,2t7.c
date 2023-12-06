#include <stdio.h>
#include <math.h>
#include <stdlib.h>
main() {
    FILE *dane,*raport,*ndane;
    float x,sumasr=0,suma1=0,srednia,sigma;
    int liczniksr=0,licznik1=0,licznik2=0,licznik3=0;
    dane=fopen("dane.txt","r");
    if (dane==NULL) {
        printf("nie otwarto pliku dane\n.");
    } else {
        while (feof(dane)==0) {
            fscanf(dane,"%f",&x);
            sumasr+=x;
            liczniksr++;
        }
        srednia=sumasr/liczniksr;
        fclose(dane);
    }

    dane=fopen("dane.txt","r");
    if (dane==NULL) {
        printf("nie otwarto pliku dane\n.");
    } else {
        while (feof(dane)==0) {
            fscanf(dane,"%f",&x);
            suma1+=pow(srednia-x,2);
        }
        sigma=sqrt((1.0/(liczniksr-1)*suma1));
        fclose(dane);
    }
    raport=fopen("raport.txt","w");
    ndane=fopen("ndane.txt","w");
    dane=fopen("dane.txt","r");
    if (dane==NULL) {
        printf("nie otwarto pliku dane\n.");
    } else {
        while (feof(dane)==0) {
            fscanf(dane,"%f",&x);
            if(x>srednia-(3*sigma)&&x<srednia+(3*sigma)) {
                licznik1++;
            } 
            if(x>srednia-(2*sigma)&&x<srednia+(2*sigma)) {
                licznik2++;
            }
            if(x>srednia-(sigma)&&x<srednia+(sigma)) {
                licznik3++;
                fprintf(ndane,"%f\n",x);
            }
        }
        fprintf(raport,"ilosc liczb w przedziale <x-s,x+s> to: %d\n",licznik3);
        fprintf(raport,"ilosc liczb w przedziale <x-2s,x+2s> to: %d\n",licznik2);
        fprintf(raport,"ilosc liczb w przedziale <x-3s,x+3s> to: %d\n",licznik1);
        fclose(raport);
        fclose(dane);
        fclose(ndane);
    }
    
}
