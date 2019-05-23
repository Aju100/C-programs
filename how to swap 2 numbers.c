#include <stdio.h>
int main()
{
    int x,y;

    printf("Enter First Number:");
    scanf("%d",&x);

    printf("Enter Second Number:");
    scanf("%d",&y);

    x=x+y;
    y=x-y;
    x=x-y;

    printf("Your Final Output is: %d : %d",x,y);
    return 0;
}

