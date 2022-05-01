/* Burada dizileri anlamak için bir kaç
örnek yaptım*/

#include<stdio.h>

int main(){

    /*int idizi[10];
    idizi[0] = 21;
    idizi[1] = 35;
    idizi[2] = 34;


    printf("1. Index =  %d " ,idizi[0]);
    printf("2. Index = %d ",idizi[1]);
    printf("3. Index  = %d ",idizi[2]);

    return 0;*/


    /*int idizi[10];
    int id;
    // Dizinin elemanlarının 1-10 arasındaki değerleri sıra ile atama 
    for (id = 0; id <10; id++)
    {
        idizi[id] = id + 1;
    }

    //Dizinin değerlerini ekrana yazdırmak.
    for (id =0; id<10; id++)
    {
        printf("%d ", idizi[id]);
    }*/

    int ilk_dizim[5] = {8, 21,24,34,50};

    int id;

    for(id = 0; id<5; id++)
    {
        ilk_dizim[id] = id + 1;
        printf("%d ", ilk_dizim[id]);

        return 0;

        
    } 



    
    



}
