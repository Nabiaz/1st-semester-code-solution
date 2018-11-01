#include<stdio.h>
#include<math.h>
int main(){
    float sum=0.0;
    int i, input;

    printf("For harmonic series:\nEnter n: ");
    scanf("%d", &input);

    for(i=1; i<=input; i++){
        sum = sum + (1 / pow(i,i));
    }

    printf("Sum of the harmonic function is %f", sum);
    return 0;
}

