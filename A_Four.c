#include<stdio.h>
int main(){
    int i, input, div, rem;
    int digit=0, sum=0, pos_val=1;
    printf("Enter an integer: ");
    scanf("%d", &input);

    div = input;
    while(div != 0){
        rem = div % 2;
        div = div / 2;
        sum = sum + (rem * pos_val);
        pos_val = pos_val * 10;

    }
    printf("\nBinary equivalent is %d", sum);
    return 0;
}
