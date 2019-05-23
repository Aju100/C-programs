#include <stdio.h>
#include <stdlib.h>
int main(){
    int x,y,result;

    printf("Enter First Integer:");
    scanf("%d",&x);

    printf("Enter Second Integer:");
    scanf("%d",&y);

    result=x+y;
    printf("The sum of x and y is :%d",result);
    return 0;
}
