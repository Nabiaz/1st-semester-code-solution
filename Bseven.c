#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    fp = fopen("INVENTORY.txt", "a");

    char ch;
    printf("***Enter # to exit***");
    printf("\nEnter Item name, Number, Price and Quantity using Tab\n");

    do{
    scanf("%c",&ch);
    if(ch!='#')
        fputc(ch,fp);
    }while(ch!='#');

    fclose(fp);

    fp = fopen("INVENTORY.txt", "r");

    printf("***Read from INVENTORY.txt file: \n");
    printf("\nItem Name\tNumber\t\tPrice\t\tQuantity\n");

    while((ch=fgetc(fp))!=EOF){
        printf("%c",ch);
        if(ch=='\t'){
            printf("\t");
        }
    }

    fclose(fp);




return 0;
}

