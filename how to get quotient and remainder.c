#include <stdio.h>
int main()
{
    int numberFirst,numberSecond,remainder,result;

    printf("Enter First Number:");
    scanf("%d",&numberFirst);

    printf("Enter Second Number:");
    scanf("%d",&numberSecond);

    result=numberFirst/numberSecond;
    remainder=numberFirst%numberSecond;

    printf("The result of the Quotient is:%d \n",result);
    printf("The result of the remainder is:%d",remainder);

    return 0;
}

