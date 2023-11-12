#include <stdio.h>
#include <math.h>

main() {
float x,n,sumay=0.0;
printf("Podaj x: ",x);
scanf("%f",&x);
printf("Podaj n: ",n);
scanf("%f",&n);
for(int i=-5; i<=n;i++) {
    if(x>0) {
    sumay=sumay+(pow(x,i)*sin(i*x));
    } else {
    sumay=sumay+(-pow(-x,i)*sin(i*x));
    }
}
printf("suma wynosi: %f",sumay);
}