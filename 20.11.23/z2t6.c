#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
    char a[1000],b[1000];
    int l=-1,j=0;
    gets(a);
    l=strlen(a);
    printf("%d\n",l);

    for(int i=0;i<l;i++) {
        if(a[i]!=32) {
            b[i]=a[i];
            j++;
        } 

    }
    puts(a);
    puts(b);
}