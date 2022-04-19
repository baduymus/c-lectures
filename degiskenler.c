/*değişken programda kullanacağımız verileri komutlarla kullanacağımız değerlerdir.
 algoritme doğru şeyi doğru yerde doğru zamanda kullanmaktır.*/

#include<stdio.h>
#include<stdlib.h>

/* string harf ve metinler için kullanılan değişkendir
    int tam sayılar için kullanılır
    double ondalık sayıları için
    float
    char 
    long en büyük tam sayı değerini
    short küçük tam sayı değeri
    */

   int main(){

       /*char kitapadi[20] = "Mufettis";
       char kitapyazar[10] = "Gogol";
    //C dilinde yazdırma isleminde "%s" özel bir komut kullanıyoruz.
    //Buradaki s -scannerdan geliyor scan anlamı ekranda göster anlamında kullanıyoruz.
    printf("%s\n",kitapadi);
    printf("%s",kitapyazar);*/

    /*char kitaptur[10] = "Tiyatro kitabi";
    printf("Kitapturu : %s",kitaptur);*/

    char kitapadi[21] = "Avucunuzdaki kelebek";
    char yazar[30] = "Ahmet Serif Izgoren";
    char turu[10] = "Hikaye";
    char sayfa[3] = "124";
    char basimyil[4] = "2001";

    printf("******** Kitap Tanitim ********\n\n");
    printf("Kitap adi: %s\n",kitapadi);
    printf("Yazar: %s\n",yazar);
    printf("Turu: %s\n",turu);
    printf("Sayfa Sayisi: %s\n",sayfa);
    printf("Basim Yili: %s\n",basimyil);

   }