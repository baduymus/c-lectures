// a^2+b^2+3c hesaplayan programı yaziniz.

#include<stdio.h>

int main(){
    int a,b,c;

    printf("\nLutfen a,b ve c degelerini giriniz : ");
    scanf("%d%d%d",&a,&b,&c);
    printf("\nDenklemin sonucu : %d",a*a+b*b+3*c);
}
