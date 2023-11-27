#include <stdio.h>

main() {
    FILE *plik,*plik1,*plik2;
    float x;
    plik=fopen("dane.txt","r");
    plik1=fopen("dane1.txt","w");
    plik2=fopen("dane2.txt","w");
    if(plik==NULL) {
        printf("nie znaleziono pliku");
    } else {
        while(feof(plik)==0) {
            fscanf(plik,"%f",&x);
            if(x>0) {
                fprintf(plik1,"%f\n",x);
            } else if(x<0) {
                fprintf(plik2,"%f\n",x);
            }
        }
    }
    fclose(plik);
    fclose(plik1);
    fclose(plik2);
}