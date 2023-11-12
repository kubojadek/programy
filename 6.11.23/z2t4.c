#include <stdio.h>
#include <math.h>

main() {
    float L,eps,yi1,yi=0;
    printf("Podaj liczbę pierwiastkowaną: ");
    scanf("%f",&L);
    printf("podaj dokładność z jaką chcesz otrzymać wynik pierwiastkowania : ");
    scanf("%f",&eps);
    yi1=L/2;
    while(fabs(yi1-yi)>eps) {
        yi=yi1;
        printf("wejsciowa: %f\n",yi);
        yi1=(1.0/2.0)*(yi1+(L/yi1));
        printf("wyjsciowa: %f\n",yi1);
    }
    printf("wynik pierwiastkowania z dokładnością do %f to: %f\n",eps,yi);
}


