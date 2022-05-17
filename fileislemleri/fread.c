#include<stdio.h>

int main(){


    FILE *f;
    char buffer[11];
    if(f = fopen("out.txt","r")){
        //elimizde bir buffermiz varsa sınırlı sayida 
        fread(buffer,1,10,f);
        buffer[10] = 0;
        fclose(f);
        printf("dosyanin ilk 10 karakteri:\n%s\n",buffer);
    }
    else{

        printf("Dosya acilamadi");
    }
    return 0;
}