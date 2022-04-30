/*  4 6 8 10
    6 9 12 15
    8 12 16 20
    10 15 20 25 */ 

    // iç içe döngülerde i li ve jli kısımların var olduğunu düşünebiliriz.

    #include<stdio.h>

    int main(){
        /*int i,j; //foo,bar
        for (i = 1; i < 10; i++){
            for (j = 1; j < 6; j++){
                    printf(" %d",i*j);

            }
            printf("\n");
        }*/
            
    //Ekrana yildizlarla "*" ile dik üçgen çizdirme

        int i,j;
        for(i = 1; i <= 5; i++){
            for (j = 1; j <= i ; j++){
                    printf("*");
            }

            printf("\n");
        }
        


    }