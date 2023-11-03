#include <stdio.h>
#include <stdlib.h>


main() {
    int i, liczba, max, min;
    for(i=0; i<10; i++) {
        scanf("%d", &liczba);
        if(i==0) {
            max=liczba;
            min=liczba;
        }
        if(max<liczba) {
            max=liczba;
        }
        if(min>liczba) {
            min=liczba;
        }
    }
    printf("najwieksza liczba z podanych to: %d ", max);
    printf("najmniejsza liczba z podanych to: %d ", min);

}