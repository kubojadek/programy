#include <stdio.h>

main() {
    float l, suma;
    for ( int i = 0; i < 3; i++) {
        scanf("%f", &l);
        suma = suma + l;
    }
    printf("wynik dodawania: %f", suma);

}