#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef enum{

    BilgisayarMuhendisi,        //0
    ElektrikMuhendisi,          //1
    ElektronikMuhendisi,        //2
    MakineMuhendisi,            //3
    MalzemeMuhendisi,           //4
    CevreMuhendisi,             //5
    InsaatMuhendisi,            //6
    OtomativMuhnedisi,          //7
    MekatronikMuhendisi         //8

}muhendislik_alani;



typedef struct{ //BURADA BİR MÜHENDİS DİYE YAPI OLUŞTURDUM.
    char *isim;
    int yas;
    //burada ben mühendislerin degiskenlerini olusturmak istiyorum.
    int maas;
    char ikametgah[10];
    muhendislik_alani alan;
}muhendis;



int main(){

    //farklı bir muhendisi tanımlarken muhendisi ismini tanımla bunun 
    muhendis batu;
    printf("Yasinizi giriniz:");
    scanf("%d",&batu.yas);
    //batu.yas = ;
    

    //batu.ikametgah[10] = 'Istanbul';


    batu.alan = ElektrikMuhendisi;

    //ElektrikMuhendisi = 'ElektrikMuhendisi';

    strcpy(batu.ikametgah,"istanbul");

    printf("\nBatunun yasi  : %d",batu.yas);

    printf("\nBatunun ikametgahi : %s",batu.ikametgah);

    printf("\nMuhendislik alani : %d",batu.alan);

    printf("\nBatunun MAASI : %d", batu.maas);


}