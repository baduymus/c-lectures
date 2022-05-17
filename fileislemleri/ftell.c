#include<stdio.h>

int main(){


    FILE *stream;

    stream = fopen("deneme.txt","w");

    fprintf(stream,"muhendis batu");

    printf("dosyadaki konumu : %ld\n",ftell(stream));

    fclose(stream);
    return 0;
}