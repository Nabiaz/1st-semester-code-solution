#include<stdio.h>
int main(){
    struct student{
        int sub1, sub2, sub3;
        int id, total;
    };

    struct student s[20], temp;

    int n, i, j ;
    printf("Enter student number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("For student%d enter marks:",i+1);
        printf("\nsub1 = ");
        scanf("%d",&s[i].sub1);
        printf("\nsub2 = ");
        scanf("%d",&s[i].sub2);
        printf("\nsub3 = ");
        scanf("%d",&s[i].sub3);
        s[i].total = s[i].sub1 + s[i].sub2 + s[i].sub3;
        s[i].id = i+1;
    }

    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(s[j].total < s[j+1].total){
                temp = s[j];
                s[j]= s[j+1];
                s[j+1] = temp;
            }
        }
    }

    printf("\nID\tTOTAL\n");
    for(i=0;i<n;i++){
        printf("%d \t %d\n", s[i].id, s[i].total);
    }

    return 0;
}
