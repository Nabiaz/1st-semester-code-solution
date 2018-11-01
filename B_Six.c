#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    fp = fopen("input.txt", "a");

    char ch;
    printf("***Enter 0 to exit***\n");

    do{
    scanf("%c",&ch);
    if(ch!='0')
        fputc(ch,fp);
    }while(ch!='0');

    fclose(fp);

    fp = fopen("input.txt", "r");
    printf("***Read from input.txt file: \n");
    while((ch=fgetc(fp))!=EOF){
        printf("%c",ch);
    }

    fclose(fp);




return 0;
}

