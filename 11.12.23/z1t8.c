#include <stdio.h>

void cramer(float *x,float *y,float macierz[2][3]) {
    float wyznacznik=(macierz[0][0]*macierz[1][1])-(macierz[0][1]*macierz[1][0]),Wx,Wy;
    Wx=(macierz[0][2]*macierz[1][1])-(macierz[0][1]*macierz[1][2]);
    Wy=(macierz[0][0]*macierz[1][2])-(macierz[0][2]*macierz[1][0]);
    *x=Wx/wyznacznik;
    *y=Wy/wyznacznik;
}

main() {
    float x,y,wyznacznik,macierz[2][3];
    char a='a';
    printf("podaj wspolczynniki w podanym uladzie rownan:\nax + by = c\ndx + ex = f\n");   
    for(int i=0;i<2;i++) {
        for(int j=0;j<3;j++) {
            printf("podaj %c [%d][%d]:\n",a,i+1,j+1);
            scanf("%f",&macierz[i][j]);
            a++;
        }
    }
    printf("| %f %f | %f |\n",macierz[0][0],macierz[0][1],macierz[0][2]);
    printf("| %f %f | %f |\n",macierz[1][0],macierz[1][1],macierz[1][2]);

    cramer(&x,&y,macierz);
    printf("x= %f y= %f",x,y);
}
