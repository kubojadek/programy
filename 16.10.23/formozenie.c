// wczytaj 10 liczb float i policz iloczyn tych liczb i sumę tych większych lub rownych -5
#include <stdio.h>

main() {
    float x, il=1.0, suma=0.0;
    printf("podaj 10 liczb rzeczywistych: ");
    for ( int i = 0; i < 10; i++) {
       scanf("%f", &x);
       il = il * x;
       if(x>=-5) {
        suma = suma + x;
        }
    }
    printf("wynik mnozenia: %f \n", il);
    printf("wynik dodawania: %f", suma);

}