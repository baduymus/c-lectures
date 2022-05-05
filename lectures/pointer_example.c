#include<stdio.h>


int main(){


    printf("POINTER ORNEGI");

    int x = 77;
    printf("\nx degiskeninin degeri -->%d",x);
    printf("\nx degerinin ram uzerindeki adresi-->%d",&x);


    /*int *ptr;
    printf("\n-->%d",&ptr);*/

    int *ptr = &x;

    

    printf("\n*ptr degiskenin degeri--> %d ",*ptr);
    printf("\n&ptr degiskenin adresi--> %d ",&ptr);
    printf("\nptr degiskenin adresi--> %d ",ptr);

    *ptr = 53;

    printf("\nx degiskeninin degeri -->%d",x);
    printf("\nx degerinin ram uzerindeki adresi-->%d",&x);

    
    



    


}