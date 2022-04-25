#include<stdio.h>

int main(){

int simdi_yil, dogum_tarihi;

int yas = simdi_yil - dogum_tarihi;

printf("\nLutfen Buldugunuz yili giriniz : ");
scanf("%d",&simdi_yil);
printf("\nGirmis Oldugunuz Yil : %d",simdi_yil);

printf("\nLutfen Dogum Tarihinizi Giriniz : ");
scanf("%d",&dogum_tarihi);
printf("\nGirmis Oldugunuz Dogum Yiliniz : %d",dogum_tarihi);

printf("\n2GUNCEL YASINIZ : %d", simdi_yil-dogum_tarihi);
return 0;


}
