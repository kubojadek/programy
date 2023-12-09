#include <stdio.h>

void cramer(int wyznacznik,int macierz[2][3],float *x,float *y) {
    int Wx,Wy;
    Wx=(macierz[0][2]*macierz[1][1])-(macierz[0][1]*macierz[1][2]);
    Wy=(macierz[0][0]*macierz[1][2])-(macierz[0][2]*macierz[1][0]);
    *x=(float)Wx/wyznacznik;
    *y=(float)Wy/wyznacznik;
}


int
main() {
    int macierz[2][3],wyznacznik;
    float x,y;
    char a='a';
    printf("podaj wspolczynniki w podanym uladzie rownan:\nax + by = c\ndx + ex = f\n");   
    for(int i=0;i<2;i++) {
        for(int j=0;j<3;j++) {
            printf("podaj %c [%d][%d]:\n",a,i+1,j+1);
            scanf("%d",&macierz[i][j]);
            a++;
        }
    }
    wyznacznik=(macierz[0][0]*macierz[1][1])-(macierz[0][1]*macierz[1][0]);
    printf("| %d %d | %d |\n",macierz[0][0],macierz[0][1],macierz[0][2]);
    printf("| %d %d | %d |\n",macierz[1][0],macierz[1][1],macierz[1][2]);

    if(wyznacznik!=0) {
        cramer(wyznacznik,macierz,&x,&y);
        printf("x= %f y= %f",x,y);
    } else printf("wyznacznik jest rowny 0!");

}
