#include<stdio.h>

int main(){
    int vize,final;
    printf("\n*****HARF NOTU HESAPLAMA*****");
    printf("Lutfen Vize ve Final Notlarinizi giriniz : ");
    scanf("%d%d",&vize,&final);
    int ortalama = (vize*0.4+final*0.6);
    printf("\nNot ortalamaniz : %d ",ortalama);
    

    //90 üzeri 
    if(ortalama>90){

        printf("HARF NOTUNUZ : A");
    }
    else if (ortalama>80)
    {
        printf("HARF NOTUNUZ : B");
    }
    else if (ortalama>70)
    {
        printf("HARF NOTUNUZ : C");
    }
    else{

        printf("HARF NOTUNUZ : F");
    }
    

}