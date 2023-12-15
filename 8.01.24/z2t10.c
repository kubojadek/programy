#include <stdio.h>
#include <string.h>

void konwersjadecbin(int decimal,char binary[]) {
    char pom;
    for(int i=0;i<100;i++) {
        if(decimal%2==0) {
            binary[i]='0';
            decimal=decimal/2;
        } else if(decimal%2==1) {
            binary[i]='1';
            decimal=(decimal-1)/2;
        }
        if(decimal==0) break;
    }
    int lenght=strlen(binary);
    for(int i=0;i<lenght/2;i++) {
        pom=binary[i];
        binary[i]=binary[lenght-1-i];
        binary[lenght-1-i]=pom;
    }

}

main() {
    int decimal;
    char binary[100];
    printf("podaj liczbę : ");
    scanf("%d",&decimal);
    konwersjadecbin(decimal,binary);
    printf("%s",binary);
}