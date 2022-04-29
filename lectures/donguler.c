/* Döngüler 
-basit döngüler
iç içe döngüler(nested loops)
-örnekler*/

#include<stdio.h>

int main(){
    //döngü 3 bilgiden oluşur 1.
    /* 1.başlangıç değeri
    2. Bitiş değeri
    3. Adım değeri*/
    //Döngülerle ilgili bir hata varsa
    // Döngü kaçta başlıyor kaçta bitiyor ve nasıl adımlarını ilerliyor ileri mi gidiyor geri mi gidiyor.


    /*for(int i = 21;i<=50;i+=2){
        printf("%d ",i);


    }*/

    //while döngüsü

    //while döngüsünde başlangıç değerini döngüden önce belirtmemiz gerekiyor.
    // loop variable

    /*
     int i = 0;
     while (i<10)
     {
         printf("%d ",i);
         i++;
     }*/

     //do While Döngüsü
     //do while döngüsünde koşul sonda kontrol edildiği için 
     //koşul yanlışda olsa döngüye 1 kez girip gelebiliyor.

     /*int i = 0;

     do{
         printf("%d ",i);
         i++;
     }while(i<9);*/

     //20 ile 50 arasındaki tek sayıları ekrana bastıran kod yazımı:


    /*for(int i = 21;i<=50;i+=2){
        printf("%d ",i);
    }*/


     //100'den 20'ye kadar ,3'e ve 7'ye tam bölünen sayıları,büyükten
     //küçüğe doğru sırala

     /*for(int i = 100;i>=20; i--){
         if(i%21 == 0)
         printf("%d ",i);*/

     //Kullanicidan 3 adet sayi okuyup en
     //Büyüğünü ekrana yazan kod



     
    /*int girilen;
    int eb = 0;

    for(int i=0;i<5;i++){
        scanf("%d",&girilen);
        printf("simdiye kadar girilen eb sayi : %d ",eb);

        if(girilen>eb)
            eb= girilen;
    }
    printf("eb : %d",eb);*/



    //Kullanici -1 değerini girene kadar yazılan en büyüğünü bulan kod:

    int girilen = 0;
    int eb = 0;

    while(girilen != -1){
        printf("Lutfen bir sayi giriniz : ");
        scanf("%d",&girilen);
        printf("Girilen deger : %d\n", girilen);
        if(girilen>eb)
            eb = girilen;

    }
    printf("eb : %d",eb);
}