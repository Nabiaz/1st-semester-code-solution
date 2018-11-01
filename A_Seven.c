#include<stdio.h>
#include<string.h>
int main(){
    int i, length;
    char input[100]="\0", output[100]="\0";

    printf("Enter a string: ");
    gets(input);

    strcpy(output, input);
    strrev(output);

    if(strcmp(input,output)==0){
        printf("%s is a palindrome string", input);
    }
    else{
        printf("%s is not a palindrome string", input);
    }

    return 0;
}

