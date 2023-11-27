#include <stdio.h>

main() {
    FILE *plik;
    plik=fopen("dane.txt","r");
    if(plik==NULL) {
        printf("nie znaleziono pliku");
    } else {
        while(feof(plik)==0){
            
        }
    }
    fclose(plik);
}