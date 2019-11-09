#include <stdio.h>
int main()
{
    int x,y,z;

    printf("Enter First Number:");
    scanf("%d",&x);

    printf("Enter Second Number:");
    scanf("%d",&y);

    printf(" Before Swapped Numbers  are:%d and %d \n",x,y);

    z=x;
    x=y;
    y=z;

    printf("Numbers After Swapping :%d and %d",x,y);
    return 0;
}

