#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
main() {
    FILE *plik;
    plik=fopen("dane.txt","w");
    for(int i=0;i<10000;i++) {
        fprintf(plik,"%f\n",(rand()/(float)RAND_MAX)*( 2*3.40282*pow(10,38) )-( 3.40282*pow(10,38) ));
    }
    fclose(plik);
}