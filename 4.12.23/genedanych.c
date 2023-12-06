#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
main() {
        srand(time(NULL));
        FILE *dane;
        dane=fopen("dane.txt","w");
        double x,y,z1,z2;
        for(unsigned long long int i=0;i<5000000;i++) {
        x=(double)(rand()+1)/(1.0 + RAND_MAX);
        y=(double)(rand()+1)/(1.0 + RAND_MAX);
        z1=cos(2*M_PI*y)*sqrt(-2*log(x));
        z2=sin(2*M_PI*y)*sqrt(-2*log(x));
        fprintf(dane,"%lf\n",z1);
        fprintf(dane,"%lf\n",z2);
    }
}