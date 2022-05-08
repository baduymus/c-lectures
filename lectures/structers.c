#include<stdio.h>
#include<stdlib.h>

typedef enum{

    bay,bayan

}cinsiyet;

typedef enum
{
    pazartesi,//0
    sali, //1 
    carsamba, // 2
    persembe, // 3
    cuma,
    cumartesi,
    pazar
}gunler;

typedef struct {
    int yas;
    char *isim;
    cinsiyet c;
    gunler tatilgunu;

} insan;


int main(){

    char **gunler;

    gunler[0] = 'pazartesi';
    gunler[1] = 'sali';
    gunler[2] = 'carsamba';
    gunler[3] = 'persembe';
    gunler[4] = 'cuma';
    
    insan batu;
    
    batu.tatilgunu = cuma;
    printf("batu TATIL GUNU : %u",batu.tatilgunu);

    int a;
    insan ali;
    ali.yas = 30;
    ali.c = bay;
    ali.tatilgunu = persembe;
    printf("\nAlinin yasi : %d",ali.yas);
    printf("\nAlinin cinsiyeti : %u",ali.c);
    //printf("\nAlinin tatil Gunu : %u",[ali.tatilgunu]);


}