#include<stdio.h>
#include<stdlib.h>


/*
Yapı değişkenlerini oluşturabilmemiz için önce veri tipini
tanımlamamız gerekir. Bir yapı tanımlamak için struct anahtar sözcüğü kullanılır.

*typedef bir tip tanımlamaya yarar.

aşağıda bir insan yapısı tanımladım
insanın yapısının içerisindeki belirlenmis olan degiskenler
insan yapısının degiskenleri yani nasıl oluyorsa bir int veya double degiskeni gibi
insan yapısının içerisindeki örnegin yas degiskeni insan yapısının içerisinde tanımlanmıştır.
bu yas integer olarak tanımlı bir kendi degiskenimizi olustururken enum dan yararlanıyoruz.

enumaretor yani 'sayısı' veya 'numaralandırıcı' dan geliyor

bir insanın 2 olasılıklı cinsiyeti vardır.

bay veya bayan bunlar bize dönen değer 0 veya 1 
bay ise == 0
bayan ise == 1

insan yapısının içerisinde belirlemis oldugumuz cinsiyet tipini cagiriyoruz.

structları pointer olarakda kullanabiliriz.



*/
typedef enum{

    bay,//0
    bayan //1

}cinsiyet;


typedef struct {
    int yas;
    char *isim;
    cinsiyet c;

} insan;


int emeklimi(insan *birey){

    if(birey->c == bay && birey->yas > 55 ){
        return 1;
    }

    if(birey->c == bayan && birey->yas >50){
        return 1;
    }
    return 0;
}

int main(){

    

    
    /*batu degiskeni bir oointer olduğu için öncelikle bunun
    içerisine bir deger atamadan önce malloc memorial location yapmak
    gerekiyor

    degisken bir // struct pointeriysa 
    */


    int a;
    insan ali;
    insan *batu;
    batu = (insan*)malloc(sizeof(insan));
    batu -> yas = 24;
    ali.yas = 30;
    ali.c = bay;
    printf("\nBatunun yasi: %d",batu->yas);
    printf("\nAlinin yasi : %d",ali.yas);
    printf("\nAlinin cinsiyeti : %u",ali.c);


    printf("\nbatu emekli mi :%d",emeklimi(&batu));

    printf("\nali emekli mi  :%d",emeklimi(&ali));

    


}