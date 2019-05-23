#include <stdio.h>
#include <stdlib.h>
int main(){
    int amount,rate,time,result;

    printf("Enter the principle Amount:");
    scanf("%d",&amount);

    printf("Enter the Rate:");
    scanf("%d",&rate);

    printf("Enter the Time:");
    scanf("%d",&time);

    result=(amount*time*rate)/100;

    printf("The Simple Interest Result is:%d",result);
    return 0;
}
