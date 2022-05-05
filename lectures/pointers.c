#include<stdio.h>

int main(){

    /*int a=10;
    int *p;

    p = &a;

    printf("%d\n",*p); // p'nin gösterdiği yeri basar
    printf("%d\n",p); //p'nin değerini yani p'nin gösterdiği yerin
    //adresini basar

    printf("%d\n",a); // a'nın adresini basar
    printf("%d\n",&a); // a'nın adresini basar
    printf("%d\n",&p);// p'nin adresini basar

    return 0;*/

    //int myAge = 43;
    // *(yıldız) &(ampersant)
    //pointerlarda bir değişkendir.
        //size of demek bize bir değerin ram üzerinde kapladığı yer.
    //ampersant karakteri belirmemiş olduğumuz değişkenin adresini söyler bize
    //printf("%d",myAge);
    //printf("\n%d",&myAge); //myage in ramde tutulduğu adres
   // printf("\nmyAge degiskeninin boyutu %d byte",sizeof(myAge));
    
    //int *ptr = &myAge;




    /*  ptr nedir
        *ptr nedir
         &ptr nedir */

        //printf(" \nptr -->%d",ptr);
        //printf(" \n&ptr -->%d",&ptr);
        //printf(" \n*ptr -->%d",*ptr);


        double x = 30.0;
        
        printf("\n%f",x);
        printf("\n%d",&x);
        printf("\n%d",sizeof(x));

        //int *p = (int) &x; 
        
        double *p = &x;

        printf("\n*p---->%.0lf",*p);

        /*printf("\np---->%d",p);
        printf("\n&p---->%d",&p);
        printf("\n*p---->%f",*p);*/



}