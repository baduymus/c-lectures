/*Bir şirket, çalışanlarına, fazla mesai ücreti
ödemektedir. Sizden ücreti hesaplayan bir program
yazmanız isteniyor. Programın özellikleri aşağıdaki
şekildedir.

10 saate kadar saat başına 5 TL  <10 5lira
10 ile 20 saat arasında, saat başına 3 lira 10>= ile 20< 3 lira
20 saatten sonra için , saat başına 2 lira 20> 2lira
*/

#include<stdio.h>

int main(){
    int mesai;
    printf("Lutfen kac saate mesai yaptigini giriniz : ");
    scanf("%d",&mesai);
    printf("Girilen mesai : %d\n",mesai);

    if(mesai<=10){

        printf("Calisanin mesai ucreti : %d" ,mesai*5);
        printf(" TRY");
    }
    else if(mesai>=10 && mesai<20){

        printf("Calisanin Mesai Ucreti: %d",mesai*5+(mesai-10)*3);
        printf(" TRY");
    }
    else if(mesai>=20){

        printf("Calisanin Mesai Ucreti : %d",80+(mesai-20)*2);
        printf("TRY");
    }


}
