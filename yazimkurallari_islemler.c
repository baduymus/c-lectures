//Yazim Kuralları ve İşlemler
 
 /*BU KOD BLOK KONUSUNU DENEMEK İÇİN HAZIRLANMIŞTIR
     */ 
#include<stdio.h>
int main(){
    // a isminde bir degisken main fonksiyonu
    //içerisinde tanımlanıyor.
    
    int a = 10;
    {
        //küme parantezleri ile bir alt blok oluşturuldu
        int a = 5;
        printf("\n%d",a);
        //scope of arrival
        // C DİLİNDE HER DEĞİŞKEN KENDİ ALANINDA(BLOKUNDA GEÇERLİDİR.)
    }

    printf("\n%d",a);
    return 0;

}

