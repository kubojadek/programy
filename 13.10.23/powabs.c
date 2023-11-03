//   x<-3 - sinx(2)/2x, -3<=x<0 - 4√|x(3)+2x|+1, x>=0 - e(x+1/3)
#include <stdio.h>
#include <math.h>

main() {
    float x,y;
    scanf("%f", &x);
    if(x<-3.0) {
        y=sin(pow(x,2))/(2*x);

    } else if ((x>=-3.0)&&(x<0.0)) {
        y=pow(fabs(pow(x,3)+(2*x))+1.0,0.25);

    } else if(x>=0.0) {
       y=exp(x+(1.0/3.0));
    
    }
    printf("wynik:%f", y);

}