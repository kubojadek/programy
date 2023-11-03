#include <stdio.h>

main() {
    float a,b,c,d,e,f,W,Wx,Wy,x,y;
    // ax + by = e
    // cx + dy = f
    printf("wprowadź wspołczynnik a i b i rozwiązanie e dla pierwszej części układu (ax + bx = e): ");
    scanf("%f%f%f",&a,&b,&e);

    printf("wprowadź wspołczynnik c i d i rozwiązanie f dla drugieh części układu (cx + dx = f): ");
    scanf("%f%f%f",&c,&d,&f);

    printf("układ rownan to :\n%fx + %fy = %f\n%fx + %fy = %f\n",a,b,e,c,d,f);
    
    // W = a * d - c * b  
    W = (a * d) - (c * b);
    // Wx = e * d - f * b
    Wx = (e * d) - (f * b);
    // Wy = a * f - c * e
    Wy = (a * f) - (c * e);
    if((W==0)&&(Wx==0)&&(Wy==0)) {
        printf("układ ma nieskończenie wiele rozwiązań");
    } else if (W==0) {
        printf("układ nie ma rozwiązań");
    } else {
        x = Wx/W;
        y = Wy/W;
        printf("rozwiązania układu rownan to : x=%f, y=%f ",x,y);
    }
    
}



