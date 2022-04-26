#include<stdlib.h>
#include<stdio.h>

int main(){

    /*char kitapad[20] = "Son Ada";
    printf("Kitap Adi: %s",kitapad);*/


    /*scanf kullanıcının veri girmesi gerektiği durumlarda kullanılyıor
    mesela diktörgenin alanını veya çevresini bulurken kullanıcının
    değerlerini almamız gerekiyor hesaplayabilmemiz için*/

    /*char kitapad[30];
    printf("Kitabin Adini Giriniz: ");
    scanf("%s",kitapad);*/
    //printf("Girmis olduğunuz kitap: %s",kitapad);
    /* Scanfde şöyle bir dezavantaj var scanf boşluktan sonraki değerleri almıyor.
    Tek kelime veriler için uygun olabilir fakat birden fazla
    giriş değeri verdiğimizde*/

    //Bir Personelin bilgilerini tutan bir menü yapıyorum.

    /*char Ad[10],Soyad[10],Yas[2],Sehir[13],Meslek[8];
    printf("Adiniz: ");
    scanf("%s",Ad);

    printf("Soyadiniz: ");
    scanf("%s", Soyad);

    printf("Yasiniz: ");
    scanf("%s",Yas);

    printf("Sehiriniz: ");
    scanf("%s",Sehir);

    printf("Mesleginiz: ");
    scanf("%s",Meslek);

    printf("\n");

    printf("Adi: %s - Soyadi: %s\n",Ad,Soyad);
    printf("Yasiniz: %s\n",Yas);
    printf("Meslek: %s - Sehir: %s\n",Meslek,Sehir);


    return 0; */

    // Ödev 
    /*kitap Adı
    yazari
    sayfa sayısı
    basim tarihi
    basim evi
    tür 
    olarak bir menü oluşturacağım*/

    char kitapadi[12];
    char yazari[5];
    char sayfa_sayisi[3];
    char basim_tarih[4];
    char basim_evi[11];
    char tur[10];

    printf("Lutfen Kitap Adi Giriniz: ");
    scanf("%s",kitapadi);
    printf("Girmis oldugunuz kitap adi : %s" ,kitapadi);


}