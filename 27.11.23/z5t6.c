#include <stdio.h>
#include <string.h>
#include <math.h>
main() {
    FILE *plik,*plik1;
    char binary[100];
    int lenght,decimal=0; 
    plik=fopen("dane.txt","r");
    plik1=fopen("wynik.txt","w");
    if(plik==NULL) {
        printf("nie znaleziono pliku");
    } else {
        while(fgets(binary,100,plik)!=NULL){
            lenght=strlen(binary);
            if(binary[lenght-1]==10) lenght--;
            for(int i=0;i<lenght;i++) {
                if(binary[i]-48==1) {
                    decimal+=pow(2,lenght-1-i);
                }
            }
            fprintf(plik1,"%d\n",decimal);
            decimal=0;
        }
    }
    fclose(plik);
    fclose(plik1);
}