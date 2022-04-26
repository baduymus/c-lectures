   //Değişkenler
    
    /*Değişken İsmş
    Değişkenin Tipi
    Hafızadaki Yeri
    Değişkenin Değeri*/

    //int,float ,double,char

    //C dilindeki Değişken Kullanımı
#include<stdio.h>

int main(){

    /*int a = 10;
    int b = 3, c = 4;
    int d = 13;*/
    int x;

   // printf("a : %d, b : %d, c : %d",a,b,c);
   // printf(" d : %d",d);

    printf("Lutfen bir sayi giriniz:");
    scanf("%d",&x);
    printf("Girilen Sayi : %d\n",x);
    float pi = 3.14;
    printf("%8.4f",pi);

    //%d tırnak bitikten sonra ben bir değişken koyacam al o değişkeni %d den önceki değere koy

    //Özel sembollerin ekrana basılması
    /* \n
        \t
        \b
        \\
        \"*/
        printf("\n\\");

}