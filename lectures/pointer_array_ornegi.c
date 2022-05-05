#include<stdio.h>


int main(){


    int ogrenci_notlari[3] = {30,60,90};
    printf("\nOgrencinin ilk notu : %d",ogrenci_notlari[0]);
   //printf("\nOgrencinin ikinci notu : %d",ogrenci_notlari[1]);
    //printf("\nOgrencinin ucuncu notu : %d",ogrenci_notlari[2]);

    int *ptr = &ogrenci_notlari[0]; //ogrencinotlari

    printf("\nogrencinin ilk adresi : %d",ptr);
    printf("\nogrencinin ikinci adresi : %d",ptr+1);

    printf("\nogrencinin ilk deger : %d",*ptr);
    printf("\nogrencinin ilk deger : %d",*(ptr+1));


}