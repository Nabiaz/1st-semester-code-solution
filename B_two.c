#include<stdio.h>

float power(float x, float n){
    float i, res=1.0;
    for(i=1; i<=n; i++){
        res = res * x;
    }
    return res;
}
float factorial(float n){
    float i, res=1.0;
    for(i=2; i<=n; i++){
        res = res * i;
    }
    return res;
}
int main(){
    float n, x, i, p, f, sign=1.0;
    float term, res=0.0;
    printf("Enter x = ");
    scanf("%f",&x);
    printf("Enter n = ");
    scanf("%f",&n);

    for(i=1; i<=n; i=i+2){
        p = power(x,i);
        f = factorial(i);
        term = (p/f) * sign;

        if (i>1 && sign == 1)
            printf(" + %f ", term);
        else
            printf("  %f ", term);

        sign = sign * (-1);
        res = res + term;
    }
    printf(" = %f",res);

return 0;
}
