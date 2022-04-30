#include<stdio.h>


int main(){
    int x;
    printf("Bir sayi giriniz : ");
    scanf("%d",&x);
    printf("Sonuc = %d",fact(x));

}

int fact(int x){
    int sonuc = 1;

    for (int i = 1; i <=x; i++){
            sonuc *=i;
    }
    return sonuc;
}