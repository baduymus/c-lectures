#include<stdio.h>

int main(){

    FILE *f;
    f = fopen("myfile.txt","w");
    fputs("elektrik elektronik",f);
    fseek(f,5,SEEK_SET); //SEEK_CUR, SEEK_END
    fputs(" batu",f);
    fclose(f);
    return 0;

}