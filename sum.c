#include <stdio.h>
int main(){
    int number,sum;
    int i=1;
    printf("enter n:");
    scanf("%d",&number);

    for(int i=1; i<=number; i=i+1){
        sum=sum+i;
    }
    printf("sum %d",sum);
    return 0;

}