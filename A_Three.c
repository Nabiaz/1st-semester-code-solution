#include<stdio.h>
int main(){
    int i, input, div, rem;
    int digit=0, sum=0, pos_val=1;
    printf("Enter an integer: ");
    scanf("%d", &input);

    div = input;
    while(div != 0){
        div = div / 10;
        digit++;
    }
    printf("digit = %d", digit);

    for(i=0; i<digit-1; i++){
        pos_val = pos_val * 10;
    }
    printf("\npos_val = %d",pos_val);

    div = input;
    while(div != 0){
        rem = div % 10;
        div = div / 10;
        sum = sum + (rem * pos_val);
        pos_val = pos_val / 10;

    }
    printf("\nReverse number is %d", sum);





    return 0;



}
