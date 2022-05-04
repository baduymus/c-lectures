#include<stdio.h>

int main(){

    int a=10;
    int *p;

    p = &a;

    printf("%d\n",*p); // p'nin gösterdiği yeri basar
    printf("%d\n",p); //p'nin değerini yani p'nin gösterdiği yerin
    //adresini basar

    printf("%d\n",a); // a'nın adresini basar
    printf("%d\n",&a); // a'nın adresini basar
    printf("%d\n",&p);// p'nin adresini basar

    return 0;

}