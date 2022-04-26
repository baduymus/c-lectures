//Matematiksel İşlemler
/*  -TEKİL İŞLEMLER(++) UNARY OPS
    -İKİLİ İŞLEMLER(+) BINARY OPS
MANTIKSAL İSLEMLER(>=)
LOGICAL OPERATORS
ATAMA İSLEMİ(=)
ASSIGNMENT OPERATORS */


#include<stdio.h>

int main(){

    int a = 10;
    int b=3,c=7;
    printf("\n%d",a+b);
    printf("\n%d",a<<2); 
    /* değeri sola kaydır. 2lik tabanda 0010 binary olarak gösterimi 1000 olacak.
    0101 <<2(sola 2 kaydır) -> 101000 sola kaydırıldığında bu olacak*/
    printf("\n%d",a%b);
    printf("\n%d",a==b); // matematikteki eşittir. a nın b nin eşit olduğunu söylüyor
    //C de boolean değerler yok(true ve false)1 veya 0 değerleri döndürür.
    printf("\n%d",a>b);
    printf("\n%d",a++); //Post increment
    printf("\n%d",++a); //pre increment
    return 0;
    

}