#include<stdio.h>

int main(){
    float vize,final;
    float ortalama = vize*0.4+final*0.6;
    printf("*****HARF NOTU HESAPLAMA*****");
    printf("Lutfen Vize ve Final Notlarinizi giriniz : ");
    scanf("%d%d",&vize,&final);
    printf("Not ortalamaniz : %d\n ",ortalama);
    

    //90 üzeri 
    if(ortalama>90){

        printf("HARF NOTUNUZ : A");
    }
    else if (ortalama>80 && ortalama<90)
    {
        printf("HARF NOTUNUZ : B");
    }
    else if (ortalama>70 && ortalama<80)
    {
        printf("HARF NOTUNUZ : A");
    }
    else{

        printf("HARF NOTUNUZ : F");
    }
    

}