#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct punkt {
   float x,y; 
};

struct okreg {
    float promien;
    struct punkt S;
};

struct kwadrat {
    struct punkt wsA;
    struct punkt wsB;
};

main() {
    int a;
    struct punkt A,B;
    struct okreg ok1;
    do {
        printf("/-----------------------------/\n");
        printf("|1: odległosc miedzy punktami |\n");
        printf("|2: pole kola                 |\n");
        printf("|3: pole kwadratu             |\n");
        printf("|4: koniec                    |\n");
        printf("/-----------------------------/\n");
        scanf("%d",&a);       
        switch (a) {
            case 1:            
                printf("podaj wpsolrzedne puntku A i B:\n");
                scanf("%f%f%f%f",&A.x,&A.y,&B.x,&B.y);
                printf("odleglosc miedzy a i b to: %f",sqrt(pow(B.x-A.x,2)+pow(B.y-A.y,2)));
            break;
            case 2:          
                printf("podaj wspolzedne srodka okregu (x,y) i promien\n");
                scanf("%f%f%f",&ok1.S.x,&ok1.S.y,&ok1.promien);
                printf("pole kola to: %f",M_PI*ok1.promien*ok1.promien);
            break;
            case 3:
                printf("podaj wpsolrzedne puntku A i B:\n");
                scanf("%f%f%f%f",&A.x,&A.y,&B.x,&B.y);
                printf("pole kwadratu o przekatnej o takich punktach to: %f",pow(sqrt(pow(B.x-A.x,2)+pow(B.y-A.y,2)),2)/2);
            break;
        }
        printf("\n");
        system("PAUSE");
    } while (a!=4);
    
}
