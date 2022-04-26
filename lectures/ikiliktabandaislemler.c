/* KAYDIRMA İŞLEMLERİ (<<,>>)
VE İŞLEMİ(&)
VEYA İŞLEMİ(|) */

#include<stdio.h>

int main(){



    int a;
    int b = 5, c = 2;
    a = b&c; //b=0101 c=0010 a=0000
    b = c|a&2;
    c = c<<2; 
    printf("\n%d",a);
    printf("\n%d",b);
    printf("\n%d",c);


}
