#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fpInput, *fpOutput;
    fpInput = fopen("input.txt", "r");
    fpOutput = fopen("output.txt", "w");

    char ch;
    while((ch=fgetc(fpInput))!=EOF){
        fputc(ch,fpOutput);
    }


    fclose(fpInput);
    fclose(fpOutput);


return 0;
}
