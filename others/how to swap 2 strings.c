#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

int main()
{
    char nameOne[100],nameTwo[100],output[100];

    printf("Insert First String: ");
    gets(nameOne);

    printf("Insert Second String: ");
    gets(nameTwo);

    printf("Name Before Swapping %s and %s",nameOne,nameTwo);

    strcpy(output,nameOne);
    strcpy(nameOne,nameTwo);
    strcpy(nameTwo,output);

    printf("Name After Swapping:%s and %s",nameOne,nameTwo);
    return 0;
}

