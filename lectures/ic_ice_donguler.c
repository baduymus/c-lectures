/*  4 6 8 10
    6 9 12 15
    8 12 16 20
    10 15 20 25 */ 

    // iç içe döngülerde i li ve jli kısımların var olduğunu düşünebiliriz.

    #include<stdio.h>

    int main(){
        int i,j; //foo,bar
        for (i = 0; i < 5; i++){
            for (j = 0; j < 5; j++){
                    printf("%d",i*j);

            }
            printf("\n")
        }
            
    

    }