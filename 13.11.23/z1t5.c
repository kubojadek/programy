#include <stdio.h>
#include <math.h>

main() {
    float x,dok,suma=0.0;
    int n=0,nmax;
    printf("podaj liczbę x ∈ (-1,1): ");
    scanf("%f",&x);
    if(fabs(x)<1) {
        printf("podaj dokładność z jaką chcesz policzyć ln(1+x) (dokładność względem wyniku poprawnego): ");
        scanf("%f",&dok);
        printf("podaj n max dla ktorego chesz liczyć (najpierw policzona zostanie dokładność a nmax zostanie podane jezeli do nmax eps nie bedzie osiągnięty): ");
        scanf("%d",&nmax);
        do {
            suma=suma+(pow(-1,n)*pow(x,n+1))/(n+1);
            printf("%f\n",suma);
            n++;
        } while((n<nmax)&&fabs((pow(-1,n-1)*pow(x,n+1-1))/(n+1-1))>=dok);
        if(n==nmax) {
            printf("program osiągnąl nmax, suma dla nmax: %f ",suma); 
        } else printf("program osiągnął liczbę z dokładnością eps, suma policzona z dokładnością eps: %f",suma);
        
    } else printf("podany x nie nalezy do przedziału (-1,1)");
}