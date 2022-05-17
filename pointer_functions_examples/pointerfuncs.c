#include<stdio.h>

void add(int a, int b)
{
    printf("Addition is %d\n",a+b);

}
void substract(int a, int b){

    printf("Substraction is %d\n",a-b);
}

void multiply(int a,int b)
{
    printf("Multiplication is %d\n",a*b);
}

/*unsigned(imzasız (pozitif)tamsayılar)
Uno ve diğer ATMEGA kartlarında unsigned int,2 baytlık bir 
değeri depoladıkları için int olarak aynıdır. 
Bununla birlikte, negatif sayılar depolamak yerine sadece
0 ile 65,535(2^16-1) arasındaki pozitif değerleri toplar.*/

/*unsigned int sayac = 45555; //sayac değişkenine 45555 değerşi
atandı*/

int main(){

    void(*fun_ptr_arr[])(int, int) = {add,substract,multiply};
    unsigned int ch, a =15, b = 10;

    printf("Enter choice: 0 for add, 1 for subtract and 2 for multiply\n");

    scanf("%d",&ch);

    if(ch > 2) return 0;

    (*fun_ptr_arr[ch])(a,b);

    return 0;



}